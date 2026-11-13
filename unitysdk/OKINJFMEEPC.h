#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OKINJFMEEPC_CTOR_OFFSET UNITYSDK_OFFSET(0x17671550)

inline static constexpr unsigned int OKINJFMEEPC_TypeDefinitionIndex = 44731;

	class OKINJFMEEPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKINJFMEEPC_CTOR_OFFSET))(this);
		}

	};
