#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/System/Object.h"
class CBEBICGIOAB;
class GGJFAFONDHN;
class ODGPPIHLOFF;
class ONCAOGIEEIG;
class POJFJPIBLII;

#define ONCAOGIEEIG___C__DISPLAYCLASS26_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF4C5C0)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__0_OFFSET UNITYSDK_OFFSET(0xBF4E210)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__1_OFFSET UNITYSDK_OFFSET(0xBF4E900)
#define ONCAOGIEEIG___C__DISPLAYCLASS26_0__APPLYPROPERTYWITHRESLOADING_B__2_OFFSET UNITYSDK_OFFSET(0xBF4EAF0)

inline static constexpr unsigned int ONCAOGIEEIG___c__DisplayClass26_0_TypeDefinitionIndex = 49441;

	class ONCAOGIEEIG___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::POJFJPIBLII* loadingObj; // 0x10
		::CBEBICGIOAB* du; // 0x18
		::ODGPPIHLOFF* h; // 0x20
		::ONCAOGIEEIG* __4__this; // 0x28
		::GGJFAFONDHN* p; // 0x30
		::ODGPPIHLOFF* asyncResLoadingHandle; // 0x38
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
