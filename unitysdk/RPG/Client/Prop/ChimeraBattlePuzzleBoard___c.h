#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC53080)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC530C0)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___ADDSTREAMINGCALLBACK_B__41_0_OFFSET UNITYSDK_OFFSET(0xDC53160)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___REMOVESTREAMINGSOURCE_B__47_0_OFFSET UNITYSDK_OFFSET(0xDC53210)
#define RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___SPAWNWORK_B__6_0_OFFSET UNITYSDK_OFFSET(0xDC530D0)

namespace RPG::Client::Prop
{
	class ChimeraBattlePuzzleBoard___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__41_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x4A6C0);
		}

		static ::System::Action** StaticGet___9__6_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x4A6C8);
		}

		static ::System::Action** StaticGet___9__47_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x4A6D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Prop", "<>c")->GetStaticField(0x4A6D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C_CTOR_OFFSET))(this);
		}

		::System::Void __SpawnWork_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___SPAWNWORK_B__6_0_OFFSET))(this);
		}

		::System::Void __AddStreamingCallback_b__41_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___ADDSTREAMINGCALLBACK_B__41_0_OFFSET))(this);
		}

		::System::Void __RemoveStreamingSource_b__47_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERABATTLEPUZZLEBOARD___C___REMOVESTREAMINGSOURCE_B__47_0_OFFSET))(this);
		}

	};
}
