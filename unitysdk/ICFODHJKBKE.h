#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MusicRhythmTrack; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ICFODHJKBKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4DA40)
#define ICFODHJKBKE_FBAIMADCMBF_OFFSET UNITYSDK_OFFSET(0x15E4D870)
#define ICFODHJKBKE_MNDHIAJICBB_OFFSET UNITYSDK_OFFSET(0x15E4D650)

	class ICFODHJKBKE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFODHJKBKE_CTOR_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* MNDHIAJICBB(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICFODHJKBKE_MNDHIAJICBB_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>* FBAIMADCMBF(::System::Object* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + ICFODHJKBKE_FBAIMADCMBF_OFFSET))(a1);
		}

	};
