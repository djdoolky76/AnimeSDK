#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNGNECAGPNE.h"
#include "unitysdk/JDNCNHPNKIK.h"
#include "unitysdk/OIJMFNHGANO.h"

class AOLDJJGODON;
namespace MoleMole { class MonoGamepadBaseList; }

#define NGDFNEFOKLA_DLBEBGCNGDL_OFFSET UNITYSDK_OFFSET(0x12101210)
#define NGDFNEFOKLA_DNPLLEDAGDB_OFFSET UNITYSDK_OFFSET(0x12101060)
#define NGDFNEFOKLA__CTOR_OFFSET UNITYSDK_OFFSET(0x12101200)

inline static constexpr unsigned int NGDFNEFOKLA_TypeDefinitionIndex = 55533;

class NGDFNEFOKLA : public ::JDNCNHPNKIK
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGDFNEFOKLA__CTOR_OFFSET))(this);
	}

	::System::Boolean DNPLLEDAGDB(::AOLDJJGODON* MPLDDNMCECG, ::MoleMole::MonoGamepadBaseList* KHGFAKJKDGG, ::MoleMole::MonoGamepadBaseList* HODAIDNDKHD, ::HNGNECAGPNE MLGDONKBJFM, ::OIJMFNHGANO KOBGEEHIPKK)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadBaseList*, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE, ::OIJMFNHGANO))((::PBYTE)hIl2Cpp + NGDFNEFOKLA_DNPLLEDAGDB_OFFSET))(this, MPLDDNMCECG, KHGFAKJKDGG, HODAIDNDKHD, MLGDONKBJFM, KOBGEEHIPKK);
	}

	::System::Boolean DLBEBGCNGDL(::AOLDJJGODON* MIALFKCCCPI, ::MoleMole::MonoGamepadBaseList* KMGKAIDEIBA, ::MoleMole::MonoGamepadBaseList* FDHMCIFPNCK, ::HNGNECAGPNE MPBJAGIKPJM, ::OIJMFNHGANO DDMDINPGCFI)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadBaseList*, ::MoleMole::MonoGamepadBaseList*, ::HNGNECAGPNE, ::OIJMFNHGANO))((::PBYTE)hIl2Cpp + NGDFNEFOKLA_DLBEBGCNGDL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI);
	}
};
