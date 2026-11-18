#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define CJBCIJDFGED_DEEPFPDMHJD_OFFSET UNITYSDK_OFFSET(0x1FB10120)
#define CJBCIJDFGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB100A0)

inline static constexpr unsigned int CJBCIJDFGED_TypeDefinitionIndex = 29010;

class CJBCIJDFGED : public ::System::Attribute
{
public:
	::System::Type* _GKMIMPEKGHK_k__BackingField; // 0x10

	::System::Void _ctor(::System::Type* KONKCHLNEJP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CJBCIJDFGED__CTOR_OFFSET))(this, KONKCHLNEJP);
	}

	::System::Type* DEEPFPDMHJD()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJBCIJDFGED_DEEPFPDMHJD_OFFSET))(this);
	}
};
