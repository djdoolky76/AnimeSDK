#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GNFLPMACOFA_CTOR_OFFSET UNITYSDK_OFFSET(0x18783EB0)

inline static constexpr unsigned int GNFLPMACOFA_TypeDefinitionIndex = 68863;

	class GNFLPMACOFA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFLPMACOFA_CTOR_OFFSET))(this);
		}

	};
