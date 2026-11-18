#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJKEHBEHDPC.h"
#include "unitysdk/GPPMPHICDEA_AEEEADLPPKI.h"

namespace System { class String; }

#define FEDNNBILFAM_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x15E59E90)
#define FEDNNBILFAM_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x15E59FD0)
#define FEDNNBILFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15E59E70)

inline static constexpr unsigned int FEDNNBILFAM_TypeDefinitionIndex = 80151;

class FEDNNBILFAM : public ::AJKEHBEHDPC
{
public:
	::System::Int32 DHBBIOFNEHK; // 0x18

	::System::Void _ctor(::System::Int32 PGEMBPEBCIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FEDNNBILFAM__CTOR_OFFSET))(this, PGEMBPEBCIL);
	}

	::GPPMPHICDEA_AEEEADLPPKI IAFHBCHLBME(::System::String* OKCDMBLEBAC)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEDNNBILFAM_IAFHBCHLBME_OFFSET))(this, OKCDMBLEBAC);
	}

	::GPPMPHICDEA_AEEEADLPPKI NLLNNHIMGDM(::System::String* MIALFKCCCPI)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FEDNNBILFAM_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
