#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeV2BirdData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0094A0)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0094D0)
#define RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__GET_ALLSHOWBIRDDATALIST_B__4_0_OFFSET UNITYSDK_OFFSET(0xE0094E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2BirdInfos___c_TypeDefinitionIndex = 67929;

	class MatchThreeV2BirdInfos___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C6C0);
		}

		static ::System::Func_2<::RPG::Client::MatchThreeV2BirdData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::MatchThreeV2BirdData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5C6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_AllShowBirdDataList_b__4_0(::RPG::Client::MatchThreeV2BirdData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeV2BirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDINFOS___C__GET_ALLSHOWBIRDDATALIST_B__4_0_OFFSET))(this, a1);
		}

	};
}
