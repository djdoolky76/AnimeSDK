#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PreAvatarType.h"
#include "unitysdk/System/Object.h"
class OGIFJNIGHBO;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { class String; }

#define LDLKEEFPGMB_AFBPLPPOOIA_OFFSET UNITYSDK_OFFSET(0x1AC97E00)
#define LDLKEEFPGMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC97F00)
#define LDLKEEFPGMB_GET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0x1AC97DC0)
#define LDLKEEFPGMB_GET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AC97DE0)
#define LDLKEEFPGMB_MOFIPAIPFHO_OFFSET UNITYSDK_OFFSET(0x1AC97E60)
#define LDLKEEFPGMB_SET_RELEASETYPE_OFFSET UNITYSDK_OFFSET(0x1AC97DD0)
#define LDLKEEFPGMB_SET_SCHEDULEACTIVITYMODULEID_OFFSET UNITYSDK_OFFSET(0x1AC97DF0)

inline static constexpr unsigned int LDLKEEFPGMB_TypeDefinitionIndex = 68657;

	class LDLKEEFPGMB : public ::System::Object
	{
	public:
		::System::String* DKLNOJHPHDF; // 0x10
		::System::String* DOPEILKFLGI; // 0x18
		::RPG::AvatarSystem::IAvatar* KBFHJNEEOOL; // 0x20
		::System::String* IMGPNLCKNHE; // 0x28
		::System::String* CAKAJFGJGPE; // 0x30
		::System::UInt32 _ScheduleActivityModuleID_k__BackingField; // 0x38
		::RPG::GameCore::PreAvatarType _ReleaseType_k__BackingField; // 0x3C
		::System::UInt32 FEKHEHMPDHC; // 0x40
		::RPG::GameCore::AvatarBaseType GCIDABGHIHN; // 0x44
		::System::UInt32 KDKMALLNING; // 0x48
		::System::UInt32 PMIEAEGJNMJ; // 0x4C
		::System::UInt32 GGEIJACCPCK; // 0x50
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x54
		::System::UInt32 MEFDNHMPHOH; // 0x58
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
