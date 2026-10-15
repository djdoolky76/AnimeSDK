#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GachaGroupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GachaGroupDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_GACHAGROUPDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FC8A0)
#define RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6FBAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GachaGroupDataRow_TypeDefinitionIndex = 13361;

	class GachaGroupDataRow : public ::System::Object
	{
	public:
		::System::String* PoolLabelIconSelected; // 0x10
		::Il2CppArray<::System::UInt32>* GachaIDList; // 0x18
		::System::String* PoolLabelIcon; // 0x20
		::RPG::GameCore::GachaGroupType GroupType; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GachaGroupDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GachaGroupDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GACHAGROUPDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
