#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C894030)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C894060)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLPHASES_B__18_0_OFFSET UNITYSDK_OFFSET(0x1C894070)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLSONGS_B__28_0_OFFSET UNITYSDK_OFFSET(0x1C8940A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMusicRhythmModule___c_TypeDefinitionIndex = 63210;

	class ActivityMusicRhythmModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MusicRhythmPhase*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmPhase*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x33230);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x33238);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmSong*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmSong*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x33240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPhases_b__18_0(::RPG::Client::MusicRhythmPhase* a1, ::RPG::Client::MusicRhythmPhase* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmPhase*, ::RPG::Client::MusicRhythmPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLPHASES_B__18_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllSongs_b__28_0(::RPG::Client::MusicRhythmSong* a1, ::RPG::Client::MusicRhythmSong* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmSong*, ::RPG::Client::MusicRhythmSong*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLSONGS_B__28_0_OFFSET))(this, a1, a2);
		}

	};
}
