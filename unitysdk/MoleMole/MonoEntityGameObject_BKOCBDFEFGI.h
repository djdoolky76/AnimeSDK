#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_MONOENTITYGAMEOBJECT_BKOCBDFEFGI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x801A50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEntityGameObject_BKOCBDFEFGI_TypeDefinitionIndex = 54997;

	struct alignas(8) MonoEntityGameObject_BKOCBDFEFGI
	{
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Array*>* HPPDGPFPMJC; // 0x10

		::System::Void PHOADBJGFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOENTITYGAMEOBJECT_BKOCBDFEFGI_PHOADBJGFBE_OFFSET))(this);
		}
	};
}
