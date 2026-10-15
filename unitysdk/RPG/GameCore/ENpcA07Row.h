#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ENpcA07Row; }
namespace System { class String; }

#define RPG_GAMECORE_ENPCA07ROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D62D4E0)
#define RPG_GAMECORE_ENPCA07ROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D62D290)

namespace RPG::GameCore
{
	class ENpcA07Row : public ::System::Object
	{
	public:
		::System::String* AdvJsonOverride; // 0x10
		::Il2CppArray<::System::UInt32>* AddList; // 0x18
		::System::String* ResMapConfigPath; // 0x20
		::System::String* BattleJsonOverride; // 0x28
		::System::UInt32 ID1; // 0x30
		::System::UInt32 ID2; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCA07ROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ENpcA07Row* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ENpcA07Row*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENPCA07ROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
