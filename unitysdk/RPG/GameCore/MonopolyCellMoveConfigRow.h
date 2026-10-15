#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyCellMoveConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D86EF40)
#define RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D86EDB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyCellMoveConfigRow_TypeDefinitionIndex = 12089;

	class MonopolyCellMoveConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* MoveParam; // 0x10
		::System::UInt32 MapID; // 0x18
		::System::UInt32 CellID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyCellMoveConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyCellMoveConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYCELLMOVECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
