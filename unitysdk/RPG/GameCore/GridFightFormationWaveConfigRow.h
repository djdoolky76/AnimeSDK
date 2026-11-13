#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightFormationWaveConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20608AC0)
#define RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20608890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightFormationWaveConfigRow_TypeDefinitionIndex = 13753;

	class GridFightFormationWaveConfigRow : public ::System::Object
	{
	public:
		::System::String* Ability; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::System::Boolean ClearPreviousAbility; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 MaxTeammateCount; // 0x24
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightFormationWaveConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightFormationWaveConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTFORMATIONWAVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
