#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define PKNFLMLCJEC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2E0210)

inline static constexpr unsigned int PKNFLMLCJEC_TypeDefinitionIndex = 61276;

	class PKNFLMLCJEC : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNFLMLCJEC_CTOR_OFFSET))(this);
		}

	};
