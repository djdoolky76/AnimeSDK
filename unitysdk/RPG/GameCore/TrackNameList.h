#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrackNameList; }
namespace System { class String; }

#define RPG_GAMECORE_TRACKNAMELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFC250)
#define RPG_GAMECORE_TRACKNAMELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFC190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrackNameList_TypeDefinitionIndex = 17095;

	class TrackNameList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* TrackNames; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrackNameList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrackNameList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRACKNAMELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
