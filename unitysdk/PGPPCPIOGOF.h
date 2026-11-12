#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"

#define PGPPCPIOGOF_CTOR_OFFSET UNITYSDK_OFFSET(0xCB202D0)

inline static constexpr unsigned int PGPPCPIOGOF_TypeDefinitionIndex = 65707;

	class PGPPCPIOGOF : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPPCPIOGOF_CTOR_OFFSET))(this);
		}

	};
