#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class PlayMusicRhythmTimeline; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define DIGENCBFCNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x18EB8270)
#define DIGENCBFCNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18EB7DC0)
#define DIGENCBFCNJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18EB7DD0)
#define DIGENCBFCNJ_FHOBEDMEJAN_OFFSET UNITYSDK_OFFSET(0x18EB8010)
#define DIGENCBFCNJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18EB7E10)
#define DIGENCBFCNJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18EB80A0)
#define DIGENCBFCNJ_TICK_OFFSET UNITYSDK_OFFSET(0x18EB80F0)

inline static constexpr unsigned int DIGENCBFCNJ_TypeDefinitionIndex = 54260;

	class DIGENCBFCNJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayMusicRhythmTimeline* IGHAHBNLIJA; // 0x18
		::RPG::Client::MusicRhythmBoard* MNBHJEELNBA; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Boolean HANAHDNCPJM; // 0x30
		static ::System::String** StaticGet_IMOALFMKIHP()
		{
			return (::System::String**)UnitySDK::FromName("", "DIGENCBFCNJ")->GetStaticField(0x68980);
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
