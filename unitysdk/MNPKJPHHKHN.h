#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MNPKJPHHKHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D1B90)

inline static constexpr unsigned int MNPKJPHHKHN_TypeDefinitionIndex = 37374;

	class MNPKJPHHKHN : public ::System::Object
	{
	public:
		::System::UInt32 FECDAFJNJDK; // 0x10
		::System::Int32 MNDFOPKBHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPKJPHHKHN_CTOR_OFFSET))(this);
		}

	};
