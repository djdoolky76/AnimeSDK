#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Type; }

#define EFA2378B8E8C66F9_F208A951F4B1E360_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define EFA2378B8E8C66F9__CTOR_OFFSET UNITYSDK_OFFSET(0x2759260)

inline static constexpr unsigned int EFA2378B8E8C66F9_TypeDefinitionIndex = 11467;

class EFA2378B8E8C66F9 : public ::System::Attribute
{
public:
	::System::Type* E5609A97C04FBF9D; // 0x10

	::System::Type* F208A951F4B1E360()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFA2378B8E8C66F9_F208A951F4B1E360_OFFSET))(this);
	}

	::System::Void _ctor(::System::Type* B0CA79AD0D74B3FF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + EFA2378B8E8C66F9__CTOR_OFFSET))(this, B0CA79AD0D74B3FF);
	}
};
