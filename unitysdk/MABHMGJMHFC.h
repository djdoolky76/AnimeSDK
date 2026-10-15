#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MABHMGJMHFC_EventUsage.h"
#include "unitysdk/System/Attribute.h"

#define MABHMGJMHFC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D12F3C0)

inline static constexpr unsigned int MABHMGJMHFC_TypeDefinitionIndex = 25014;

	class MABHMGJMHFC : public ::System::Attribute
	{
	public:
		::MABHMGJMHFC_EventUsage KFJFGFBMIJP; // 0x10
		::System::Void _ctor(::MABHMGJMHFC_EventUsage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MABHMGJMHFC_EventUsage))((::PBYTE)hIl2Cpp + MABHMGJMHFC_CTOR_OFFSET))(this, a1);
		}

	};
