#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/JDNCNHPNKIK.h"
#include "unitysdk/OIJMFNHGANO.h"
#include "unitysdk/PDHFLOJFIEJ.h"

class AOLDJJGODON;
namespace MoleMole { class MonoGamepadBaseList; }

#define BEPOAGFMILB_ABCMAPGGINI_OFFSET UNITYSDK_OFFSET(0x12D201E0)
#define BEPOAGFMILB_DLBEBGCNGDL_OFFSET UNITYSDK_OFFSET(0x12D20A30)
#define BEPOAGFMILB_DNPLLEDAGDB_OFFSET UNITYSDK_OFFSET(0x12D1FD60)
#define BEPOAGFMILB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D20A20)

inline static constexpr unsigned int BEPOAGFMILB_TypeDefinitionIndex = 79780;

class BEPOAGFMILB : public ::JDNCNHPNKIK
{
public:
	// static const ::System::Single LFIBIBLHHBL; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPOAGFMILB__CTOR_OFFSET))(this);
	}

	::System::Boolean DNPLLEDAGDB(::AOLDJJGODON* MPLDDNMCECG, ::MoleMole::MonoGamepadBaseList* KHGFAKJKDGG, ::MoleMole::MonoGamepadBaseList* HODAIDNDKHD, ::HNGNECAGPNE IOOOALDFNGH, ::OIJMFNHGANO KOBGEEHIPKK)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadBaseList*, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE, ::OIJMFNHGANO))((::PBYTE)hIl2Cpp + BEPOAGFMILB_DNPLLEDAGDB_OFFSET))(this, MPLDDNMCECG, KHGFAKJKDGG, HODAIDNDKHD, IOOOALDFNGH, KOBGEEHIPKK);
	}

	::System::Boolean DLBEBGCNGDL(::AOLDJJGODON* MIALFKCCCPI, ::MoleMole::MonoGamepadBaseList* KMGKAIDEIBA, ::MoleMole::MonoGamepadBaseList* FDHMCIFPNCK, ::HNGNECAGPNE MPBJAGIKPJM, ::OIJMFNHGANO DDMDINPGCFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadBaseList*, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE, ::OIJMFNHGANO))((::PBYTE)hIl2Cpp + BEPOAGFMILB_DLBEBGCNGDL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
	}

	static ::System::Int32 ABCMAPGGINI(::PDHFLOJFIEJ BIPENMMAOLG, ::MoleMole::MonoGamepadBaseList* HODAIDNDKHD, ::HNGNECAGPNE IOOOALDFNGH)
	{
		return ((::System::Int32(*)(::PDHFLOJFIEJ, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE))((::PBYTE)hIl2Cpp + BEPOAGFMILB_ABCMAPGGINI_OFFSET))(BIPENMMAOLG, HODAIDNDKHD, IOOOALDFNGH);
	}
};
