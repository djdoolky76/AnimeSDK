#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HEPGNMDHHGM_CTOR_OFFSET UNITYSDK_OFFSET(0x16BA8C90)

inline static constexpr unsigned int HEPGNMDHHGM_TypeDefinitionIndex = 58178;

	class HEPGNMDHHGM : public ::System::Object
	{
	public:
		::System::Boolean LDLNOPPBKJM; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 FKLCHCPJOCE; // 0x14
		::System::Single GFCFHLJEHMC; // 0x18
		::System::Single LCEMECHAMCM; // 0x1C
		::System::Single IOEHOABOIFN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPGNMDHHGM_CTOR_OFFSET))(this);
		}

	};
