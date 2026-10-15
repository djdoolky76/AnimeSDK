#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class CENEFPOMFKG;
class KEGBDNLENHP;

#define KEGBDNLENHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB36FD00)
#define KEGBDNLENHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xB36FC90)
#define KEGBDNLENHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB36FC40)
#define KEGBDNLENHP_GET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xB36FCE0)
#define KEGBDNLENHP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB36FBF0)
#define KEGBDNLENHP_SET_SKILLDATA_OFFSET UNITYSDK_OFFSET(0xB36FCF0)

inline static constexpr unsigned int KEGBDNLENHP_TypeDefinitionIndex = 54087;

	class KEGBDNLENHP : public ::CMPGEAFHHDC
	{
	public:
		::CENEFPOMFKG* _SkillData_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBDNLENHP_CTOR_OFFSET))(this);
		}

		::KEGBDNLENHP* KPJGDHLENIP(::CENEFPOMFKG* a1)
		{
			return ((::KEGBDNLENHP*(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + KEGBDNLENHP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBDNLENHP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBDNLENHP_GETEVENTTYPE_OFFSET))(this);
		}

		::CENEFPOMFKG* get_SkillData()
		{
			return ((::CENEFPOMFKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGBDNLENHP_GET_SKILLDATA_OFFSET))(this);
		}

		::System::Void set_SkillData(::CENEFPOMFKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CENEFPOMFKG*))((::PBYTE)hIl2Cpp + KEGBDNLENHP_SET_SKILLDATA_OFFSET))(this, a1);
		}

	};
