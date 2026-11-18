#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFMJDKFGHCB_JPPOABHNPEB.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define KFMJDKFGHCB_JIOODIPLKMO__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8AA10)

inline static constexpr unsigned int KFMJDKFGHCB_JIOODIPLKMO_TypeDefinitionIndex = 57604;

class KFMJDKFGHCB_JIOODIPLKMO : public ::System::Object
{
public:
	::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* JNOOPGMPALJ; // 0x10
	::MoleMole::Battle::Entity* CGELPKBKHOJ; // 0x18
	::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* ONLNEIPIMKO; // 0x20
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* MCMKHKAGALM; // 0x28
	::UnityEngine::AI::NavMeshPath* CJBJONJDOLI; // 0x30
	::System::Single MKHKCCOGBPN; // 0x38
	::System::Int32 JHEFLJKNLOO; // 0x3C
	::System::Single EONFBDLFKNM; // 0x40
	::System::Single CKPNMJMHJBJ; // 0x44
	::System::Single PFKLIOFNNEE; // 0x48
	::System::Single ELPAOEHMIKD; // 0x4C
	::System::Single DDKOMLIECPA; // 0x50
	::System::Boolean GHMFBCCGEGF; // 0x54
	::System::Boolean PKBKDPKIOKF; // 0x55
	::System::Boolean FDMHHIHAHJA; // 0x56
	::System::Byte _padding0[0x1];
	::KFMJDKFGHCB_JPPOABHNPEB EEMOPKCLEGM; // 0x58
	::System::Single IHGEMDCJCBF; // 0x5C
	::System::Int32 ADOOCIHENMK; // 0x60
	::System::Single GKBLFNHDLLA; // 0x64
	::System::Single GOOGKCGGLPO; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_JIOODIPLKMO__CTOR_OFFSET))(this);
	}
};
