#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NKFEBJLCANI;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define NKFEBJLCANI_CTOR_OFFSET UNITYSDK_OFFSET(0x1D22EBF0)
#define NKFEBJLCANI_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D22EC00)
#define NKFEBJLCANI_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D22EBC0)

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
