#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJNLKIIAIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBB7760)

inline static constexpr unsigned int PJNLKIIAIBA_TypeDefinitionIndex = 44282;

	class PJNLKIIAIBA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNLKIIAIBA_CTOR_OFFSET))(this);
		}

	};
