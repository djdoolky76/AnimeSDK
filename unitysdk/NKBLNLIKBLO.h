#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class AEDJLOFACHD;
class AOLDJJGODON;
namespace MoleMole { class MonoGamepadModule; }

#define NKBLNLIKBLO_DNPLLEDAGDB_OFFSET UNITYSDK_OFFSET(0xE1A7340)
#define NKBLNLIKBLO__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A73C0)

inline static constexpr unsigned int NKBLNLIKBLO_TypeDefinitionIndex = 64292;

class NKBLNLIKBLO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBLNLIKBLO__CTOR_OFFSET))(this);
	}

	::System::Boolean DNPLLEDAGDB(::AOLDJJGODON* MPLDDNMCECG, ::MoleMole::MonoGamepadModule* KHGFAKJKDGG, ::AEDJLOFACHD* BEKAGNFAFGI, ::MoleMole::InputActionEvent BMMFFGLFODP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOLDJJGODON*, ::MoleMole::MonoGamepadModule*, ::AEDJLOFACHD*, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + NKBLNLIKBLO_DNPLLEDAGDB_OFFSET))(this, MPLDDNMCECG, KHGFAKJKDGG, BEKAGNFAFGI, BMMFFGLFODP);
	}
};
