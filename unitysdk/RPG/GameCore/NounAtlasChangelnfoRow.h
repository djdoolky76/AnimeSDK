#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NounAtlasChangelnfoRow; }

#define RPG_GAMECORE_NOUNATLASCHANGELNFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DB670)
#define RPG_GAMECORE_NOUNATLASCHANGELNFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8DB560)

namespace RPG::GameCore
{
	class NounAtlasChangelnfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ChangeNounIDList; // 0x10
		::System::UInt32 NounID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASCHANGELNFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NounAtlasChangelnfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NounAtlasChangelnfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOUNATLASCHANGELNFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
