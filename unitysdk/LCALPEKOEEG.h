#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LCALPEKOEEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DEB20)

inline static constexpr unsigned int LCALPEKOEEG_TypeDefinitionIndex = 42105;

	class LCALPEKOEEG : public ::System::Object
	{
	public:
		::System::Single BGCCFFPEALM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCALPEKOEEG_CTOR_OFFSET))(this);
		}

	};
