#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELBMDJEEPH.h"
#include "unitysdk/GKBIFKIBOAP.h"
#include "unitysdk/KJJBMOKFGKF.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/AI/NavMeshQuery.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EIMHGJELHGN;
class PPAAHJMDPAO;
namespace BehaviorDesigner::Runtime { class BehaviorManager_BehaviorTree; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FAEFBCEAIMC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1237F900)
#define FAEFBCEAIMC_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x1237FBA0)
#define FAEFBCEAIMC_DIOOOLLLPPO_OFFSET UNITYSDK_OFFSET(0x1237FE30)
#define FAEFBCEAIMC_EDLPOLGNJBP_OFFSET UNITYSDK_OFFSET(0x1237FAF0)
#define FAEFBCEAIMC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1237FD90)
#define FAEFBCEAIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1237F8F0)

inline static constexpr unsigned int FAEFBCEAIMC_TypeDefinitionIndex = 86697;

class FAEFBCEAIMC : public ::System::Object
{
public:
	::EIMHGJELHGN* GFPINKJPPBC; // 0x10
	::System::Collections::Generic::List_1<::GKBIFKIBOAP>* KONKENMMCIL; // 0x18
	::PPAAHJMDPAO* GIKBBMMGJFF; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* OLMNEDNAHOK; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* MGDAMMPPGAK; // 0x30
	::System::Collections::Generic::List_1<::KJJBMOKFGKF>* MAFDBDPLNOC; // 0x38
	::System::Collections::Generic::List_1<::CELBMDJEEPH>* NNEBHIOFKGI; // 0x40
	::BehaviorDesigner::Runtime::BehaviorManager_BehaviorTree* KJMIHPCCCAC; // 0x48
	::PPAAHJMDPAO* BGGBGFMHBCM; // 0x50
	::MGHNAPKHBOG COOPBLNBHII; // 0x58
	::System::Boolean NHEOMHGFJFH; // 0x70
	::System::Boolean JDEECEBNPLL; // 0x71
	::System::Boolean EKBJAEIBMAH; // 0x72
	::System::Boolean INCDEGHGIIA; // 0x73
	::UnityEngine::Vector3 FNDGLGLHPCP; // 0x74
	::System::Single OLLDIOELNHP; // 0x80
	::System::Int32 COPNOPHELGJ; // 0x84
	::UnityEngine::Vector3 HFLGJLCLNMJ; // 0x88
	::UnityEngine::Vector3 LEIKBMCIJLG; // 0x94
	::System::UInt32 BKLGNCBNEGM; // 0xA0
	::System::Single OMBIIFBODGF; // 0xA4
	::System::Single IIKHJOPJFAA; // 0xA8
	::UnityEngine::Vector3 FEPKNAABNHM; // 0xAC
	::UnityEngine::Bounds BMNDOHFHCHL; // 0xB8
	::System::Single MDIOAEIOFFM; // 0xD0
	::System::Boolean BMKCHJDFBAG; // 0xD4
	::System::Boolean HGOFFLEBOPB; // 0xD5
	::System::Boolean GEAEBGAJBEG; // 0xD6
	::System::Boolean CDBPIENHPIH; // 0xD7
	::System::Boolean EOHJDIDPIAB; // 0xD8
	::System::Boolean CCLHKDJPNLL; // 0xD9
	::System::Boolean PKNMLEKLGHA; // 0xDA
	::System::Boolean GJHEDCHICND; // 0xDB
	::System::Byte _padding0[0x4];
	::UnityEngine::Experimental::AI::NavMeshQuery LBIIDAOHICH; // 0xE0
	::UnityEngine::Vector3 FNCMAPCCJEE; // 0xE8
	::System::Single OKCADCGGINA; // 0xF4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEFBCEAIMC__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEFBCEAIMC_BBOMJDBNHIC_OFFSET))(this);
	}

	static ::System::Void EDLPOLGNJBP(::PPAAHJMDPAO*& OBIPHBKODPP)
	{
		return ((::System::Void(*)(::PPAAHJMDPAO*&))((::PBYTE)hIl2Cpp + FAEFBCEAIMC_EDLPOLGNJBP_OFFSET))(OBIPHBKODPP);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEFBCEAIMC_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEFBCEAIMC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void DIOOOLLLPPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAEFBCEAIMC_DIOOOLLLPPO_OFFSET))(this);
	}
};
