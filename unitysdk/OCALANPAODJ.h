#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define OCALANPAODJ_CLNLNKACNDG_OFFSET UNITYSDK_OFFSET(0xE140590)
#define OCALANPAODJ__CTOR_OFFSET UNITYSDK_OFFSET(0xE140580)

inline static constexpr unsigned int OCALANPAODJ_TypeDefinitionIndex = 42701;

class OCALANPAODJ : public ::System::Attribute
{
public:
	::System::String* _IPFOKEFKMDG_k__BackingField; // 0x10

	::System::Void _ctor(::System::String* KOMJNAOHNLO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OCALANPAODJ__CTOR_OFFSET))(this, KOMJNAOHNLO);
	}

	::System::String* CLNLNKACNDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCALANPAODJ_CLNLNKACNDG_OFFSET))(this);
	}
};
