#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEHCDMCIBJJ;

#define KEHCDMCIBJJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB373AF0)
#define KEHCDMCIBJJ_MJEODHKPKEB_OFFSET UNITYSDK_OFFSET(0xB373A70)

inline static constexpr unsigned int KEHCDMCIBJJ_TypeDefinitionIndex = 56290;

	class KEHCDMCIBJJ : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHCDMCIBJJ_CTOR_OFFSET))(this);
		}

		::KEHCDMCIBJJ* MJEODHKPKEB()
		{
			return ((::KEHCDMCIBJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHCDMCIBJJ_MJEODHKPKEB_OFFSET))(this);
		}

	};
