#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDBGABPAOOF.h"
#include "unitysdk/System/Object.h"

#define BEGBOJLOPIC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C88A370)
#define BEGBOJLOPIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88A6E0)

inline static constexpr unsigned int BEGBOJLOPIC_TypeDefinitionIndex = 42013;

	class BEGBOJLOPIC : public ::System::Object
	{
	public:
		::MDBGABPAOOF OPJLJOPBGOJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBOJLOPIC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEGBOJLOPIC_CLEAR_OFFSET))(this);
		}

	};
