#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEOAMBFMNIB;

#define KPHIAKENOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7BF0)

inline static constexpr unsigned int KPHIAKENOAA_TypeDefinitionIndex = 44220;

	class KPHIAKENOAA : public ::System::Object
	{
	public:
		::OEOAMBFMNIB* PEKCJALFENN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHIAKENOAA_CTOR_OFFSET))(this);
		}

	};
