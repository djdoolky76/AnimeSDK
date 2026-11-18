#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPGCOBNECDL.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NEDGGFHGKCM_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1ADFE0F0)
#define NEDGGFHGKCM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x1ADFE100)
#define NEDGGFHGKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFE0E0)

inline static constexpr unsigned int NEDGGFHGKCM_TypeDefinitionIndex = 50063;

class NEDGGFHGKCM : public ::System::Object
{
public:
	::System::String* _BLBIAMKGHJL_k__BackingField; // 0x10
	::CPGCOBNECDL _MBNIMBHGJMI_k__BackingField; // 0x18

	::System::Void _ctor(::CPGCOBNECDL OBNIAHNMHPF, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::CPGCOBNECDL, ::System::String*))((::PBYTE)hIl2Cpp + NEDGGFHGKCM__CTOR_OFFSET))(this, OBNIAHNMHPF, HIAIKHDFCLN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDGGFHGKCM_DECMGICKDLH_OFFSET))(this);
	}

	::CPGCOBNECDL HKELPCLHLEC()
	{
		return ((::CPGCOBNECDL(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDGGFHGKCM_HKELPCLHLEC_OFFSET))(this);
	}
};
