#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define HGMOFBMGHJE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB2610)

inline static constexpr unsigned int HGMOFBMGHJE_TypeDefinitionIndex = 61265;

	class HGMOFBMGHJE : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMOFBMGHJE_CTOR_OFFSET))(this);
		}

	};
