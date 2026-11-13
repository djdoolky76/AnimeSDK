#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OOHEEFDHPHM_CBLJKOMGOIF.h"
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class PhotoGraphSystem; }

#define OOHEEFDHPHM_ADDBFPKEHHE_OFFSET UNITYSDK_OFFSET(0x1969D720)
#define OOHEEFDHPHM_AHLNOJKJCAN_OFFSET UNITYSDK_OFFSET(0x1969D5D0)
#define OOHEEFDHPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1969CAE0)
#define OOHEEFDHPHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1969CAF0)
#define OOHEEFDHPHM_FBEBLCDEBKD_OFFSET UNITYSDK_OFFSET(0x1969D620)
#define OOHEEFDHPHM_GBCAIAFJPLE_OFFSET UNITYSDK_OFFSET(0x1969CB70)
#define OOHEEFDHPHM_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1969D780)
#define OOHEEFDHPHM_GKMMIMLAMPL_OFFSET UNITYSDK_OFFSET(0x1969CBC0)
#define OOHEEFDHPHM_IMJMMJFMIKG_OFFSET UNITYSDK_OFFSET(0x1969CC10)
#define OOHEEFDHPHM_KDJLKLHKIEN_OFFSET UNITYSDK_OFFSET(0x1969CFF0)
#define OOHEEFDHPHM_MDIHOAEFHDM_OFFSET UNITYSDK_OFFSET(0x1969D3D0)
#define OOHEEFDHPHM_OBFPCFCNCEL_OFFSET UNITYSDK_OFFSET(0x1969D6A0)
#define OOHEEFDHPHM_SET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1969D790)

inline static constexpr unsigned int OOHEEFDHPHM_TypeDefinitionIndex = 62311;

	class OOHEEFDHPHM : public ::System::Object
	{
	public:
		::RPG::Client::PhotoGraphSystem* CFKHNPGEAJA; // 0x10
		::System::Boolean ACHIHIAHLOE; // 0x18
		::System::Boolean _IsRecording_k__BackingField; // 0x19
		::System::Boolean KMHDACLOFJI; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single LGHKGAKFNDM; // 0x1C
		::System::Void _ctor(::RPG::Client::PhotoGraphSystem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_DISPOSE_OFFSET))(this);
		}

		::System::Void GKMMIMLAMPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_GKMMIMLAMPL_OFFSET))(this);
		}

		::System::Void GBCAIAFJPLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_GBCAIAFJPLE_OFFSET))(this);
		}

		::OOHEEFDHPHM_CBLJKOMGOIF MDIHOAEFHDM()
		{
			return ((::OOHEEFDHPHM_CBLJKOMGOIF(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_MDIHOAEFHDM_OFFSET))(this);
		}

		::System::Void IMJMMJFMIKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_IMJMMJFMIKG_OFFSET))(this);
		}

		::System::Void KDJLKLHKIEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_KDJLKLHKIEN_OFFSET))(this);
		}

		::System::Void AHLNOJKJCAN(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_AHLNOJKJCAN_OFFSET))(this, a1);
		}

		::System::Void FBEBLCDEBKD(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_FBEBLCDEBKD_OFFSET))(this, a1);
		}

		::System::Void OBFPCFCNCEL(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_OBFPCFCNCEL_OFFSET))(this, a1);
		}

		::System::Void ADDBFPKEHHE(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_ADDBFPKEHHE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecording()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_GET_ISRECORDING_OFFSET))(this);
		}

		::System::Void set_IsRecording(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHEEFDHPHM_SET_ISRECORDING_OFFSET))(this, a1);
		}

	};
