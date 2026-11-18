#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDDNFAOFEHH.h"
#include "unitysdk/OBHDIGJCEOD.h"

class KGBFLHNJHHN;

#define NODJLGNBFID_JEDJCICAOBB_OFFSET UNITYSDK_OFFSET(0x1AB1D2B0)
#define NODJLGNBFID__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1D2A0)

inline static constexpr unsigned int NODJLGNBFID_TypeDefinitionIndex = 16875;

class NODJLGNBFID : public ::BDDNFAOFEHH
{
public:
	::System::Void _ctor(::OBHDIGJCEOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBHDIGJCEOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NODJLGNBFID__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single JEDJCICAOBB(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODJLGNBFID_JEDJCICAOBB_OFFSET))(this, MOBNMDEDJIP);
	}
};
