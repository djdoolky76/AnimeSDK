#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateMgr.h"
class ELALAHMNKGK;
class PEINNEOBJDA;
namespace RPGCamera { class ICameraStateRunner; }

#define PEINNEOBJDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC036AF0)
#define PEINNEOBJDA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0368A0)
#define PEINNEOBJDA_EOHNMAENKNG_OFFSET UNITYSDK_OFFSET(0xC0368F0)
#define PEINNEOBJDA_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0xC036AC0)
#define PEINNEOBJDA_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0xC0369F0)
#define PEINNEOBJDA_OGLOMDGPBPA_OFFSET UNITYSDK_OFFSET(0xC036A70)

inline static constexpr unsigned int PEINNEOBJDA_TypeDefinitionIndex = 69734;

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
