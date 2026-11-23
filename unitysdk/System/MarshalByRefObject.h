#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MARSHALBYREFOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int MarshalByRefObject_TypeDefinitionIndex = 10286;

	class MarshalByRefObject : public ::System::Object
	{
	public:
		::System::Object* ED323668CCB70477; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MARSHALBYREFOBJECT__CTOR_OFFSET))(this);
		}
	};
}
