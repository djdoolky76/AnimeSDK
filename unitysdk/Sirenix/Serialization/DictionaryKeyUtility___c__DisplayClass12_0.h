#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class Assembly; }

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFD7790)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0___CCTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1FFD77A0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility___c__DisplayClass12_0_TypeDefinitionIndex = 7579;

	class DictionaryKeyUtility___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* ass; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Object* __cctor_b__2(::System::Object* attr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY___C__DISPLAYCLASS12_0___CCTOR_B__2_OFFSET))(this, attr);
		}
	};
}
