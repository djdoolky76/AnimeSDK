#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraArrangementPresetRow; }

#define RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B8E0)
#define RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D56B700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraArrangementPresetRow_TypeDefinitionIndex = 13050;

	class ChimeraArrangementPresetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CommonChimeras; // 0x10
		::System::UInt32 PresetID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Description; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraArrangementPresetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraArrangementPresetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAARRANGEMENTPRESETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
