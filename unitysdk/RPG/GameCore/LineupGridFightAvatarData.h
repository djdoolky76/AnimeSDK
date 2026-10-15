#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LineupGridFightAvatarData; }

#define RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A79D0)
#define RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A7810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupGridFightAvatarData_TypeDefinitionIndex = 18127;

	class LineupGridFightAvatarData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 RoleID; // 0x10
		::System::UInt32 Star; // 0x14
		::System::UInt32 Location; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* EquipList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LineupGridFightAvatarData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LineupGridFightAvatarData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPGRIDFIGHTAVATARDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
