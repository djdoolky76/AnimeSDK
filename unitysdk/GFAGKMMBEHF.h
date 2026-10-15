#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFAGKMMBEHF_CTOR_OFFSET UNITYSDK_OFFSET(0x159D9A30)

inline static constexpr unsigned int GFAGKMMBEHF_TypeDefinitionIndex = 77433;

	class GFAGKMMBEHF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAGKMMBEHF_CTOR_OFFSET))(this);
		}

	};
