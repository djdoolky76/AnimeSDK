#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF85F80)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF85FC0)
#define RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__SYNCINTERACTDATA_B__5_0_OFFSET UNITYSDK_OFFSET(0xDF85FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefInfo___c_TypeDefinitionIndex = 67528;

	class RogueTournBuildRefInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BF90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6BF98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::MongoObjectId _SyncInteractData_b__5_0(::System::String* a1)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFINFO___C__SYNCINTERACTDATA_B__5_0_OFFSET))(this, a1);
		}

	};
}
