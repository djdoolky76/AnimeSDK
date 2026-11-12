#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJMAECEONM;

#define OKGHHACDGOF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DB571A0)
#define OKGHHACDGOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB57220)

inline static constexpr unsigned int OKGHHACDGOF_TypeDefinitionIndex = 44271;

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
