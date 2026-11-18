#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PFFGAOJJCHG_MMJPHAPAPCA_OFFSET UNITYSDK_OFFSET(0x136F70B0)
#define PFFGAOJJCHG__CTOR_OFFSET UNITYSDK_OFFSET(0x136F70A0)

inline static constexpr unsigned int PFFGAOJJCHG_TypeDefinitionIndex = 79237;

class PFFGAOJJCHG : public ::System::Object
{
public:
	// static const ::System::String* OFDOOEJBJGK; // 0x0
	// static const ::System::String* FENGKDOMJDC; // 0x0
	// static const ::System::String* AMIMHNNJHIP; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFGAOJJCHG__CTOR_OFFSET))(this);
	}

	static ::System::Void MMJPHAPAPCA(::System::String* BLGBIINHHNB, ::System::String* HAABDEAADGI)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PFFGAOJJCHG_MMJPHAPAPCA_OFFSET))(BLGBIINHHNB, HAABDEAADGI);
	}
};
