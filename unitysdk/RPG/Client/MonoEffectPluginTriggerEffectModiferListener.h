#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
class EKFMIDBJDIA;
namespace RPG::Client { class ModiferEffectMapItem; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0xD80F0B0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DANPJIKCHBK_OFFSET UNITYSDK_OFFSET(0xD80ECB0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80EA80)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_GHIFMGPKFPF_OFFSET UNITYSDK_OFFSET(0xD80EED0)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_LEPDDFMAIKH_OFFSET UNITYSDK_OFFSET(0xD80EE70)
#define RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD80E710)

namespace RPG::Client
{
	class MonoEffectPluginTriggerEffectModiferListener : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::ModiferEffectMapItem*>* ModiferEffectMapping; // 0x28
		::Il2CppArray<::System::String*>* AttachPointList; // 0x30
		::System::Int32 NOIEMNLMACN; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* LKDNEEIKNGN; // 0x40
		::System::String* NNIOCPHFNNG; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* AANBAEBCAPM; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* COKDDDGLNGO; // 0x58
		::RPG::GameCore::GameEntity* KCKEHDGBGGG; // 0x60
		::RPG::Client::MonoEffectManager* BBKCIBAJKGC; // 0x68
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DANPJIKCHBK(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_DANPJIKCHBK_OFFSET))(this, a1);
		}

		::System::Void GHIFMGPKFPF(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_GHIFMGPKFPF_OFFSET))(this, a1, a2);
		}

		::System::Int32 LEPDDFMAIKH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINTRIGGEREFFECTMODIFERLISTENER_LEPDDFMAIKH_OFFSET))(this);
		}

	};
}
