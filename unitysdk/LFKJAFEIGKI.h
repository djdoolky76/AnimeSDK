#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
class KELDADFDNPO;
class PIMCPBPFGMB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossData; }
namespace RPG::Client { class ChallengeGroupData; }
namespace RPG::Client { class ChallengeStoryData; }
namespace RPG::Client { class ITeamInfoProviderViewModel; }
namespace RPG::Client::Challenge::Boss { class ChallengeBossBuffSelectTeamInfoViewModel; }
namespace RPG::Client::Challenge::Story { class ChallengeStoryBuffSelectTeamInfoViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }
namespace RPG::Client::Monster { class IMonsterDataProviderViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LFKJAFEIGKI_ABPKCIBACLG_OFFSET UNITYSDK_OFFSET(0xB67A410)
#define LFKJAFEIGKI_CMPMKEDIHHN_OFFSET UNITYSDK_OFFSET(0xB67AF60)
#define LFKJAFEIGKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB67B240)
#define LFKJAFEIGKI_DEOBFLLNBNP_OFFSET UNITYSDK_OFFSET(0xB67AEC0)
#define LFKJAFEIGKI_EKJNEAEEGHO_OFFSET UNITYSDK_OFFSET(0xB67B060)
#define LFKJAFEIGKI_HGGKDPMKKII_OFFSET UNITYSDK_OFFSET(0xB67B100)
#define LFKJAFEIGKI_IJCMMBKACBE_OFFSET UNITYSDK_OFFSET(0xB67A5F0)
#define LFKJAFEIGKI_KDOAJJDBKGH_1_OFFSET UNITYSDK_OFFSET(0xB67AA30)
#define LFKJAFEIGKI_KDOAJJDBKGH_OFFSET UNITYSDK_OFFSET(0xB67A820)
#define LFKJAFEIGKI_LCMAFBLFAMA_OFFSET UNITYSDK_OFFSET(0xB67AC40)
#define LFKJAFEIGKI_LMGJKEKFHMK_OFFSET UNITYSDK_OFFSET(0xB67A720)
#define LFKJAFEIGKI_MGHGGCNHFDF_OFFSET UNITYSDK_OFFSET(0xB67AE20)

inline static constexpr unsigned int LFKJAFEIGKI_TypeDefinitionIndex = 81513;

	class LFKJAFEIGKI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_CTOR_OFFSET))(this);
		}

		::System::Void ABPKCIBACLG(::RPG::Client::ChallengeGroupData* a1, ::System::Nullable_1<::System::Int32> a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::System::Nullable_1<::System::Int32>, ::System::Boolean))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_ABPKCIBACLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJCMMBKACBE(::RPG::Client::ITeamInfoProviderViewModel* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ITeamInfoProviderViewModel*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_IJCMMBKACBE_OFFSET))(this, a1, a2);
		}

		::System::Void LMGJKEKFHMK(::RPG::Client::Monster::IMonsterDataProviderViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Monster::IMonsterDataProviderViewModel*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_LMGJKEKFHMK_OFFSET))(this, a1);
		}

		::System::Void KDOAJJDBKGH(::RPG::Client::ChallengeStoryData* a1, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel* a2, ::System::Action_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStoryData*, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_KDOAJJDBKGH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDOAJJDBKGH_1(::RPG::Client::ChallengeBossData* a1, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel* a2, ::System::Action_1<::System::UInt32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel*, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_KDOAJJDBKGH_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LCMAFBLFAMA(::RPG::Client::ChallengeBossData* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_LCMAFBLFAMA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MGHGGCNHFDF(::PIMCPBPFGMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIMCPBPFGMB*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_MGHGGCNHFDF_OFFSET))(this, a1);
		}

		::System::Void DEOBFLLNBNP(::KELDADFDNPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KELDADFDNPO*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_DEOBFLLNBNP_OFFSET))(this, a1);
		}

		::System::Void CMPMKEDIHHN(::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_CMPMKEDIHHN_OFFSET))(this, a1);
		}

		::System::Void EKJNEAEEGHO(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_EKJNEAEEGHO_OFFSET))(this, a1);
		}

		::System::Void HGGKDPMKKII(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_HGGKDPMKKII_OFFSET))(this, a1);
		}

	};
