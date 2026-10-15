#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvancedFollowType.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowTargetType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
class AAGOHNBBHNP;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define AAGOHNBBHNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC95150)
#define AAGOHNBBHNP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CC951A0)
#define AAGOHNBBHNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CC950D0)

inline static constexpr unsigned int AAGOHNBBHNP_TypeDefinitionIndex = 20125;

	class AAGOHNBBHNP : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TaskConfig* NIDPOPHFPAB; // 0x18
		::RPG::GameCore::TargetEvaluator* IAMOJELDDPH; // 0x20
		::System::String* GNDCOFGJGHL; // 0x28
		::Il2CppArray<::System::Int32>* KIAOEIBHLPC; // 0x30
		::RPG::GameCore::FollowTargetType IPFLFDNFCPN; // 0x38
		::System::Single MEDHCKLCEBM; // 0x3C
		::System::Single ENCAOMKPBCK; // 0x40
		::System::Single PEGAHHCMJDC; // 0x44
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x48
		::System::Single GCNGBJHLFOP; // 0x4C
		::System::Single CNLICOPBIEH; // 0x50
		::System::Single ANEHPPKFBJH; // 0x54
		::System::Single KODPONEOLPM; // 0x58
		::System::Single ADNAIFCNHHF; // 0x5C
		::System::Single AHKPNDPDPMD; // 0x60
		::RPG::MVector2 MFILKKHFGOF; // 0x64
		::System::Single NGIPFFOFKJE; // 0x6C
		::System::Single CHDPLKKDACM; // 0x70
		::System::Single FKFLBHBKDPE; // 0x74
		::System::Single HGPEJNODLLO; // 0x78
		::System::Single KLFMIFKODBA; // 0x7C
		::System::Single LKAGJFKPGIO; // 0x80
		::System::Single ACBKFMGENNH; // 0x84
		::System::Single DJEIIPOPIBC; // 0x88
		::RPG::GameCore::AdvancedFollowType NKIBGPFEFGC; // 0x8C
		::System::Boolean EABHIJFPFIP; // 0x90
		::System::Boolean GGKDDBBFLKI; // 0x91
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGOHNBBHNP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AAGOHNBBHNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AAGOHNBBHNP*))((::PBYTE)hIl2Cpp + AAGOHNBBHNP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AAGOHNBBHNP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AAGOHNBBHNP*))((::PBYTE)hIl2Cpp + AAGOHNBBHNP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
