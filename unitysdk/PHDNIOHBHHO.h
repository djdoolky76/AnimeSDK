#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PHDNIOHBHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBAC4C0)

inline static constexpr unsigned int PHDNIOHBHHO_TypeDefinitionIndex = 43947;

	class PHDNIOHBHHO : public ::System::Object
	{
	public:
		::System::Single LANBJHEAGGD; // 0x10
		::System::Single NPPNNDEADPN; // 0x14
		::System::UInt32 GHDLJJGHIHO; // 0x18
		::System::UInt32 FALHGPLBOMC; // 0x1C
		::System::Single LBHNFPGEMII; // 0x20
		::System::Single CGCENGKBPPM; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHDNIOHBHHO_CTOR_OFFSET))(this);
		}

	};
