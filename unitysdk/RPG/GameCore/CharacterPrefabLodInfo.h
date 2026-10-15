#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPrefabLodInfo; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPREFABLODINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D549480)
#define RPG_GAMECORE_CHARACTERPREFABLODINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5493C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPrefabLodInfo_TypeDefinitionIndex = 19099;

	class CharacterPrefabLodInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* LodPathList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPREFABLODINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPrefabLodInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPrefabLodInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPREFABLODINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
