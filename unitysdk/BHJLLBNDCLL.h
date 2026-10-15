#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BHELCIBGKGA;
class BHJLLBNDCLL;
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define BHJLLBNDCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8039F0)
#define BHJLLBNDCLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D803A60)
#define BHJLLBNDCLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D803960)

	class BHJLLBNDCLL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EEKMBBCAGDH; // 0x18
		::System::String* CHHGHIGBAPH; // 0x20
		::System::String* ECHFEMAFJNN; // 0x28
		::BHELCIBGKGA* GBGBACIMHOO; // 0x30
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x38
		::System::String* KANLBGHKBDK; // 0x40
		::RPG::GameCore::TargetEvaluator* CFINJMDGNCA; // 0x48
		::System::String* PPPKKLJJCIJ; // 0x50
		::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x58
		::System::Single FMJNJDMKEGN; // 0x60
		::System::Boolean BMLBIIEDPBK; // 0x64
		::System::Boolean NMMJBGFDNAI; // 0x65
		::System::Byte _padding0[0x2];
		::System::Single FIHJJLCBHHA; // 0x68
		::RPG::GameCore::StringHash DLHAAEGHLKF; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJLLBNDCLL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BHJLLBNDCLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BHJLLBNDCLL*))((::PBYTE)hIl2Cpp + BHJLLBNDCLL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BHJLLBNDCLL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BHJLLBNDCLL*))((::PBYTE)hIl2Cpp + BHJLLBNDCLL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
