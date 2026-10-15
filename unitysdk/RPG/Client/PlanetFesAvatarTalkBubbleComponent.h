#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class PlanetFesAvatarTalkBubbleComponent; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB84540)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDB84530)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDB83F70)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HASTALKDOING_OFFSET UNITYSDK_OFFSET(0xDB844A0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HIDETALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xDB843C0)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xDB84030)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_SHOWTALKBUBBLE_OFFSET UNITYSDK_OFFSET(0xDB84170)
#define RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__RECORDAVATARTALK_OFFSET UNITYSDK_OFFSET(0xDB84310)

namespace RPG::Client
{
	class PlanetFesAvatarTalkBubbleComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::XLua::LuaTable* _TalkBubblePanel; // 0x18
		::System::Action* _ShowTalkCallLua; // 0x20
		::System::Action* _HideTalkCallLua; // 0x28
		::System::Single _TalkDuration; // 0x30
		static ::System::Collections::Generic::HashSet_1<::RPG::Client::PlanetFesAvatarTalkBubbleComponent*>** StaticGet__InDoingTalkBubble()
		{
			return (::System::Collections::Generic::HashSet_1<::RPG::Client::PlanetFesAvatarTalkBubbleComponent*>**)UnitySDK::FromName("RPG.Client", "PlanetFesAvatarTalkBubbleComponent")->GetStaticField(0x2FA90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::XLua::LuaTable* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowTalkBubble(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_SHOWTALKBUBBLE_OFFSET))(this, a1);
		}

		::System::Void HideTalkBubble()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HIDETALKBUBBLE_OFFSET))(this);
		}

		::System::Boolean HasTalkDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT_HASTALKDOING_OFFSET))(this);
		}

		::System::Void _RecordAvatarTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESAVATARTALKBUBBLECOMPONENT__RECORDAVATARTALK_OFFSET))(this);
		}

	};
}
