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

#define BHJLLBNDCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D5F70)
#define BHJLLBNDCLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D5FE0)
#define BHJLLBNDCLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D5EE0)

inline static constexpr unsigned int BHJLLBNDCLL_TypeDefinitionIndex = 22862;

	class BHJLLBNDCLL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PPPKKLJJCIJ; // 0x18
		::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x20
		::System::String* KANLBGHKBDK; // 0x28
		::BHELCIBGKGA* GBGBACIMHOO; // 0x30
		::System::String* ECHFEMAFJNN; // 0x38
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x40
		::System::String* EEKMBBCAGDH; // 0x48
		::RPG::GameCore::TargetEvaluator* CFINJMDGNCA; // 0x50
		::System::String* CHHGHIGBAPH; // 0x58
		::RPG::GameCore::StringHash DLHAAEGHLKF; // 0x60
		::System::Single FMJNJDMKEGN; // 0x64
		::System::Boolean NMMJBGFDNAI; // 0x68
		::System::Boolean BMLBIIEDPBK; // 0x69
		::System::Byte _padding0[0x2];
		::System::Single FIHJJLCBHHA; // 0x6C
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
