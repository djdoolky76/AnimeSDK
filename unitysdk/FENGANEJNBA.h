#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENGKPGFGGLM.h"

namespace System { class String; }

#define FENGANEJNBA_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x1419C700)
#define FENGANEJNBA_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x1419C670)
#define FENGANEJNBA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1419C5F0)
#define FENGANEJNBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1419C660)

inline static constexpr unsigned int FENGANEJNBA_TypeDefinitionIndex = 49392;

class FENGANEJNBA : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0xFD; // 0x0
	::System::String* CFCPKIOIPBK; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FENGANEJNBA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENGANEJNBA__CTOR_OFFSET))(this);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENGANEJNBA_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENGANEJNBA_FIGPAOKNJLN_OFFSET))(this);
	}
};
