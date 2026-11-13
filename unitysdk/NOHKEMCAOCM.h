#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NOHKEMCAOCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E056660)

inline static constexpr unsigned int NOHKEMCAOCM_TypeDefinitionIndex = 44236;

	class NOHKEMCAOCM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHKEMCAOCM_CTOR_OFFSET))(this);
		}

	};
