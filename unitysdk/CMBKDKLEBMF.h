#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define CMBKDKLEBMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFC360)

inline static constexpr unsigned int CMBKDKLEBMF_TypeDefinitionIndex = 6316;

	class CMBKDKLEBMF : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMBKDKLEBMF_CTOR_OFFSET))(this);
		}

	};
