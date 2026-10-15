#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD912D90)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD912DD0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET UNITYSDK_OFFSET(0xD912DE0)

namespace RPG::Client
{
	class MusicRhythmLevel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E560);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTracks_b__6_0(::RPG::Client::MusicRhythmTrack* a1, ::RPG::Client::MusicRhythmTrack* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET))(this, a1, a2);
		}

	};
}
