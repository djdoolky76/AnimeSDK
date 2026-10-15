#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SummonUnitMiscConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SUMMONUNITMISCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E980)
#define RPG_GAMECORE_SUMMONUNITMISCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3D690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitMiscConfig_TypeDefinitionIndex = 17602;

	class SummonUnitMiscConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::Boolean LevelGraphNeedServer; // 0x18
		::System::Boolean NeedBillboard; // 0x19
		::System::Byte _padding0[0x2];
		::System::UInt32 MiniMapIconType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMISCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitMiscConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitMiscConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMISCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
