#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NIPLMMKMIBL_CTOR_OFFSET UNITYSDK_OFFSET(0xBC070C0)

inline static constexpr unsigned int NIPLMMKMIBL_TypeDefinitionIndex = 77549;

	class NIPLMMKMIBL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPLMMKMIBL_CTOR_OFFSET))(this);
		}

	};
