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

#define BHJLLBNDCLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F18F680)
#define BHJLLBNDCLL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F18F6F0)
#define BHJLLBNDCLL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F18F5F0)

inline static constexpr unsigned int BHJLLBNDCLL_TypeDefinitionIndex = 23287;

	class BHJLLBNDCLL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x18
		::System::String* EEKMBBCAGDH; // 0x20
		::RPG::GameCore::TargetEvaluator* CFINJMDGNCA; // 0x28
		::System::String* KANLBGHKBDK; // 0x30
		::System::String* CHHGHIGBAPH; // 0x38
		::System::String* ECHFEMAFJNN; // 0x40
		::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x48
		::System::String* PPPKKLJJCIJ; // 0x50
		::BHELCIBGKGA* GBGBACIMHOO; // 0x58
		::RPG::GameCore::StringHash DLHAAEGHLKF; // 0x60
		::System::Single FIHJJLCBHHA; // 0x64
		::System::Single FMJNJDMKEGN; // 0x68
		::System::Boolean NMMJBGFDNAI; // 0x6C
		::System::Boolean BMLBIIEDPBK; // 0x6D
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
