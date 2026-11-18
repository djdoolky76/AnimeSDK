#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define ALCDKGFCBIF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFA7D0)

inline static constexpr unsigned int ALCDKGFCBIF_TypeDefinitionIndex = 91277;

class ALCDKGFCBIF : public ::System::Attribute
{
public:
	::System::Type* MGGEOFDFGBD; // 0x10

	::System::Void _ctor(::System::Type* JBINFMAIOJN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ALCDKGFCBIF__CTOR_OFFSET))(this, JBINFMAIOJN);
	}
};
