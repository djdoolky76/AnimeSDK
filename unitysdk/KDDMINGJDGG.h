#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureLinearMovementControlType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNJMLIBEGHA;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class ClientInputData; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define KDDMINGJDGG_BPAMLIPKLEH_OFFSET UNITYSDK_OFFSET(0xBBD58B0)
#define KDDMINGJDGG_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD6CA0)
#define KDDMINGJDGG_IBCCPINCJEG_OFFSET UNITYSDK_OFFSET(0xBBD5030)
#define KDDMINGJDGG_LFJJIFNPPJF_OFFSET UNITYSDK_OFFSET(0xBBD5870)
#define KDDMINGJDGG_NHMPLDACAEH_OFFSET UNITYSDK_OFFSET(0xBBD5450)
#define KDDMINGJDGG_ONKHPOCEODP_OFFSET UNITYSDK_OFFSET(0xBBD5940)
#define KDDMINGJDGG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBBD4F30)

inline static constexpr unsigned int KDDMINGJDGG_TypeDefinitionIndex = 58287;

	class KDDMINGJDGG : public ::System::Object
	{
	public:
		::GNJMLIBEGHA* IBMFKOCNMIK; // 0x10
		::UnityEngine::Transform* AFIBNIPMICJ; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::RPG::Client::CameraBlendCurve* HDJMDBIPKOE; // 0x28
		::RPG::GameCore::AdventureCharacterController* CACEADPJLPB; // 0x30
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x38
		::RPG::Client::CameraBlendCurve* LAKBFMFNOHK; // 0x40
		::UnityEngine::Transform* OPJNNDIALDC; // 0x48
		::UnityEngine::Transform* OIGGFCOBKCG; // 0x50
		::System::Single OMGMEIBDAOC; // 0x58
		::System::Single BLNLEHMDCGL; // 0x5C
		::RPG::GameCore::AdventureLinearMovementControlType LFKIIDAMHEJ; // 0x60
		::System::Single KKPEIMJKION; // 0x64
		::UnityEngine::Vector3 EFLBANLKKAP; // 0x68
		::System::Single PHGOEPOKMGE; // 0x74
		::System::Boolean MKLDGMLAONP; // 0x78
		::System::Boolean FNAEPHCKFLK; // 0x79
		::System::Boolean CAGCHKJHMPD; // 0x7A
		::System::Boolean EIPEBNHHIAJ; // 0x7B
		::System::Single HBDJCFFDGDD; // 0x7C
		::System::Single KLJCDDBJHNE; // 0x80
		::UnityEngine::Vector3 BJNKIKNBFOJ; // 0x84
		::System::Single LMCBEIHGLDF; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDMINGJDGG_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDMINGJDGG_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IBCCPINCJEG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDDMINGJDGG_IBCCPINCJEG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void NHMPLDACAEH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::RPG::Client::CameraBlendCurve* a7, ::RPG::Client::CameraBlendCurve* a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::RPG::Client::CameraBlendCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + KDDMINGJDGG_NHMPLDACAEH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void LFJJIFNPPJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDMINGJDGG_LFJJIFNPPJF_OFFSET))(this);
		}

		::System::Void BPAMLIPKLEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDMINGJDGG_BPAMLIPKLEH_OFFSET))(this);
		}

		::System::Boolean ONKHPOCEODP(::RPG::GameCore::GameEntity* a1, ::System::Single a2, ::RPG::GameCore::AdventureCharacterController* a3, ::RPG::Client::ClientInputData* a4, ::System::Boolean a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single, ::RPG::GameCore::AdventureCharacterController*, ::RPG::Client::ClientInputData*, ::System::Boolean, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KDDMINGJDGG_ONKHPOCEODP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

	};
