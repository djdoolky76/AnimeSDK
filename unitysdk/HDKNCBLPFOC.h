#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HDKNCBLPFOC;
namespace RPG::GameCore { class ValueEvaluatorConfig; }

#define HDKNCBLPFOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE952B0)
#define HDKNCBLPFOC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CE952C0)
#define HDKNCBLPFOC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CE95280)

	class HDKNCBLPFOC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::ValueEvaluatorConfig* KNDIDPBNEJJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDKNCBLPFOC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HDKNCBLPFOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDKNCBLPFOC*))((::PBYTE)hIl2Cpp + HDKNCBLPFOC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HDKNCBLPFOC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HDKNCBLPFOC*))((::PBYTE)hIl2Cpp + HDKNCBLPFOC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
