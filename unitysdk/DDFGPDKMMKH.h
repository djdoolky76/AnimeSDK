#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPHDHBAADE.h"

#define DDFGPDKMMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD0DC00)

inline static constexpr unsigned int DDFGPDKMMKH_TypeDefinitionIndex = 25022;

	class DDFGPDKMMKH : public ::PJPHDHBAADE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFGPDKMMKH_CTOR_OFFSET))(this);
		}

	};
