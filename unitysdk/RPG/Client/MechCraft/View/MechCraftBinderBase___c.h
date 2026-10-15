#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::MechCraft::View { class MechCraftBinderBase_ComponentEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5EE3B0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5EE3F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C___TRYGETCMPT_B__6_0_OFFSET UNITYSDK_OFFSET(0xD5EE400)

namespace RPG::Client::MechCraft::View
{
	class MechCraftBinderBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x56E60);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("RPG.Client.MechCraft.View", "<>c")->GetStaticField(0x56E68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C_CTOR_OFFSET))(this);
		}

		::System::String* __TryGetCmpt_b__6_0(::RPG::Client::MechCraft::View::MechCraftBinderBase_ComponentEntry* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MechCraft::View::MechCraftBinderBase_ComponentEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTBINDERBASE___C___TRYGETCMPT_B__6_0_OFFSET))(this, a1);
		}

	};
}
