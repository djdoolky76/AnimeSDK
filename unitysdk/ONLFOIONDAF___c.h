#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONLFOIONDAF;
namespace System { class Object; }

#define ONLFOIONDAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECE410)
#define ONLFOIONDAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECE450)
#define ONLFOIONDAF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DECE460)

inline static constexpr unsigned int ONLFOIONDAF___c_TypeDefinitionIndex = 29261;

	class ONLFOIONDAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DA40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONLFOIONDAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF___C_CTOR_OFFSET))(this);
		}

		::ONLFOIONDAF* __cctor_b__43_0()
		{
			return ((::ONLFOIONDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
