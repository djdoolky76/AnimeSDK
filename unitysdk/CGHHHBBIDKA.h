#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKBLNLIKBLO.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class AEDJLOFACHD;
class AOLDJJGODON;
namespace MoleMole { class MonoGamepadModule; }

#define CGHHHBBIDKA_DLBEBGCNGDL_OFFSET UNITYSDK_OFFSET(0x1694F350)
#define CGHHHBBIDKA_DNPLLEDAGDB_OFFSET UNITYSDK_OFFSET(0x1694F2A0)
#define CGHHHBBIDKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1694F340)

inline static constexpr unsigned int CGHHHBBIDKA_TypeDefinitionIndex = 58891;

class CGHHHBBIDKA : public ::NKBLNLIKBLO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHHHBBIDKA__CTOR_OFFSET))(this);
	}

	::System::Boolean DNPLLEDAGDB(::AOLDJJGODON* MPLDDNMCECG, ::MoleMole::MonoGamepadModule* KHGFAKJKDGG, ::AEDJLOFACHD* BEKAGNFAFGI, ::MoleMole::InputActionEvent BMMFFGLFODP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadModule*, ::AEDJLOFACHD*, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CGHHHBBIDKA_DNPLLEDAGDB_OFFSET))(this, MPLDDNMCECG, KHGFAKJKDGG, BEKAGNFAFGI, BMMFFGLFODP);
	}

	::System::Boolean DLBEBGCNGDL(::AOLDJJGODON* MIALFKCCCPI, ::MoleMole::MonoGamepadModule* KMGKAIDEIBA, ::AEDJLOFACHD* FDHMCIFPNCK, ::MoleMole::InputActionEvent MPBJAGIKPJM)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadModule*, ::AEDJLOFACHD*, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + CGHHHBBIDKA_DLBEBGCNGDL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
	}
};
