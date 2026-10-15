#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournCollectionData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF9C090)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF9C0D0)
#define RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__GET_UNLOCKEDCOLLECTIONCOUNT_B__28_0_OFFSET UNITYSDK_OFFSET(0xDF9C0E0)

namespace RPG::Client
{
	class RogueTournCollectionInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournCollectionData*, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournCollectionData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C870);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C878);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedCollectionCount_b__28_0(::RPG::Client::RogueTournCollectionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournCollectionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNCOLLECTIONINFO___C__GET_UNLOCKEDCOLLECTIONCOUNT_B__28_0_OFFSET))(this, a1);
		}

	};
}
