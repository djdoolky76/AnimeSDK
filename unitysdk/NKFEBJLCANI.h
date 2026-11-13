#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NKFEBJLCANI;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define NKFEBJLCANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E75CB20)
#define NKFEBJLCANI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E75CB30)
#define NKFEBJLCANI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E75CAF0)

inline static constexpr unsigned int NKFEBJLCANI_TypeDefinitionIndex = 24590;

	class NKFEBJLCANI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* BGCCFFPEALM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKFEBJLCANI_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NKFEBJLCANI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKFEBJLCANI*))((::PBYTE)hIl2Cpp + NKFEBJLCANI_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NKFEBJLCANI* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NKFEBJLCANI*))((::PBYTE)hIl2Cpp + NKFEBJLCANI_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
