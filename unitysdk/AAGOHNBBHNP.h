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

#define AAGOHNBBHNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0040F0)
#define AAGOHNBBHNP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E004150)
#define AAGOHNBBHNP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E004060)

inline static constexpr unsigned int AAGOHNBBHNP_TypeDefinitionIndex = 20459;

	class AAGOHNBBHNP : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* IAMOJELDDPH; // 0x18
		::RPG::GameCore::TaskConfig* NIDPOPHFPAB; // 0x20
		::Il2CppArray<::System::Int32>* KIAOEIBHLPC; // 0x28
		::System::String* GNDCOFGJGHL; // 0x30
		::System::Single CNLICOPBIEH; // 0x38
		::System::Single MEDHCKLCEBM; // 0x3C
		::System::Single GCNGBJHLFOP; // 0x40
		::System::Single ENCAOMKPBCK; // 0x44
		::System::Single LKAGJFKPGIO; // 0x48
		::RPG::MVector2 MFILKKHFGOF; // 0x4C
		::RPG::GameCore::CharacterMotionFlag FPHBEHJJBIA; // 0x54
		::System::Single KODPONEOLPM; // 0x58
		::System::Single KLFMIFKODBA; // 0x5C
		::System::Boolean GGKDDBBFLKI; // 0x60
		::System::Boolean EABHIJFPFIP; // 0x61
		::System::Byte _padding0[0x2];
		::System::Single HGPEJNODLLO; // 0x64
		::System::Single DJEIIPOPIBC; // 0x68
		::System::Single PEGAHHCMJDC; // 0x6C
		::System::Single CHDPLKKDACM; // 0x70
		::System::Single AHKPNDPDPMD; // 0x74
		::System::Single FKFLBHBKDPE; // 0x78
		::RPG::GameCore::FollowTargetType IPFLFDNFCPN; // 0x7C
		::System::Single ACBKFMGENNH; // 0x80
		::RPG::GameCore::AdvancedFollowType NKIBGPFEFGC; // 0x84
		::System::Single NGIPFFOFKJE; // 0x88
		::System::Single ADNAIFCNHHF; // 0x8C
		::System::Single ANEHPPKFBJH; // 0x90
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
