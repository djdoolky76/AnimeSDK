#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SRF_IMPORTATTRIBUTE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20021690)
#define SRF_IMPORTATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x20021680)

namespace SRF
{
	inline static constexpr unsigned int ImportAttribute_TypeDefinitionIndex = 36291;

	class ImportAttribute : public ::System::Attribute
	{
	public:
		::System::Type* Service; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_IMPORTATTRIBUTE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SRF_IMPORTATTRIBUTE_CTOR_1_OFFSET))(this, a1);
		}

	};
}
