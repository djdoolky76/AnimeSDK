#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPPMPHICDEA_AEEEADLPPKI.h"

namespace System { class String; }

#define AJKEHBEHDPC_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x143B11C0)
#define AJKEHBEHDPC_NLLNNHIMGDM_OFFSET UNITYSDK_OFFSET(0x143B1260)
#define AJKEHBEHDPC__CTOR_OFFSET UNITYSDK_OFFSET(0x143B1240)

inline static constexpr unsigned int AJKEHBEHDPC_TypeDefinitionIndex = 76528;

class AJKEHBEHDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJKEHBEHDPC__CTOR_OFFSET))(this);
	}

	::GPPMPHICDEA_AEEEADLPPKI IAFHBCHLBME(::System::String* OKCDMBLEBAC)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJKEHBEHDPC_IAFHBCHLBME_OFFSET))(this, OKCDMBLEBAC);
	}

	::GPPMPHICDEA_AEEEADLPPKI NLLNNHIMGDM(::System::String* MIALFKCCCPI)
	{
		return ((::GPPMPHICDEA_AEEEADLPPKI(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJKEHBEHDPC_NLLNNHIMGDM_OFFSET))(this, MIALFKCCCPI);
	}
};
