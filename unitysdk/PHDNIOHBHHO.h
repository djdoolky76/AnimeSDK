#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHDNIOHBHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9BB150)

inline static constexpr unsigned int PHDNIOHBHHO_TypeDefinitionIndex = 42966;

	class PHDNIOHBHHO : public ::System::Object
	{
	public:
		::System::Single NPPNNDEADPN; // 0x10
		::System::Single LBHNFPGEMII; // 0x14
		::System::Single CGCENGKBPPM; // 0x18
		::System::Single LANBJHEAGGD; // 0x1C
		::System::UInt32 FALHGPLBOMC; // 0x20
		::System::UInt32 GHDLJJGHIHO; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDNIOHBHHO_CTOR_OFFSET))(this);
		}

	};
