#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
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
namespace System { class Action; }
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define LFKJAFEIGKI_ABPKCIBACLG_OFFSET UNITYSDK_OFFSET(0xB681050)
#define LFKJAFEIGKI_CMPMKEDIHHN_OFFSET UNITYSDK_OFFSET(0xB681BA0)
#define LFKJAFEIGKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB681E80)
#define LFKJAFEIGKI_DEOBFLLNBNP_OFFSET UNITYSDK_OFFSET(0xB681B00)
#define LFKJAFEIGKI_EKJNEAEEGHO_OFFSET UNITYSDK_OFFSET(0xB681CA0)
#define LFKJAFEIGKI_HGGKDPMKKII_OFFSET UNITYSDK_OFFSET(0xB681D40)
#define LFKJAFEIGKI_IJCMMBKACBE_OFFSET UNITYSDK_OFFSET(0xB681230)
#define LFKJAFEIGKI_KDOAJJDBKGH_1_OFFSET UNITYSDK_OFFSET(0xB681670)
#define LFKJAFEIGKI_KDOAJJDBKGH_OFFSET UNITYSDK_OFFSET(0xB681460)
#define LFKJAFEIGKI_LCMAFBLFAMA_OFFSET UNITYSDK_OFFSET(0xB681880)
#define LFKJAFEIGKI_LMGJKEKFHMK_OFFSET UNITYSDK_OFFSET(0xB681360)
#define LFKJAFEIGKI_MGHGGCNHFDF_OFFSET UNITYSDK_OFFSET(0xB681A60)

inline static constexpr unsigned int LFKJAFEIGKI_TypeDefinitionIndex = 81514;

	class LFKJAFEIGKI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_CTOR_OFFSET))(this);
		}

		::System::Void ABPKCIBACLG(::RPG::Client::ChallengeGroupData* a1, ::System::Nullable* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeGroupData*, ::System::Nullable*, ::System::Boolean))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_ABPKCIBACLG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IJCMMBKACBE(::RPG::Client::ITeamInfoProviderViewModel* a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ITeamInfoProviderViewModel*, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_IJCMMBKACBE_OFFSET))(this, a1, a2);
		}

		::System::Void LMGJKEKFHMK(::RPG::Client::Monster::IMonsterDataProviderViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Monster::IMonsterDataProviderViewModel*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_LMGJKEKFHMK_OFFSET))(this, a1);
		}

		::System::Void KDOAJJDBKGH(::RPG::Client::ChallengeStoryData* a1, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStoryData*, ::RPG::Client::Challenge::Story::ChallengeStoryBuffSelectTeamInfoViewModel*, ::System::Action*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_KDOAJJDBKGH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KDOAJJDBKGH_1(::RPG::Client::ChallengeBossData* a1, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeBossData*, ::RPG::Client::Challenge::Boss::ChallengeBossBuffSelectTeamInfoViewModel*, ::System::Action*))((::PBYTE)hIl2Cpp + LFKJAFEIGKI_KDOAJJDBKGH_1_OFFSET))(this, a1, a2, a3);
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
