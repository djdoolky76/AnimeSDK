#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BKNKICGINJA;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }

#define BKNKICGINJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1AD250)
#define BKNKICGINJA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F1AD290)
#define BKNKICGINJA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F1AD1F0)

inline static constexpr unsigned int BKNKICGINJA_TypeDefinitionIndex = 21424;

	class BKNKICGINJA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x18
		::System::Boolean HAOKIGJPEII; // 0x20
		::System::Boolean BDEFACKEMPD; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single GONACCPIJOO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKNKICGINJA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKNKICGINJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKNKICGINJA*))((::PBYTE)hIl2Cpp + BKNKICGINJA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BKNKICGINJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKNKICGINJA*))((::PBYTE)hIl2Cpp + BKNKICGINJA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
