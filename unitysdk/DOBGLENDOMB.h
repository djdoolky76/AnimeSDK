#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DOBGLENDOMB;
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBubbleTalkInfo; }
namespace System { class String; }

#define DOBGLENDOMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF22560)
#define DOBGLENDOMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF22570)
#define DOBGLENDOMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF22520)

inline static constexpr unsigned int DOBGLENDOMB_TypeDefinitionIndex = 21826;

	class DOBGLENDOMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::FiveDimBubbleTalkInfo*>* GPGOMMAGIBD; // 0x18
		::System::String* JBPHDACHHDG; // 0x20
		::Il2CppArray<::System::Int16>* JMHBBPPIELM; // 0x28
		::System::UInt32 AHGIENEMKFI; // 0x30
		::System::Single OKILLMNGPGB; // 0x34
		::System::Boolean LHPMNOHBIMI; // 0x38
		::System::Boolean BNIMJJNOLAI; // 0x39
		::System::Boolean PDFFNPLKFMH; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOBGLENDOMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DOBGLENDOMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOBGLENDOMB*))((::PBYTE)hIl2Cpp + DOBGLENDOMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DOBGLENDOMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DOBGLENDOMB*))((::PBYTE)hIl2Cpp + DOBGLENDOMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
