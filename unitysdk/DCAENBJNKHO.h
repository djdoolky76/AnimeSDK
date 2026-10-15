#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNAEDLKKKE.h"

#define DCAENBJNKHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1A6C0)
#define DCAENBJNKHO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1CA1A6D0)

inline static constexpr unsigned int DCAENBJNKHO_TypeDefinitionIndex = 43061;

	class DCAENBJNKHO : public ::IKNAEDLKKKE
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x20
		::System::Single PGMIOKKLHIE; // 0x24
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCAENBJNKHO_CTOR_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DCAENBJNKHO_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
