#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationEchoPointUIType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DGLBGFADHII;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define DGLBGFADHII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEED5B0)
#define DGLBGFADHII_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DEED5C0)
#define DGLBGFADHII_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DEED580)

inline static constexpr unsigned int DGLBGFADHII_TypeDefinitionIndex = 23038;

	class DGLBGFADHII : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::ElationEchoPointUIType GMPGDEINODK; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLBGFADHII_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DGLBGFADHII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGLBGFADHII*))((::PBYTE)hIl2Cpp + DGLBGFADHII_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DGLBGFADHII* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DGLBGFADHII*))((::PBYTE)hIl2Cpp + DGLBGFADHII_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
