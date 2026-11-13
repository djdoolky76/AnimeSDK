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

#define PEDAPLLONJD_CTOR_OFFSET UNITYSDK_OFFSET(0x104485A0)
#define PEDAPLLONJD_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x104484D0)

inline static constexpr unsigned int PEDAPLLONJD_TypeDefinitionIndex = 58346;

	class PEDAPLLONJD : public ::System::Object
	{
	public:
		::PCFGFOGMLNN* MGJLINFADJK; // 0x10
		::RPG::GameCore::GameEntity* IDHNNGCOKCH; // 0x18
		::HGGEFBBMHCK* EJGFFPJMDIH; // 0x20
		::UnityEngine::AsyncOperation* CLEOBKHDDFJ; // 0x28
		::NFGIHNCHEDO* PAHHNMLMNLN; // 0x30
		::UnityEngine::AI::NavMeshPath* DPPHPKKPCIP; // 0x38
		::RPG::GameCore::AdvNavigationMotionFlagMode IAOBLNHHDBH; // 0x40
		::System::Single BCGAOBAGKMI; // 0x44
		::System::Boolean EIHNNAMBIOM; // 0x48
		::System::Boolean LGMJBJJDOLH; // 0x49
		::System::Boolean IOLGEMDEGIH; // 0x4A
		::System::Boolean JOAOPFMNAKK; // 0x4B
		::System::Single HFPPEDKNPIK; // 0x4C
		::System::Boolean DCHBBAHHKPC; // 0x50
		::System::Boolean NEPIENADMBM; // 0x51
		::System::Boolean NPCBIMFJKJN; // 0x52
		::System::Boolean PPGEKDEAGHK; // 0x53
		::RPG::GameCore::EAdventureNavigationAccuratelyMode NBLBJHGMHDP; // 0x54
		::System::Boolean MADDJJABCGN; // 0x58
		::System::Boolean DMPMPFFHDJE; // 0x59
		::System::Boolean HPPALBKPJPO; // 0x5A
		::System::Boolean GGCOENFCMOF; // 0x5B
		::System::Nullable_1<::RPG::GameCore::ECharacterNavSteerMode> EHCJEIINCOO; // 0x5C
		::UnityEngine::Quaternion GMAGENDCBLH; // 0x64
		::System::Single OOLMNOPJCAC; // 0x74
		::System::Single KMBJFKGKMLC; // 0x78
		::System::Boolean MMLHGBNJHLA; // 0x7C
		::System::Boolean OANFKKOHADN; // 0x7D
		::System::Boolean DDGOIDJKPII; // 0x7E
		::System::Boolean LPGNBEECDJJ; // 0x7F
		::UnityEngine::Vector3 OPMGDNNAEJF; // 0x80
		::System::Single HOPIHHIEJEH; // 0x8C
		::System::Single MPIFJNFLAKC; // 0x90
		::System::Int32 NDBBGADNKLC; // 0x94
		::System::Single KPOIPKNAPDG; // 0x98
		::UnityEngine::Vector3 LCLOGOKEJFK; // 0x9C
		::System::Single HEPLJFJLFKJ; // 0xA8
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDAPLLONJD_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEDAPLLONJD_KHGIKBFDLFB_OFFSET))(this);
		}

	};
