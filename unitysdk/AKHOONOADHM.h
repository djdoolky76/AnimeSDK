#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKHOONOADHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C862030)

inline static constexpr unsigned int AKHOONOADHM_TypeDefinitionIndex = 41986;

	class AKHOONOADHM : public ::System::Object
	{
	public:
		::System::Int32 LNOFOANHJGD; // 0x10
		::System::Int32 FLOIIENNEEK; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHOONOADHM_CTOR_OFFSET))(this);
		}

	};
