#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAMLFNCBFHI;
namespace System { class Object; }

#define CAMLFNCBFHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20352F20)
#define CAMLFNCBFHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20352F60)
#define CAMLFNCBFHI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20352F70)

inline static constexpr unsigned int CAMLFNCBFHI___c_TypeDefinitionIndex = 28278;

	class CAMLFNCBFHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAMLFNCBFHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMLFNCBFHI___C_CTOR_OFFSET))(this);
		}

		::CAMLFNCBFHI* __cctor_b__23_0()
		{
			return ((::CAMLFNCBFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMLFNCBFHI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
