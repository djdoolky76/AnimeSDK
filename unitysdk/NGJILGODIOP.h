#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define NGJILGODIOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC886F0)
#define NGJILGODIOP_GET_STAGESTEPTYPE_OFFSET UNITYSDK_OFFSET(0x1EC88900)

	class NGJILGODIOP : public ::System::Attribute
	{
	public:
		::System::Type* _StageStepType_k__BackingField; // 0x10
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NGJILGODIOP_CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_StageStepType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJILGODIOP_GET_STAGESTEPTYPE_OFFSET))(this);
		}

	};
