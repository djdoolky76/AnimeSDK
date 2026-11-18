#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHAHGICCGN;

#define BPHAHGICCGN_OGNAAGNEOPN_LKAABMPJKOJ_OFFSET UNITYSDK_OFFSET(0x10E23CD0)
#define BPHAHGICCGN_OGNAAGNEOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x10E21C60)

inline static constexpr unsigned int BPHAHGICCGN_OGNAAGNEOPN_TypeDefinitionIndex = 65143;

class BPHAHGICCGN_OGNAAGNEOPN : public ::System::Object
{
public:
	::BPHAHGICCGN* KLHPEBKNIFB; // 0x10
	::System::Int32 MOBNMDEDJIP; // 0x18
	::System::Int32 MMIFLDNOFMH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHAHGICCGN_OGNAAGNEOPN__CTOR_OFFSET))(this);
	}

	::System::Void LKAABMPJKOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPHAHGICCGN_OGNAAGNEOPN_LKAABMPJKOJ_OFFSET))(this);
	}
};
