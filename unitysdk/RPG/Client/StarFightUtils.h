#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class StarFightRedDotFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STARFIGHTUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBD7DD0)
#define RPG_CLIENT_STARFIGHTUTILS_GETMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xEBD7970)
#define RPG_CLIENT_STARFIGHTUTILS_GET_NATIVEFILTER_OFFSET UNITYSDK_OFFSET(0xEBD3340)
#define RPG_CLIENT_STARFIGHTUTILS_ISINSTARFIGHTACTIVITYBATTLE_OFFSET UNITYSDK_OFFSET(0xEBD7560)

namespace RPG::Client
{
	inline static constexpr unsigned int StarFightUtils_TypeDefinitionIndex = 69931;

	class StarFightUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightRedDotFilter** StaticGet__NativeFilter()
		{
			return (::RPG::Client::StarFightRedDotFilter**)UnitySDK::FromName("RPG.Client", "StarFightUtils")->GetStaticField(0xC0C0);
		}

		static ::System::UInt32* StaticGet_REWARD_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "StarFightUtils")->GetStaticField(0x15B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_GETMONSTERDATALIST_OFFSET))(a1);
		}

		static ::System::Boolean IsInStarFightActivityBattle()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_ISINSTARFIGHTACTIVITYBATTLE_OFFSET))();
		}

		static ::RPG::Client::StarFightRedDotFilter* get_NativeFilter()
		{
			return ((::RPG::Client::StarFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STARFIGHTUTILS_GET_NATIVEFILTER_OFFSET))();
		}

	};
}
