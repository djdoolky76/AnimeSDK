#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBattleTemplate; }
namespace RPG::GameCore { class GridFightWaveMonsterInfo; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D727330)
#define RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D727150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBattleTemplate_TypeDefinitionIndex = 18168;

	class GridFightBattleTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::System::UInt32 EliteGroup; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GridFightWaveMonsterInfo*>* GridFightWaveList; // 0x20
		::Il2CppArray<::System::UInt32>* AffixIDList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBattleTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBattleTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBATTLETEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
