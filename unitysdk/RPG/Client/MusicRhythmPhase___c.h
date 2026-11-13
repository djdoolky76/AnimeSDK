#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMPHASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2B2000)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2B2040)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLGROUPS_B__3_0_OFFSET UNITYSDK_OFFSET(0x1C2B2080)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLTRACKS_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C2B2050)
#define RPG_CLIENT_MUSICRHYTHMPHASE___C__GETFIRSTSHOWGROUP_B__4_0_OFFSET UNITYSDK_OFFSET(0x1C2B20D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmPhase___c_TypeDefinitionIndex = 63229;

	class MusicRhythmPhase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72680);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72688);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72690);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmGroup*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72698);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTracks_b__2_0(::RPG::Client::MusicRhythmTrack* a1, ::RPG::Client::MusicRhythmTrack* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLTRACKS_B__2_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllGroups_b__3_0(::RPG::Client::MusicRhythmGroup* a1, ::RPG::Client::MusicRhythmGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmGroup*, ::RPG::Client::MusicRhythmGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETALLGROUPS_B__3_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetFirstShowGroup_b__4_0(::RPG::Client::MusicRhythmGroup* a1, ::RPG::Client::MusicRhythmGroup* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmGroup*, ::RPG::Client::MusicRhythmGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMPHASE___C__GETFIRSTSHOWGROUP_B__4_0_OFFSET))(this, a1, a2);
		}

	};
}
