#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MultiFloorConflictGroupRow; }

#define RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8913C0)
#define RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D891270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MultiFloorConflictGroupRow_TypeDefinitionIndex = 14056;

	class MultiFloorConflictGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FloorIDList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 PlaneID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MultiFloorConflictGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MultiFloorConflictGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MULTIFLOORCONFLICTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
