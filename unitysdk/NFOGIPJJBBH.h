#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define NFOGIPJJBBH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9D7B0)

inline static constexpr unsigned int NFOGIPJJBBH_TypeDefinitionIndex = 61275;

	class NFOGIPJJBBH : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFOGIPJJBBH_CTOR_OFFSET))(this);
		}

	};
