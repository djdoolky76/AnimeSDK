#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJPHDHBAADE.h"

#define DDFGPDKMMKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DED92C0)

inline static constexpr unsigned int DDFGPDKMMKH_TypeDefinitionIndex = 25500;

	class DDFGPDKMMKH : public ::PJPHDHBAADE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFGPDKMMKH_CTOR_OFFSET))(this);
		}

	};
