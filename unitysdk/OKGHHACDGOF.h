#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJMAECEONM;

#define OKGHHACDGOF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9952C0)
#define OKGHHACDGOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C995340)

inline static constexpr unsigned int OKGHHACDGOF_TypeDefinitionIndex = 43290;

	class OKGHHACDGOF : public ::System::Object
	{
	public:
		::HLJMAECEONM* CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHHACDGOF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGHHACDGOF_CLEAR_OFFSET))(this);
		}

	};
