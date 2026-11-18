#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_BASEHOLLOWCAMERAPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B11220)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseHollowCameraPredicate_TypeDefinitionIndex = 69628;

	class BaseHollowCameraPredicate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEHOLLOWCAMERAPREDICATE__CTOR_OFFSET))(this);
		}
	};
}
