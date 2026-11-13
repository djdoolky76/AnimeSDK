#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DONDNFKDBBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB33AA0)

inline static constexpr unsigned int DONDNFKDBBJ_TypeDefinitionIndex = 44871;

	class DONDNFKDBBJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONDNFKDBBJ_CTOR_OFFSET))(this);
		}

	};
