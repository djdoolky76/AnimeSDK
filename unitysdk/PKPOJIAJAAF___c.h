#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKPOJIAJAAF;
namespace System { class Object; }

#define PKPOJIAJAAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F24C980)
#define PKPOJIAJAAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F24C9B0)
#define PKPOJIAJAAF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F24C9C0)

inline static constexpr unsigned int PKPOJIAJAAF___c_TypeDefinitionIndex = 27420;

	class PKPOJIAJAAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPOJIAJAAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF___C_CTOR_OFFSET))(this);
		}

		::PKPOJIAJAAF* __cctor_b__33_0()
		{
			return ((::PKPOJIAJAAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
