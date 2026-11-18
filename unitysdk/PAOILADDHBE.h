#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PAOILADDHBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x178AC600)
#define PAOILADDHBE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x178AC4A0)
#define PAOILADDHBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x178AC1F0)
#define PAOILADDHBE__CTOR_OFFSET UNITYSDK_OFFSET(0x178AC5F0)

inline static constexpr unsigned int PAOILADDHBE_TypeDefinitionIndex = 38649;

class PAOILADDHBE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* DPDOFDHIBCP; // 0x18
	::UnityEngine::Transform* LFGIFBDIFKI; // 0x20
	::MoleMole::NotificationBadge* IDPCIDBALIB; // 0x28
	::FGCOIBFFCHB* ACAINPAEELA; // 0x30
	::UnityEngine::Transform* CPIOABLKPIB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* FCPPEFBBJDK; // 0x40
	::FGCOIBFFCHB* JBDJKCHKEDN; // 0x48
	::UnityEngine::Transform* OCIJKIOGFPD; // 0x50
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x58
	::UnityEngine::Transform* KIOKABONMEG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x68
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x70
	::FGCOIBFFCHB* KDENFANHNPI; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOILADDHBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAOILADDHBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAOILADDHBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOILADDHBE_KGEBDLGBGNM_OFFSET))(this);
	}
};
