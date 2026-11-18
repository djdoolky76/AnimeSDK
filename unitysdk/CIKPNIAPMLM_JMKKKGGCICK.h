#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CIKPNIAPMLM_JMKKKGGCICK_DBEMGFKPGCG_OFFSET UNITYSDK_OFFSET(0x1154E960)
#define CIKPNIAPMLM_JMKKKGGCICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1154E950)

inline static constexpr unsigned int CIKPNIAPMLM_JMKKKGGCICK_TypeDefinitionIndex = 73647;

class CIKPNIAPMLM_JMKKKGGCICK : public ::System::Object
{
public:
	::System::Int32 IJECEFLLHMJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_JMKKKGGCICK__CTOR_OFFSET))(this);
	}

	::System::Void DBEMGFKPGCG(::System::String* FOKKDPIMHHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIKPNIAPMLM_JMKKKGGCICK_DBEMGFKPGCG_OFFSET))(this, FOKKDPIMHHD);
	}
};
