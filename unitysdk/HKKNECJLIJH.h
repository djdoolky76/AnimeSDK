#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HKKNECJLIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CABE820)

inline static constexpr unsigned int HKKNECJLIJH_TypeDefinitionIndex = 42116;

	class HKKNECJLIJH : public ::System::Object
	{
	public:
		::System::UInt32 DFEJABODPGM; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::UInt32 FDOELDMEBPE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKKNECJLIJH_CTOR_OFFSET))(this);
		}

	};
