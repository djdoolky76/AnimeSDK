#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateMgr.h"
class ELALAHMNKGK;
class PEINNEOBJDA;
namespace RPGCamera { class ICameraStateRunner; }

#define PEINNEOBJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x10455FE0)
#define PEINNEOBJDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10455D90)
#define PEINNEOBJDA_EOHNMAENKNG_OFFSET UNITYSDK_OFFSET(0x10455DE0)
#define PEINNEOBJDA_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x10455FB0)
#define PEINNEOBJDA_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0x10455EE0)
#define PEINNEOBJDA_OGLOMDGPBPA_OFFSET UNITYSDK_OFFSET(0x10455F60)

inline static constexpr unsigned int PEINNEOBJDA_TypeDefinitionIndex = 71691;

	class PEINNEOBJDA : public ::RPGCamera::CameraStateMgr
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEINNEOBJDA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEINNEOBJDA_DISPOSE_OFFSET))(this);
		}

		::System::Void EOHNMAENKNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEINNEOBJDA_EOHNMAENKNG_OFFSET))(this);
		}

		::ELALAHMNKGK* NJDMJODMLFF()
		{
			return ((::ELALAHMNKGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEINNEOBJDA_NJDMJODMLFF_OFFSET))(this);
		}

		::RPGCamera::ICameraStateRunner* OGLOMDGPBPA()
		{
			return ((::RPGCamera::ICameraStateRunner*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEINNEOBJDA_OGLOMDGPBPA_OFFSET))(this);
		}

		static ::PEINNEOBJDA* GGBLHEHJBDO()
		{
			return ((::PEINNEOBJDA*(*)())((::PBYTE)hIl2Cpp + PEINNEOBJDA_GGBLHEHJBDO_OFFSET))();
		}

	};
