#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KDGBPFBKDMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB35D030)

inline static constexpr unsigned int KDGBPFBKDMF_TypeDefinitionIndex = 80199;

	class KDGBPFBKDMF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGBPFBKDMF_CTOR_OFFSET))(this);
		}

	};
