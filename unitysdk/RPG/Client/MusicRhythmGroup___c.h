#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMGROUP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD911A00)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD911A40)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLLEVELS_B__5_0_OFFSET UNITYSDK_OFFSET(0xD911A80)
#define RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLTRACKS_B__4_0_OFFSET UNITYSDK_OFFSET(0xD911A50)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmGroup___c_TypeDefinitionIndex = 61815;

	class MusicRhythmGroup___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E430);
		}

		static ::System::Comparison_1<::RPG::Client::MusicRhythmLevel*>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmLevel*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E438);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllTracks_b__4_0(::RPG::Client::MusicRhythmTrack* a1, ::RPG::Client::MusicRhythmTrack* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLTRACKS_B__4_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetAllLevels_b__5_0(::RPG::Client::MusicRhythmLevel* a1, ::RPG::Client::MusicRhythmLevel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmLevel*, ::RPG::Client::MusicRhythmLevel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMGROUP___C__GETALLLEVELS_B__5_0_OFFSET))(this, a1, a2);
		}

	};
}
