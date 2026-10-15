#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MechanismBarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D871C00)
#define RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8719A0)

namespace RPG::GameCore
{
	class MechanismBarConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x18
		::System::UInt32 MaxValue; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MechanismBarConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MechanismBarConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
