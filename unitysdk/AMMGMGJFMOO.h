#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AMMGMGJFMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x15586D40)

inline static constexpr unsigned int AMMGMGJFMOO_TypeDefinitionIndex = 64345;

	class AMMGMGJFMOO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMMGMGJFMOO_CTOR_OFFSET))(this);
		}

	};
