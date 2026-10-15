#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelNPCInfoOverride; }
namespace RPG::GameCore { class VisitorBehaviorConfigRow; }

#define NHECDKIDHDB_CLDOHKHNDIL_OFFSET UNITYSDK_OFFSET(0xBBBF1F0)
#define NHECDKIDHDB_CTOR_OFFSET UNITYSDK_OFFSET(0xBBBEE40)
#define NHECDKIDHDB_EPAMIIDFNEA_OFFSET UNITYSDK_OFFSET(0xBBBF2B0)
#define NHECDKIDHDB_FNNOGPKFALG_OFFSET UNITYSDK_OFFSET(0xBBBF0F0)
#define NHECDKIDHDB_GDFOOPJDGKM_OFFSET UNITYSDK_OFFSET(0xBBBF140)
#define NHECDKIDHDB_GET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xBBBF1B0)
#define NHECDKIDHDB_GET_ISMEET_OFFSET UNITYSDK_OFFSET(0xBBBF1D0)
#define NHECDKIDHDB_GET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xBBBF290)
#define NHECDKIDHDB_GET_VISITORID_OFFSET UNITYSDK_OFFSET(0xBBBF190)
#define NHECDKIDHDB_HIEIGBIMEMN_OFFSET UNITYSDK_OFFSET(0xBBBF0A0)
#define NHECDKIDHDB_HLBDOMHHMNK_OFFSET UNITYSDK_OFFSET(0xBBBF240)
#define NHECDKIDHDB_SET_BEHAVIORID_OFFSET UNITYSDK_OFFSET(0xBBBF1C0)
#define NHECDKIDHDB_SET_ISMEET_OFFSET UNITYSDK_OFFSET(0xBBBF1E0)
#define NHECDKIDHDB_SET_OVERRIDEINFO_OFFSET UNITYSDK_OFFSET(0xBBBF2A0)
#define NHECDKIDHDB_SET_VISITORID_OFFSET UNITYSDK_OFFSET(0xBBBF1A0)

	class NHECDKIDHDB : public ::System::Object
	{
	public:
		::RPG::GameCore::VisitorBehaviorConfigRow* IGHAHBNLIJA; // 0x10
		::RPG::GameCore::LevelNPCInfoOverride* _OverrideInfo_k__BackingField; // 0x18
		::System::Boolean _IsMeet_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _BehaviorID_k__BackingField; // 0x24
		::System::UInt32 _VisitorID_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NHECDKIDHDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_VisitorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_GET_VISITORID_OFFSET))(this);
		}

		::System::Void set_VisitorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHECDKIDHDB_SET_VISITORID_OFFSET))(this, a1);
		}

		::System::UInt32 get_BehaviorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_GET_BEHAVIORID_OFFSET))(this);
		}

		::System::Void set_BehaviorID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHECDKIDHDB_SET_BEHAVIORID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMeet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_GET_ISMEET_OFFSET))(this);
		}

		::System::Void set_IsMeet(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHECDKIDHDB_SET_ISMEET_OFFSET))(this, a1);
		}

		::System::Void CLDOHKHNDIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHECDKIDHDB_CLDOHKHNDIL_OFFSET))(this, a1);
		}

		::System::UInt32 HIEIGBIMEMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_HIEIGBIMEMN_OFFSET))(this);
		}

		::System::UInt32 FNNOGPKFALG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_FNNOGPKFALG_OFFSET))(this);
		}

		::System::UInt32 GDFOOPJDGKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_GDFOOPJDGKM_OFFSET))(this);
		}

		::System::UInt32 HLBDOMHHMNK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_HLBDOMHHMNK_OFFSET))(this);
		}

		::RPG::GameCore::LevelNPCInfoOverride* get_OverrideInfo()
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_GET_OVERRIDEINFO_OFFSET))(this);
		}

		::System::Void set_OverrideInfo(::RPG::GameCore::LevelNPCInfoOverride* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNPCInfoOverride*))((::PBYTE)hIl2Cpp + NHECDKIDHDB_SET_OVERRIDEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 EPAMIIDFNEA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHECDKIDHDB_EPAMIIDFNEA_OFFSET))(this);
		}

	};
