#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IONGMCIAHEL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define IONGMCIAHEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFC030)
#define IONGMCIAHEL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEFC040)
#define IONGMCIAHEL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEFBFE0)

inline static constexpr unsigned int IONGMCIAHEL_TypeDefinitionIndex = 20169;

	class IONGMCIAHEL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::RPG::GameCore::DynamicString* OKPLJHHOCGP; // 0x20
		::RPG::GameCore::DynamicString* GNPPKDGOEDG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONGMCIAHEL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IONGMCIAHEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IONGMCIAHEL*))((::PBYTE)hIl2Cpp + IONGMCIAHEL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IONGMCIAHEL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IONGMCIAHEL*))((::PBYTE)hIl2Cpp + IONGMCIAHEL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
