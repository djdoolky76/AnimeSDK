#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHLLDPDJBGK;
namespace RPG::Client::FateRin::Battle { class FateRinSpecialMarkTextNodeViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCEDEF30)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0xCEDF160)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0xCEDF140)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0xCEDF170)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0xCEDF150)

namespace RPG::Client::FateRin::Battle
{
	class FateRinToggleSpecialMarkParamViewModel : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* _TextNodeList_k__BackingField; // 0x10
		::System::String* _TriggerName_k__BackingField; // 0x18
		::System::Void _ctor(::IHLLDPDJBGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IHLLDPDJBGK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_TriggerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TRIGGERNAME_OFFSET))(this);
		}

		::System::Void set_TriggerName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TRIGGERNAME_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* get_TextNodeList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_GET_TEXTNODELIST_OFFSET))(this);
		}

		::System::Void set_TextNodeList(::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::Battle::FateRinSpecialMarkTextNodeViewModel*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINTOGGLESPECIALMARKPARAMVIEWMODEL_SET_TEXTNODELIST_OFFSET))(this, a1);
		}

	};
}
