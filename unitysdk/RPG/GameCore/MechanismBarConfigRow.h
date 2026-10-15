#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MechanismBarConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MECHANISMBARCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D844260)
#define RPG_GAMECORE_MECHANISMBARCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D844000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MechanismBarConfigRow_TypeDefinitionIndex = 14121;

	class MechanismBarConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 MaxValue; // 0x24
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
