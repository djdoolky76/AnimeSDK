#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEKEIBNBMDJ.h"
#include "unitysdk/EnviromentSystemV2Space/OutputType.h"
#include "unitysdk/EnviromentSystemV2Space/PropertyType.h"
class AILLDGBCBGE;
class CBEBICGIOAB;
class GGJFAFONDHN;
class ODGPPIHLOFF;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AJLEDLIELON_BAAHEGAIGGF_OFFSET UNITYSDK_OFFSET(0x12CC4C00)
#define AJLEDLIELON_CKMGEEOAGAD_OFFSET UNITYSDK_OFFSET(0x12CC4FF0)
#define AJLEDLIELON_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC4540)
#define AJLEDLIELON_FFFJBMKNJNK_OFFSET UNITYSDK_OFFSET(0x12CC44F0)
#define AJLEDLIELON_FIBPMOCAPEG_OFFSET UNITYSDK_OFFSET(0x12CC48C0)
#define AJLEDLIELON_FJPEPCGNBIN_OFFSET UNITYSDK_OFFSET(0x12CC46D0)
#define AJLEDLIELON_GCCBGCAKLFJ_OFFSET UNITYSDK_OFFSET(0x12CC5160)
#define AJLEDLIELON_GFLMCJNNDLA_OFFSET UNITYSDK_OFFSET(0x12CC50E0)
#define AJLEDLIELON_HNLIEOKDGFH_OFFSET UNITYSDK_OFFSET(0x12CC4A30)
#define AJLEDLIELON_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CC5070)

inline static constexpr unsigned int AJLEDLIELON_TypeDefinitionIndex = 49458;

	class AJLEDLIELON : public ::AEKEIBNBMDJ
	{
	public:
		::AILLDGBCBGE* DFLKJNCOBIP; // 0x60
		::System::Boolean OODFNEJCEAH; // 0x68
		::System::Void _ctor(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AJLEDLIELON_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::EnviromentSystemV2Space::PropertyType FFFJBMKNJNK()
		{
			return ((::EnviromentSystemV2Space::PropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLEDLIELON_FFFJBMKNJNK_OFFSET))(this);
		}

		::System::Void FJPEPCGNBIN(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AJLEDLIELON_FJPEPCGNBIN_OFFSET))(this, a1);
		}

		::System::Void FIBPMOCAPEG(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AJLEDLIELON_FIBPMOCAPEG_OFFSET))(this, a1);
		}

		::System::Void HNLIEOKDGFH(::GGJFAFONDHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*))((::PBYTE)hIl2Cpp + AJLEDLIELON_HNLIEOKDGFH_OFFSET))(this, a1);
		}

		::ODGPPIHLOFF* BAAHEGAIGGF(::GGJFAFONDHN* a1, ::EnviromentSystemV2Space::OutputType a2, ::CBEBICGIOAB* a3)
		{
			return ((::ODGPPIHLOFF*(*)(::PVOID, ::GGJFAFONDHN*, ::EnviromentSystemV2Space::OutputType, ::CBEBICGIOAB*))((::PBYTE)hIl2Cpp + AJLEDLIELON_BAAHEGAIGGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CKMGEEOAGAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLEDLIELON_CKMGEEOAGAD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLEDLIELON_JLANKNHFKCN_OFFSET))(this);
		}

		::UnityEngine::GameObject* GFLMCJNNDLA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLEDLIELON_GFLMCJNNDLA_OFFSET))(this);
		}

		::System::String* GCCBGCAKLFJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJLEDLIELON_GCCBGCAKLFJ_OFFSET))(this);
		}

	};
