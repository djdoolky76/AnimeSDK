#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class PlayMusicRhythmTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DIGENCBFCNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xF968C40)
#define DIGENCBFCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0xF968790)
#define DIGENCBFCNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF9687A0)
#define DIGENCBFCNJ_FHOBEDMEJAN_OFFSET UNITYSDK_OFFSET(0xF9689E0)
#define DIGENCBFCNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF9687E0)
#define DIGENCBFCNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF968A70)
#define DIGENCBFCNJ_TICK_OFFSET UNITYSDK_OFFSET(0xF968AC0)

inline static constexpr unsigned int DIGENCBFCNJ_TypeDefinitionIndex = 54260;

	class DIGENCBFCNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::MusicRhythmBoard* MNBHJEELNBA; // 0x18
		::RPG::GameCore::PlayMusicRhythmTimeline* IGHAHBNLIJA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Boolean HANAHDNCPJM; // 0x30
		static ::System::String** StaticGet_IMOALFMKIHP()
		{
			return (::System::String**)UnitySDK::FromName("", "DIGENCBFCNJ")->GetStaticField(0x65E20);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayMusicRhythmTimeline* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayMusicRhythmTimeline*))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIGENCBFCNJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_TICK_OFFSET))(this, a1);
		}

		::System::Void FHOBEDMEJAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGENCBFCNJ_FHOBEDMEJAN_OFFSET))(this);
		}

	};
