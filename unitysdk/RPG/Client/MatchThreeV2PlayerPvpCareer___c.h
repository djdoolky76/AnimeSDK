#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHGPKBIJHDE.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0195F0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE019630)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET UNITYSDK_OFFSET(0xE019680)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET UNITYSDK_OFFSET(0xE0196A0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET UNITYSDK_OFFSET(0xE019640)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET UNITYSDK_OFFSET(0xE019660)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex = 67945;

	class MatchThreeV2PlayerPvpCareer___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::APAMFCKFHLL*, ::JHGPKBIJHDE>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::APAMFCKFHLL*, ::JHGPKBIJHDE>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D210);
		}

		static ::System::Func_2<::APAMFCKFHLL*, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::APAMFCKFHLL*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D218);
		}

		static ::System::Func_2<::APAMFCKFHLL*, ::System::UInt32>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::APAMFCKFHLL*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D220);
		}

		static ::System::Func_2<::APAMFCKFHLL*, ::JHGPKBIJHDE>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::APAMFCKFHLL*, ::JHGPKBIJHDE>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D228);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5D230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C_CTOR_OFFSET))(this);
		}

		::JHGPKBIJHDE _SyncSoloStatistics_b__18_0(::APAMFCKFHLL* a1)
		{
			return ((::JHGPKBIJHDE(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncSoloStatistics_b__18_1(::APAMFCKFHLL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET))(this, a1);
		}

		::JHGPKBIJHDE _SyncArenaStatistics_b__19_0(::APAMFCKFHLL* a1)
		{
			return ((::JHGPKBIJHDE(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SyncArenaStatistics_b__19_1(::APAMFCKFHLL* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::APAMFCKFHLL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET))(this, a1);
		}

	};
}
