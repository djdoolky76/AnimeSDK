#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/Object.h"
class OGIFJNIGHBO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define LDLKEEFPGMB_AFBPLPPOOIA_OFFSET UNITYSDK_OFFSET(0xB63C950)
#define LDLKEEFPGMB_CTOR_OFFSET UNITYSDK_OFFSET(0xB63CA50)
#define LDLKEEFPGMB_GET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0xB63C910)
#define LDLKEEFPGMB_GET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB63C930)
#define LDLKEEFPGMB_MOFIPAIPFHO_OFFSET UNITYSDK_OFFSET(0xB63C9B0)
#define LDLKEEFPGMB_SET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0xB63C920)
#define LDLKEEFPGMB_SET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0xB63C940)

	class LDLKEEFPGMB : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* KBFHJNEEOOL; // 0x10
		::System::String* CAKAJFGJGPE; // 0x18
		::System::String* IMGPNLCKNHE; // 0x20
		::System::String* DOPEILKFLGI; // 0x28
		::System::String* DKLNOJHPHDF; // 0x30
		::System::UInt32 PMIEAEGJNMJ; // 0x38
		::System::UInt32 MEFDNHMPHOH; // 0x3C
		::System::UInt32 FEKHEHMPDHC; // 0x40
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x44
		::System::UInt32 GGEIJACCPCK; // 0x48
		::RPG::GameCore::AvatarBaseType GCIDABGHIHN; // 0x4C
		::System::UInt32 _ScheduleActivityModuleID_k__BackingField; // 0x50
		::System::UInt32 KDKMALLNING; // 0x54
		::RPG::GameCore::PreAvatarType _ReleaseType_k__BackingField; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::PreAvatarType get_ReleaseType()
		{
			return ((::RPG::GameCore::PreAvatarType(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_GET_RELEASETYPE_OFFSET))(this);
		}

		::System::Void set_ReleaseType(::RPG::GameCore::PreAvatarType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PreAvatarType))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_SET_RELEASETYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ScheduleActivityModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_GET_SCHEDULEACTIVITYMODULEID_OFFSET))(this);
		}

		::System::Void set_ScheduleActivityModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_SET_SCHEDULEACTIVITYMODULEID_OFFSET))(this, a1);
		}

		::System::Void AFBPLPPOOIA(::System::UInt32 a1, ::RPG::GameCore::PreAvatarType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PreAvatarType))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_AFBPLPPOOIA_OFFSET))(this, a1, a2);
		}

		::System::Void MOFIPAIPFHO(::OGIFJNIGHBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGIFJNIGHBO*))((::PBYTE)hIl2Cpp + LDLKEEFPGMB_MOFIPAIPFHO_OFFSET))(this, a1);
		}

	};
