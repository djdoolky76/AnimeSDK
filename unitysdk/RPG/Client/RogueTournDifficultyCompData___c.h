#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOKDNGLIFND;
namespace RPG::Client { class RogueTournDifficultyCompData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF9D1E0)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDF9D220)
#define RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__GETALLDATABYTOURN_B__2_1_OFFSET UNITYSDK_OFFSET(0xDF9D230)

namespace RPG::Client
{
	class RogueTournDifficultyCompData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KOKDNGLIFND*, ::RPG::Client::RogueTournDifficultyCompData*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::KOKDNGLIFND*, ::RPG::Client::RogueTournDifficultyCompData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C900);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C908);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueTournDifficultyCompData* _GetAllDataByTourn_b__2_1(::KOKDNGLIFND* a1)
		{
			return ((::RPG::Client::RogueTournDifficultyCompData*(*)(::PVOID, ::KOKDNGLIFND*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNDIFFICULTYCOMPDATA___C__GETALLDATABYTOURN_B__2_1_OFFSET))(this, a1);
		}

	};
}
