#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AFONHNBABGO;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define AFONHNBABGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE60D70)
#define AFONHNBABGO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE60DA0)
#define AFONHNBABGO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE60D20)

inline static constexpr unsigned int AFONHNBABGO_TypeDefinitionIndex = 22408;

	class AFONHNBABGO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFONHNBABGO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AFONHNBABGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFONHNBABGO*))((::PBYTE)hIl2Cpp + AFONHNBABGO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AFONHNBABGO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AFONHNBABGO*))((::PBYTE)hIl2Cpp + AFONHNBABGO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
