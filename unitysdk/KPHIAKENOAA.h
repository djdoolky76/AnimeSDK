#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEOAMBFMNIB;

#define KPHIAKENOAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DD700)

inline static constexpr unsigned int KPHIAKENOAA_TypeDefinitionIndex = 43239;

	class KPHIAKENOAA : public ::System::Object
	{
	public:
		::OEOAMBFMNIB* PEKCJALFENN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPHIAKENOAA_CTOR_OFFSET))(this);
		}

	};
