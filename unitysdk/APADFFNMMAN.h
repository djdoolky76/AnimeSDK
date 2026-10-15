#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleTalkType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class APADFFNMMAN;
class FCOEMCEDLNL;
namespace RPG::GameCore { class BubbleTalkInfo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define APADFFNMMAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBE000)
#define APADFFNMMAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCBE040)
#define APADFFNMMAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCBDFA0)

inline static constexpr unsigned int APADFFNMMAN_TypeDefinitionIndex = 20406;

	class APADFFNMMAN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* GFNAPNFFGPJ; // 0x18
		::Il2CppArray<::RPG::GameCore::BubbleTalkInfo*>* GPGOMMAGIBD; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::System::Boolean LHPMNOHBIMI; // 0x30
		::System::Boolean BNIMJJNOLAI; // 0x31
		::System::Byte _padding0[0x2];
		::RPG::GameCore::BubbleTalkType GKLGANJDBMM; // 0x34
		::System::UInt32 AHGIENEMKFI; // 0x38
		::System::Single OKILLMNGPGB; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APADFFNMMAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::APADFFNMMAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APADFFNMMAN*))((::PBYTE)hIl2Cpp + APADFFNMMAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::APADFFNMMAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::APADFFNMMAN*))((::PBYTE)hIl2Cpp + APADFFNMMAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
