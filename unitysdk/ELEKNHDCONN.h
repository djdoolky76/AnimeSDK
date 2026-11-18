#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ELOODCKLFGI.h"
#include "unitysdk/IODPOEFKGOI.h"

#define ELEKNHDCONN_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x744E40)
#define ELEKNHDCONN_PLDNJNNDKNJ_OFFSET UNITYSDK_OFFSET(0x744E50)

inline static constexpr unsigned int ELEKNHDCONN_TypeDefinitionIndex = 83823;

struct alignas(4) ELEKNHDCONN
{
	::System::Void IAFHBCHLBME(::ELOODCKLFGI& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ELOODCKLFGI&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + ELEKNHDCONN_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void PLDNJNNDKNJ(::ELOODCKLFGI& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::ELOODCKLFGI&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + ELEKNHDCONN_PLDNJNNDKNJ_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
