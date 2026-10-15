#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEEMEIAAIOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA5AFE0)

inline static constexpr unsigned int GEEMEIAAIOO_TypeDefinitionIndex = 42946;

	class GEEMEIAAIOO : public ::System::Object
	{
	public:
		::System::Single OFJHLEMAKJG; // 0x10
		::System::Single MNFJKMCJLKP; // 0x14
		::System::Single MCCIKOBOIEM; // 0x18
		::System::Single KMLPCECFBAP; // 0x1C
		::System::Single NMCLEENBEAL; // 0x20
		::System::Single PCKADPOEOPI; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEMEIAAIOO_CTOR_OFFSET))(this);
		}

	};
