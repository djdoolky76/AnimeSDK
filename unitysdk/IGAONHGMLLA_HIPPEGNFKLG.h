#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define IGAONHGMLLA_HIPPEGNFKLG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xF86C8E0)
#define IGAONHGMLLA_HIPPEGNFKLG__CTOR_OFFSET UNITYSDK_OFFSET(0xF86C8D0)

inline static constexpr unsigned int IGAONHGMLLA_HIPPEGNFKLG_TypeDefinitionIndex = 49102;

class IGAONHGMLLA_HIPPEGNFKLG : public ::System::Object
{
public:
	::System::Int32 COFFGMPGCKK; // 0x10
	::System::Int32 PMCNDKMMFDG; // 0x14
	::System::Single FMFAKJLDPHG; // 0x18
	::System::Boolean LDIKEIGEPBO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAONHGMLLA_HIPPEGNFKLG__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAONHGMLLA_HIPPEGNFKLG_NPOLNFDBOOD_OFFSET))(this);
	}
};
