#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SpecialNPCMapOffsetRow; }

#define RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD34D0)
#define RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAD2B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialNPCMapOffsetRow_TypeDefinitionIndex = 15129;

	class SpecialNPCMapOffsetRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* MapOffset; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialNPCMapOffsetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialNPCMapOffsetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALNPCMAPOFFSETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
