#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFBPMDJAJAH.h"
#include "unitysdk/LGPDLKBDAGI.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PEBJBODDHCN_FKBKOFIBGJF_OFFSET UNITYSDK_OFFSET(0x1D002250)
#define PEBJBODDHCN_HJBKEJNMMDA_OFFSET UNITYSDK_OFFSET(0x1D0021B0)
#define PEBJBODDHCN_LDKNLCJDFEP_OFFSET UNITYSDK_OFFSET(0x1D002140)
#define PEBJBODDHCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D002130)

inline static constexpr unsigned int PEBJBODDHCN_TypeDefinitionIndex = 14249;

class PEBJBODDHCN : public ::KFBPMDJAJAH
{
public:
	::System::Void _ctor(::LGPDLKBDAGI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LGPDLKBDAGI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PEBJBODDHCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LDKNLCJDFEP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEBJBODDHCN_LDKNLCJDFEP_OFFSET))(this);
	}

	::System::String* HJBKEJNMMDA(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBJBODDHCN_HJBKEJNMMDA_OFFSET))(this, EOGLMAEPALE);
	}

	::System::String* FKBKOFIBGJF(::System::Int32 EOGLMAEPALE)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PEBJBODDHCN_FKBKOFIBGJF_OFFSET))(this, EOGLMAEPALE);
	}
};
