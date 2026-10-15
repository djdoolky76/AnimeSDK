#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SingleMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_SINGLEMONSTERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEBA30)
#define RPG_GAMECORE_SINGLEMONSTERINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEB8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SingleMonsterInfo_TypeDefinitionIndex = 23399;

	class SingleMonsterInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* AnchorName; // 0x18
		::System::Int32 RowIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMONSTERINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SingleMonsterInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SingleMonsterInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SINGLEMONSTERINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
