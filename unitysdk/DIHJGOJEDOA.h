#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DIHJGOJEDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9FC400)

inline static constexpr unsigned int DIHJGOJEDOA_TypeDefinitionIndex = 43777;

	class DIHJGOJEDOA : public ::System::Object
	{
	public:
		::System::UInt32 NJGKCPOOHDM; // 0x10
		::System::UInt32 DFEJABODPGM; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIHJGOJEDOA_CTOR_OFFSET))(this);
		}

	};
