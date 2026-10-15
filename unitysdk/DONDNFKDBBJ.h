#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DONDNFKDBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA2FE40)

inline static constexpr unsigned int DONDNFKDBBJ_TypeDefinitionIndex = 43796;

	class DONDNFKDBBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONDNFKDBBJ_CTOR_OFFSET))(this);
		}

	};
