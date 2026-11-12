#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonfireEventDialogConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTDIALOGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E931590)
#define RPG_GAMECORE_GRIDFIGHTBONFIREEVENTDIALOGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E931350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireEventDialogConfigRow_TypeDefinitionIndex = 13574;

	class GridFightBonfireEventDialogConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 SentencePetPalShow; // 0x14
		::System::UInt32 SentenceShow; // 0x18
		::System::UInt32 SentenceID; // 0x1C
		::RPG::Client::TextID Sentence; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTDIALOGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonfireEventDialogConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONFIREEVENTDIALOGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
