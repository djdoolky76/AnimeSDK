#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAGAHJEDCHF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAB5710)
#define HAGAHJEDCHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB5750)

inline static constexpr unsigned int HAGAHJEDCHF_TypeDefinitionIndex = 43486;

	class HAGAHJEDCHF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAHJEDCHF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGAHJEDCHF_CLEAR_OFFSET))(this);
		}

	};
