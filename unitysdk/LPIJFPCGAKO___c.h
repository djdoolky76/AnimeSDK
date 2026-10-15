#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPIJFPCGAKO;
namespace System { class Object; }

#define LPIJFPCGAKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2510)
#define LPIJFPCGAKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2550)
#define LPIJFPCGAKO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9A2560)

inline static constexpr unsigned int LPIJFPCGAKO___c_TypeDefinitionIndex = 29709;

	class LPIJFPCGAKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x448B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPIJFPCGAKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIJFPCGAKO___C_CTOR_OFFSET))(this);
		}

		::LPIJFPCGAKO* __cctor_b__33_0()
		{
			return ((::LPIJFPCGAKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPIJFPCGAKO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
