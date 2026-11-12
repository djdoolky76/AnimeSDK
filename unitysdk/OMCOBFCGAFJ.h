#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define OMCOBFCGAFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC81F830)

inline static constexpr unsigned int OMCOBFCGAFJ_TypeDefinitionIndex = 53171;

	class OMCOBFCGAFJ : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCOBFCGAFJ_CTOR_OFFSET))(this);
		}

	};
