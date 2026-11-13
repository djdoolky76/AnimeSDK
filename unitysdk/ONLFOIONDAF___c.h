#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONLFOIONDAF;
namespace System { class Object; }

#define ONLFOIONDAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC34F40)
#define ONLFOIONDAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC34F80)
#define ONLFOIONDAF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FC34F90)

inline static constexpr unsigned int ONLFOIONDAF___c_TypeDefinitionIndex = 29916;

	class ONLFOIONDAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28D20);
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
