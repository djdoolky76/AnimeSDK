#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceMaterialPartShow; }

#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D578440)
#define RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5782A0)

namespace RPG::GameCore
{
	class CharacterReplaceMaterialPartShow : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideCharaParts; // 0x10
		::System::Boolean HideNPCParts; // 0x11
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::UInt32>* ShowPartIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceMaterialPartShow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceMaterialPartShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEMATERIALPARTSHOW_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
