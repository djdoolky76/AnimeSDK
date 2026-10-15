#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJNLKIIAIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C5AE0)

inline static constexpr unsigned int PJNLKIIAIBA_TypeDefinitionIndex = 43301;

	class PJNLKIIAIBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNLKIIAIBA_CTOR_OFFSET))(this);
		}

	};
