#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class GGJFAFONDHN;
class ODGPPIHLOFF;
class ONCAOGIEEIG;
class POJFJPIBLII;

#define ONCAOGIEEIG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC84A060)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xC84BCB0)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0xC84C3C0)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0xC84C5B0)

inline static constexpr unsigned int ONCAOGIEEIG___c__DisplayClass26_0_TypeDefinitionIndex = 50517;

	class ONCAOGIEEIG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::CBEBICGIOAB* du; // 0x10
		::ONCAOGIEEIG* __4__this; // 0x18
		::GGJFAFONDHN* p; // 0x20
		::ODGPPIHLOFF* asyncResLoadingHandle; // 0x28
		::POJFJPIBLII* loadingObj; // 0x30
		::ODGPPIHLOFF* h; // 0x38
		::EnviromentSystemV2Space::OutputType tp; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_0_CTOR_OFFSET))(this);
		}

		::System::Void _ApplyPropertyWithResLoading_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET))(this, a1);
		}

		::System::Void _ApplyPropertyWithResLoading_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET))(this);
		}

		::System::Void _ApplyPropertyWithResLoading_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET))(this);
		}

	};
