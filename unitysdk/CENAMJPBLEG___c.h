#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CENAMJPBLEG;
namespace System { class Object; }

#define CENAMJPBLEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204D3FE0)
#define CENAMJPBLEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204D4020)
#define CENAMJPBLEG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x204D4030)

inline static constexpr unsigned int CENAMJPBLEG___c_TypeDefinitionIndex = 35214;

	class CENAMJPBLEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x663B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CENAMJPBLEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG___C_CTOR_OFFSET))(this);
		}

		::CENAMJPBLEG* __cctor_b__38_0()
		{
			return ((::CENAMJPBLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CENAMJPBLEG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
