#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationMotionFlagMode.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/EAdventureNavigationAccuratelyMode.h"
#include "unitysdk/RPG/GameCore/ECharacterNavSteerMode.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HGGEFBBMHCK;
class NFGIHNCHEDO;
class PCFGFOGMLNN;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine::AI { class NavMeshPath; }

#define PEDAPLLONJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC93A780)
#define PEDAPLLONJD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC93A6A0)

inline static constexpr unsigned int PEDAPLLONJD_TypeDefinitionIndex = 58346;

	class PEDAPLLONJD : public ::System::Object
	{
	public:
		::NFGIHNCHEDO* PAHHNMLMNLN; // 0x10
		::UnityEngine::AsyncOperation* CLEOBKHDDFJ; // 0x18
		::HGGEFBBMHCK* EJGFFPJMDIH; // 0x20
		::UnityEngine::AI::NavMeshPath* DPPHPKKPCIP; // 0x28
		::PCFGFOGMLNN* MGJLINFADJK; // 0x30
		::RPG::GameCore::GameEntity* IDHNNGCOKCH; // 0x38
		::System::Single BCGAOBAGKMI; // 0x40
		::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> EHCJEIINCOO; // 0x44
		::System::Int32 NDBBGADNKLC; // 0x4C
		::RPG::GameCore::EAdventureNavigationAccuratelyMode NBLBJHGMHDP; // 0x50
		::System::Single OOLMNOPJCAC; // 0x54
		::RPG::GameCore::AdvNavigationMotionFlagMode IAOBLNHHDBH; // 0x58
		::UnityEngine::Quaternion GMAGENDCBLH; // 0x5C
		::System::Boolean IOLGEMDEGIH; // 0x6C
		::System::Boolean DMPMPFFHDJE; // 0x6D
		::System::Boolean OANFKKOHADN; // 0x6E
		::System::Boolean JOAOPFMNAKK; // 0x6F
		::System::Boolean MADDJJABCGN; // 0x70
		::System::Boolean PPGEKDEAGHK; // 0x71
		::System::Boolean LGMJBJJDOLH; // 0x72
		::System::Boolean DDGOIDJKPII; // 0x73
		::UnityEngine::Vector3 LCLOGOKEJFK; // 0x74
		::System::Boolean LPGNBEECDJJ; // 0x80
		::System::Boolean EIHNNAMBIOM; // 0x81
		::System::Boolean DCHBBAHHKPC; // 0x82
		::System::Boolean HPPALBKPJPO; // 0x83
		::System::Single KPOIPKNAPDG; // 0x84
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x88
		::System::Single HEPLJFJLFKJ; // 0x8C
		::UnityEngine::Vector3 OPMGDNNAEJF; // 0x90
		::System::Single KMBJFKGKMLC; // 0x9C
		::System::Boolean NEPIENADMBM; // 0xA0
		::System::Boolean GGCOENFCMOF; // 0xA1
		::System::Boolean MMLHGBNJHLA; // 0xA2
		::System::Boolean NPCBIMFJKJN; // 0xA3
		::System::Single MPIFJNFLAKC; // 0xA4
		::System::Single HOPIHHIEJEH; // 0xA8
		::System::Single HFPPEDKNPIK; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDAPLLONJD_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDAPLLONJD_KHGIKBFDLFB_OFFSET))(this);
		}

	};
