#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEPGNMDHHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x15C57A60)

inline static constexpr unsigned int HEPGNMDHHGM_TypeDefinitionIndex = 56952;

	class HEPGNMDHHGM : public ::System::Object
	{
	public:
		::System::Int32 FKLCHCPJOCE; // 0x10
		::System::Single LCEMECHAMCM; // 0x14
		::System::Single GFCFHLJEHMC; // 0x18
		::System::Single IOEHOABOIFN; // 0x1C
		::System::Boolean LDLNOPPBKJM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPGNMDHHGM_CTOR_OFFSET))(this);
		}

	};
