#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/FE2C716718BC4ED1.h"
#include "unitysdk/System/Object.h"

class A4C30877A7A67F01;
namespace ABC::Game { class GameSettingGroupData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_GAME_GAMESETTINGPREF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB77A0)
#define ABC_GAME_GAMESETTINGPREF_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_GAME_GAMESETTINGPREF_LOADFROMSTR_OFFSET UNITYSDK_OFFSET(0x1EB78A0)
#define ABC_GAME_GAMESETTINGPREF_SAVETOSTR_OFFSET UNITYSDK_OFFSET(0x1EB7AB0)
#define ABC_GAME_GAMESETTINGPREF_SETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1EB7B00)
#define ABC_GAME_GAMESETTINGPREF_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1873310)
#define ABC_GAME_GAMESETTINGPREF_TRYGETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x1EB7C80)
#define ABC_GAME_GAMESETTINGPREF__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7DC0)
#define ABC_GAME_GAMESETTINGPREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E00)

namespace ABC::Game
{
	inline static constexpr unsigned int GameSettingPref_TypeDefinitionIndex = 6792;

	class GameSettingPref : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ABC::Game::GameSettingGroupData*>* groupDatas; // 0x10
		::System::Boolean _IsDirty_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::List_1<::ABC::Game::GameSettingGroupData*>* AE372A481FF6B1C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ABC::Game::GameSettingGroupData*>*))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF__CTOR_1_OFFSET))(this, AE372A481FF6B1C1);
		}

		::System::Void set_IsDirty(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_SET_ISDIRTY_OFFSET))(this, E937D4885DAA1AE8);
		}

		::A4C30877A7A67F01* Clone()
		{
			return ((::A4C30877A7A67F01*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_CLONE_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void SetGroupData(::ABC::Game::GameSettingGroupData* E113D8DD12019548)
		{
			return ((::System::Void(*)(::PVOID, ::ABC::Game::GameSettingGroupData*))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_SETGROUPDATA_OFFSET))(this, E113D8DD12019548);
		}

		::System::Void LoadFromStr(::System::String* F220A2D27F7C6B6C)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_LOADFROMSTR_OFFSET))(this, F220A2D27F7C6B6C);
		}

		::System::Boolean TryGetGroupData(::E68AA4EB51923C98::FE2C716718BC4ED1 E8E45CE0AA06991E, ::ABC::Game::GameSettingGroupData*& F220A2D27F7C6B6C)
		{
			return ((::System::Boolean(*)(::PVOID, ::E68AA4EB51923C98::FE2C716718BC4ED1, ::ABC::Game::GameSettingGroupData*&))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_TRYGETGROUPDATA_OFFSET))(this, E8E45CE0AA06991E, F220A2D27F7C6B6C);
		}

		::System::String* SaveToStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_GAME_GAMESETTINGPREF_SAVETOSTR_OFFSET))(this);
		}
	};
}
