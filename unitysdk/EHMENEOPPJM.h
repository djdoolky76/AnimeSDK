#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEKAOEFLAMO.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
class HMABMBCFEJH;
class JOKBBIDAKOF;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }

#define EHMENEOPPJM_AAMAGACNGOO_OFFSET UNITYSDK_OFFSET(0x154A7730)
#define EHMENEOPPJM_AOOBBFHEJEC_OFFSET UNITYSDK_OFFSET(0x154A81B0)
#define EHMENEOPPJM_CTOR_OFFSET UNITYSDK_OFFSET(0x154A70A0)
#define EHMENEOPPJM_DACPBDFONGI_OFFSET UNITYSDK_OFFSET(0x154A8910)
#define EHMENEOPPJM_FBOEKPDBIGD_OFFSET UNITYSDK_OFFSET(0x154A7400)
#define EHMENEOPPJM_FPFNKHHMJLF_OFFSET UNITYSDK_OFFSET(0x154A7120)
#define EHMENEOPPJM_GIGKBOIECDM_OFFSET UNITYSDK_OFFSET(0x154A8390)
#define EHMENEOPPJM_JHNFPCKDGHH_OFFSET UNITYSDK_OFFSET(0x154A8740)
#define EHMENEOPPJM_JPFBBLGINKA_OFFSET UNITYSDK_OFFSET(0x154A8960)
#define EHMENEOPPJM_LKMMFFLGEFI_OFFSET UNITYSDK_OFFSET(0x154A80D0)

inline static constexpr unsigned int EHMENEOPPJM_TypeDefinitionIndex = 60165;

	class EHMENEOPPJM : public ::NEKAOEFLAMO
	{
	public:
		::System::UInt32 GNNPKPBFAPB; // 0xD8
		::System::UInt32 KDNDHMNNDAH; // 0xDC
		::System::Int32 KBDPMBDJIOF; // 0xE0
		::System::Single BACBMLFMCPB; // 0xE4
		::System::Single GCGGPMBHDHA; // 0xE8
		::System::Single BJPICNDLGGD; // 0xEC
		::System::UInt32 GNJFPJGIEOH; // 0xF0
		::System::Single FANEHJNKNOK; // 0xF4
		::System::UInt32 CNJJGGAJFJE; // 0xF8
		::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EHMENEOPPJM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FPFNKHHMJLF(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHMENEOPPJM_FPFNKHHMJLF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FBOEKPDBIGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMENEOPPJM_FBOEKPDBIGD_OFFSET))(this);
		}

		::System::Void AAMAGACNGOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHMENEOPPJM_AAMAGACNGOO_OFFSET))(this, a1);
		}

		::System::Void GIGKBOIECDM(::RPG::Client::NoteInputResult a1, ::JOKBBIDAKOF* a2, ::HMABMBCFEJH* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::JOKBBIDAKOF*, ::HMABMBCFEJH*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHMENEOPPJM_GIGKBOIECDM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AOOBBFHEJEC(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + EHMENEOPPJM_AOOBBFHEJEC_OFFSET))(this, a1);
		}

		::System::Void JHNFPCKDGHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMENEOPPJM_JHNFPCKDGHH_OFFSET))(this);
		}

		::System::Single LKMMFFLGEFI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMENEOPPJM_LKMMFFLGEFI_OFFSET))(this);
		}

		::System::Void DACPBDFONGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMENEOPPJM_DACPBDFONGI_OFFSET))(this);
		}

		::System::Void JPFBBLGINKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMENEOPPJM_JPFBBLGINKA_OFFSET))(this);
		}

	};
