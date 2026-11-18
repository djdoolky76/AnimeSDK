#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGGKPOJFCKN.h"
#include "unitysdk/KHPBGOOPPOM_BKLEFHIMIJH.h"

class PIPAOOIIBJH;
namespace MoleMole::Config { class ConfigWaveMorphParam; }
namespace UnityEngine { class AnimationCurve; }

#define KHPBGOOPPOM_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x16340AC0)
#define KHPBGOOPPOM_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16340970)
#define KHPBGOOPPOM_DFIFBHAPPKD_OFFSET UNITYSDK_OFFSET(0x163408E0)
#define KHPBGOOPPOM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x163405A0)
#define KHPBGOOPPOM_PAGKDPGFPEB_OFFSET UNITYSDK_OFFSET(0x163407E0)
#define KHPBGOOPPOM__CTOR_OFFSET UNITYSDK_OFFSET(0x163408D0)

inline static constexpr unsigned int KHPBGOOPPOM_TypeDefinitionIndex = 39224;

class KHPBGOOPPOM : public ::JGGKPOJFCKN
{
public:
	::UnityEngine::AnimationCurve* HAAMMPFJAMH; // 0x20
	::UnityEngine::AnimationCurve* FODKIABPPKE; // 0x28
	::System::Single KPIOHEBDNEE; // 0x30
	::KHPBGOOPPOM_BKLEFHIMIJH JNOBNNGMLBP; // 0x34
	::System::Single HDALMNDDLDM; // 0x38
	::System::Single LMCJPEHNJIM; // 0x3C
	::System::Single HMONEHPNGFA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBGOOPPOM__CTOR_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single JFLHDBCKGGF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHPBGOOPPOM_OKJCHFGIKBH_OFFSET))(this, JFLHDBCKGGF);
	}

	::System::Void PAGKDPGFPEB(::PIPAOOIIBJH*& IIOENHKMJNE)
	{
		return ((::System::Void(*)(::PVOID, ::PIPAOOIIBJH*&))((::PBYTE)hIl2Cpp + KHPBGOOPPOM_PAGKDPGFPEB_OFFSET))(this, IIOENHKMJNE);
	}

	::System::Void DFIFBHAPPKD(::PIPAOOIIBJH*& MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::PIPAOOIIBJH*&))((::PBYTE)hIl2Cpp + KHPBGOOPPOM_DFIFBHAPPKD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CNHBDOMKKDE(::MoleMole::Config::ConfigWaveMorphParam* HNOPAJLDCFB, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigWaveMorphParam*, ::System::Single))((::PBYTE)hIl2Cpp + KHPBGOOPPOM_CNHBDOMKKDE_OFFSET))(this, HNOPAJLDCFB, MDPPNMIPDMP);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHPBGOOPPOM_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}
};
