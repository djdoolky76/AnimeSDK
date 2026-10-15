#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraEvaluationRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERAEVALUATIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57F6C0)
#define RPG_GAMECORE_CHIMERAEVALUATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D57F450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraEvaluationRow_TypeDefinitionIndex = 13027;

	class ChimeraEvaluationRow : public ::System::Object
	{
	public:
		::System::String* ConditionJson; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 EvaluationID; // 0x1C
		::RPG::Client::TextID EvaluationName; // 0x20
		::RPG::Client::TextID EvaluationDesc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraEvaluationRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraEvaluationRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAEVALUATIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
