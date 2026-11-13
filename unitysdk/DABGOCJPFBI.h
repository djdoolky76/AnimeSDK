#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DABGOCJPFBI_CTOR_OFFSET UNITYSDK_OFFSET(0x2032AC40)

inline static constexpr unsigned int DABGOCJPFBI_TypeDefinitionIndex = 45009;

	class DABGOCJPFBI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABGOCJPFBI_CTOR_OFFSET))(this);
		}

	};
