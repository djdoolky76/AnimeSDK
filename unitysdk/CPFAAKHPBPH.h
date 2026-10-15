#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEKAOEFLAMO.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
class HMABMBCFEJH;
class JOKBBIDAKOF;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPFAAKHPBPH_AAMAGACNGOO_OFFSET UNITYSDK_OFFSET(0xDCD1EE0)
#define CPFAAKHPBPH_AHLEBHFBAGI_OFFSET UNITYSDK_OFFSET(0xDCD2CA0)
#define CPFAAKHPBPH_AOOBBFHEJEC_OFFSET UNITYSDK_OFFSET(0xDCD2950)
#define CPFAAKHPBPH_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD1330)
#define CPFAAKHPBPH_FBOEKPDBIGD_OFFSET UNITYSDK_OFFSET(0xDCD1850)
#define CPFAAKHPBPH_FPFNKHHMJLF_OFFSET UNITYSDK_OFFSET(0xDCD1B70)
#define CPFAAKHPBPH_GIGKBOIECDM_OFFSET UNITYSDK_OFFSET(0xDCD2A20)
#define CPFAAKHPBPH_JNIBENCGFLJ_OFFSET UNITYSDK_OFFSET(0xDCD2CF0)
#define CPFAAKHPBPH_KJPKEHHHIPI_OFFSET UNITYSDK_OFFSET(0xDCD13E0)
#define CPFAAKHPBPH_LKMMFFLGEFI_OFFSET UNITYSDK_OFFSET(0xDCD2870)

	class CPFAAKHPBPH : public ::NEKAOEFLAMO
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* DAAEFLHHLHD; // 0xD8
		::System::Single BJPICNDLGGD; // 0xE0
		::System::Boolean IMHEHDAKCKL; // 0xE4
		::System::Byte _padding0[0x3];
		::System::Single FANEHJNKNOK; // 0xE8
		::System::Single BACBMLFMCPB; // 0xEC
		::System::Single GCGGPMBHDHA; // 0xF0
		::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_CTOR_OFFSET))(this, a1);
		}

		::System::Void KJPKEHHHIPI(::RPG::GameCore::MusicRhythmTimelineConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_KJPKEHHHIPI_OFFSET))(this, a1);
		}

		::System::Void FPFNKHHMJLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_FPFNKHHMJLF_OFFSET))(this);
		}

		::System::Void FBOEKPDBIGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_FBOEKPDBIGD_OFFSET))(this);
		}

		::System::Void AAMAGACNGOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_AAMAGACNGOO_OFFSET))(this, a1);
		}

		::System::Void GIGKBOIECDM(::RPG::Client::NoteInputResult a1, ::JOKBBIDAKOF* a2, ::HMABMBCFEJH* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::JOKBBIDAKOF*, ::HMABMBCFEJH*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_GIGKBOIECDM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AOOBBFHEJEC(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_AOOBBFHEJEC_OFFSET))(this, a1);
		}

		::System::Single LKMMFFLGEFI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_LKMMFFLGEFI_OFFSET))(this);
		}

		::System::Void AHLEBHFBAGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_AHLEBHFBAGI_OFFSET))(this);
		}

		::System::Void JNIBENCGFLJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPFAAKHPBPH_JNIBENCGFLJ_OFFSET))(this, a1);
		}

	};
