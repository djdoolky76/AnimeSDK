#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_IMONOMODELSHAPEELEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x119259D0)

namespace MoleMole
{
	inline static constexpr unsigned int IMonoModelShapeElement_TypeDefinitionIndex = 86016;

	class IMonoModelShapeElement : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_IMONOMODELSHAPEELEMENT__CTOR_OFFSET))(this);
		}
	};
}
