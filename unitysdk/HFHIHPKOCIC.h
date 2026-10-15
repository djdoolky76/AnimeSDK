#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HFHIHPKOCIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA99F30)

inline static constexpr unsigned int HFHIHPKOCIC_TypeDefinitionIndex = 43256;

	class HFHIHPKOCIC : public ::System::Object
	{
	public:
		::System::UInt32 CEIFACBCNKE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFHIHPKOCIC_CTOR_OFFSET))(this);
		}

	};
