#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EBMFAGKJIIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CC060)

inline static constexpr unsigned int EBMFAGKJIIM_TypeDefinitionIndex = 66377;

	class EBMFAGKJIIM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMFAGKJIIM_CTOR_OFFSET))(this);
		}

	};
