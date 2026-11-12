#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHNMFCHEGGK;
namespace System { class Object; }

#define GHNMFCHEGGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F781BE0)
#define GHNMFCHEGGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F781C10)
#define GHNMFCHEGGK___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F781C20)

inline static constexpr unsigned int GHNMFCHEGGK___c_TypeDefinitionIndex = 26629;

	class GHNMFCHEGGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10760);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHNMFCHEGGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNMFCHEGGK___C_CTOR_OFFSET))(this);
		}

		::GHNMFCHEGGK* __cctor_b__58_0()
		{
			return ((::GHNMFCHEGGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNMFCHEGGK___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
