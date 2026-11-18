#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimator; }
namespace System { class String; }

#define KLDPIFPILGM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x177212D0)
#define KLDPIFPILGM_EGCLDMEKNGL_OFFSET UNITYSDK_OFFSET(0x177215A0)
#define KLDPIFPILGM_EPCHAOPOCPP_OFFSET UNITYSDK_OFFSET(0x177213A0)
#define KLDPIFPILGM_LDDMLNENCEK_OFFSET UNITYSDK_OFFSET(0x17721530)
#define KLDPIFPILGM_LNEMPDEJFLE_OFFSET UNITYSDK_OFFSET(0x177216B0)
#define KLDPIFPILGM_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x17721700)
#define KLDPIFPILGM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x177215F0)
#define KLDPIFPILGM__CTOR_OFFSET UNITYSDK_OFFSET(0x177212C0)

inline static constexpr unsigned int KLDPIFPILGM_TypeDefinitionIndex = 61890;

class KLDPIFPILGM : public ::System::Object
{
public:
	::System::String* JPOEPHCOPHE; // 0x10
	::MoleMole::UIAvatarAnimator* MCBFFOEDHOK; // 0x18
	::System::Single HACJFKBLODH; // 0x20
	::System::Single GABCKGCEOCF; // 0x24
	::System::Single DKLABMONPAM; // 0x28
	::System::Single BLAMIMEGKOC; // 0x2C
	::System::Boolean LIIPICIFFEO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDPIFPILGM__CTOR_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::System::Single MALGKLAPALE, ::System::Single IPFGHHOCJGJ, ::System::String* CANMGFHMACE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + KLDPIFPILGM_BBOMJDBNHIC_OFFSET))(this, MALGKLAPALE, IPFGHHOCJGJ, CANMGFHMACE);
	}

	::System::Void EPCHAOPOCPP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDPIFPILGM_EPCHAOPOCPP_OFFSET))(this);
	}

	::System::Void LDDMLNENCEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDPIFPILGM_LDDMLNENCEK_OFFSET))(this);
	}

	::System::Void EGCLDMEKNGL(::System::Boolean JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KLDPIFPILGM_EGCLDMEKNGL_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLDPIFPILGM_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void LNEMPDEJFLE(::MoleMole::UIAvatarAnimator* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + KLDPIFPILGM_LNEMPDEJFLE_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLDPIFPILGM_NPOLNFDBOOD_OFFSET))(this);
	}
};
