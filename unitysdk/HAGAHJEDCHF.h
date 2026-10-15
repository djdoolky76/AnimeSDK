#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HAGAHJEDCHF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA872C0)
#define HAGAHJEDCHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA87300)

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
