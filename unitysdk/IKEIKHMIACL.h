#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define IKEIKHMIACL_CTOR_OFFSET UNITYSDK_OFFSET(0x17459B80)

inline static constexpr unsigned int IKEIKHMIACL_TypeDefinitionIndex = 80459;

	class IKEIKHMIACL : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKEIKHMIACL_CTOR_OFFSET))(this);
		}

	};
