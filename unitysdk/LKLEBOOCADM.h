#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAFKJCICCOP;

#define LKLEBOOCADM_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF19B0)

inline static constexpr unsigned int LKLEBOOCADM_TypeDefinitionIndex = 69072;

	class LKLEBOOCADM : public ::System::Object
	{
	public:
		::IAFKJCICCOP* OFKHJNMELII; // 0x10
		::System::Void _ctor(::IAFKJCICCOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAFKJCICCOP*))((::PBYTE)hIl2Cpp + LKLEBOOCADM_CTOR_OFFSET))(this, a1);
		}

	};
