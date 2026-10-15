#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/InputNoteType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/NoteType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NoteConfig; }
namespace RPG::GameCore { class NoteNotifyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_NOTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D9FD0)
#define RPG_GAMECORE_NOTECONFIG_LMPINHOIOCG_OFFSET UNITYSDK_OFFSET(0x1D8DA010)
#define RPG_GAMECORE_NOTECONFIG_MKLONOKCAFP_OFFSET UNITYSDK_OFFSET(0x1D8DA020)
#define RPG_GAMECORE_NOTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8D9A70)
#define RPG_GAMECORE_NOTECONFIG_OLOMDIKPBKA_OFFSET UNITYSDK_OFFSET(0x1D8D9FE0)

namespace RPG::GameCore
{
	class NoteConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Template; // 0x10
		::RPG::GameCore::NoteType Type; // 0x18
		::RPG::GameCore::InputNoteType InputType; // 0x1C
		::System::Single Time; // 0x20
		::System::Single DeltaBeatNum; // 0x24
		::System::Single PressBeats; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* NotifyList; // 0x30
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PerfectNotifyList; // 0x38
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* GoodNotifyList; // 0x40
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* MissNotifyList; // 0x48
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PassMissNotifyList; // 0x50
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PerfectUpNotifyList; // 0x58
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* GoodUpNotifyList; // 0x60
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* MissUpNotifyList; // 0x68
		::Il2CppArray<::RPG::GameCore::NoteNotifyConfig*>* PassMissUpNotifyList; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NoteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* OLOMDIKPBKA()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_OLOMDIKPBKA_OFFSET))(this);
		}

		::System::Void LMPINHOIOCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_LMPINHOIOCG_OFFSET))(this);
		}

		::System::Void MKLONOKCAFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NOTECONFIG_MKLONOKCAFP_OFFSET))(this);
		}

	};
}
