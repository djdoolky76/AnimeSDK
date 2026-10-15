#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPEINOKFCI;
namespace RPG::GameCore { class MiddleMissionPackConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EDHBLGMGBNC_CTOR_OFFSET UNITYSDK_OFFSET(0x13315860)
#define EDHBLGMGBNC_GET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x13315B70)
#define EDHBLGMGBNC_HJDMPHGDBOC_OFFSET UNITYSDK_OFFSET(0x133158D0)
#define EDHBLGMGBNC_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0x13315870)
#define EDHBLGMGBNC_SET_MISSIONID_OFFSET UNITYSDK_OFFSET(0x13315B80)

	class EDHBLGMGBNC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::EOPEINOKFCI*>* LMFJFMJACAE; // 0x10
		::System::UInt32 _MissionID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBLGMGBNC_CTOR_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPG::GameCore::MiddleMissionPackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + EDHBLGMGBNC_KPKCFMCJBCF_OFFSET))(this, a1);
		}

		::System::Void HJDMPHGDBOC(::RPG::GameCore::MiddleMissionPackConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MiddleMissionPackConfig*))((::PBYTE)hIl2Cpp + EDHBLGMGBNC_HJDMPHGDBOC_OFFSET))(this, a1);
		}

		::System::UInt32 get_MissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHBLGMGBNC_GET_MISSIONID_OFFSET))(this);
		}

		::System::Void set_MissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDHBLGMGBNC_SET_MISSIONID_OFFSET))(this, a1);
		}

	};
