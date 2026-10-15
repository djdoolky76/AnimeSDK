#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEKAOEFLAMO.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
class HMABMBCFEJH;
class JOKBBIDAKOF;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HEIMBHMBDAC_AAMAGACNGOO_OFFSET UNITYSDK_OFFSET(0x15C46480)
#define HEIMBHMBDAC_AOOBBFHEJEC_OFFSET UNITYSDK_OFFSET(0x15C46EC0)
#define HEIMBHMBDAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C45F30)
#define HEIMBHMBDAC_DACPBDFONGI_OFFSET UNITYSDK_OFFSET(0x15C474D0)
#define HEIMBHMBDAC_FBOEKPDBIGD_OFFSET UNITYSDK_OFFSET(0x15C462A0)
#define HEIMBHMBDAC_FPFNKHHMJLF_OFFSET UNITYSDK_OFFSET(0x15C46000)
#define HEIMBHMBDAC_GIGKBOIECDM_OFFSET UNITYSDK_OFFSET(0x15C470F0)
#define HEIMBHMBDAC_HJNJHENHGHK_OFFSET UNITYSDK_OFFSET(0x15C47C10)
#define HEIMBHMBDAC_HOLNCPKKAOD_OFFSET UNITYSDK_OFFSET(0x15C49560)
#define HEIMBHMBDAC_JGDHMINPGIL_OFFSET UNITYSDK_OFFSET(0x15C498D0)
#define HEIMBHMBDAC_JPFBBLGINKA_OFFSET UNITYSDK_OFFSET(0x15C49420)
#define HEIMBHMBDAC_LKMMFFLGEFI_OFFSET UNITYSDK_OFFSET(0x15C46E70)
#define HEIMBHMBDAC_NBKNEOJKCPJ_OFFSET UNITYSDK_OFFSET(0x15C48E30)
#define HEIMBHMBDAC_NPBPGMEAOBK_OFFSET UNITYSDK_OFFSET(0x15C47520)
#define HEIMBHMBDAC_ODILFILGIKH_OFFSET UNITYSDK_OFFSET(0x15C47680)
#define HEIMBHMBDAC_PLEAMMAFDMM_OFFSET UNITYSDK_OFFSET(0x15C49500)

inline static constexpr unsigned int HEIMBHMBDAC_TypeDefinitionIndex = 60163;

	class HEIMBHMBDAC : public ::NEKAOEFLAMO
	{
	public:
		::System::String* GLEJNGEPAMA; // 0xD8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0xE0
		::System::Boolean DCGJJLCOFMI; // 0xE8
		::System::Boolean NKDIFJBBIGL; // 0xE9
		::System::Boolean KEKFHONKKDL; // 0xEA
		::System::Byte _padding0[0x1];
		::System::Int32 KBDPMBDJIOF; // 0xEC
		::RPG::GameCore::PuzzleCustomEvent MOAFMEGMNGJ; // 0xF0
		::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_CTOR_OFFSET))(this, a1);
		}

		::System::Void FPFNKHHMJLF(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_FPFNKHHMJLF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FBOEKPDBIGD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_FBOEKPDBIGD_OFFSET))(this);
		}

		::System::Void AAMAGACNGOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_AAMAGACNGOO_OFFSET))(this, a1);
		}

		::System::Void GIGKBOIECDM(::RPG::Client::NoteInputResult a1, ::JOKBBIDAKOF* a2, ::HMABMBCFEJH* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::JOKBBIDAKOF*, ::HMABMBCFEJH*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_GIGKBOIECDM_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void AOOBBFHEJEC(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_AOOBBFHEJEC_OFFSET))(this, a1);
		}

		::System::Void DACPBDFONGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_DACPBDFONGI_OFFSET))(this);
		}

		::System::Void NPBPGMEAOBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_NPBPGMEAOBK_OFFSET))(this);
		}

		::System::Void ODILFILGIKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_ODILFILGIKH_OFFSET))(this, a1);
		}

		::System::Void JPFBBLGINKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_JPFBBLGINKA_OFFSET))(this);
		}

		::System::Void PLEAMMAFDMM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_PLEAMMAFDMM_OFFSET))(this, a1);
		}

		::System::Void HOLNCPKKAOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_HOLNCPKKAOD_OFFSET))(this);
		}

		::System::Void JGDHMINPGIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_JGDHMINPGIL_OFFSET))(this);
		}

		::System::Single LKMMFFLGEFI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_LKMMFFLGEFI_OFFSET))(this);
		}

		::System::Void NBKNEOJKCPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_NBKNEOJKCPJ_OFFSET))(this);
		}

		::System::Void HJNJHENHGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIMBHMBDAC_HJNJHENHGHK_OFFSET))(this);
		}

	};
