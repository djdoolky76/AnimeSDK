#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DLMMAMJGPCI.h"
#include "unitysdk/System/Object.h"

#define IFOHIHCMNNN_AIENGOFDLGA_OFFSET UNITYSDK_OFFSET(0x16F63010)
#define IFOHIHCMNNN_NNPCIBFJGDP_OFFSET UNITYSDK_OFFSET(0x16F63060)
#define IFOHIHCMNNN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F63050)

inline static constexpr unsigned int IFOHIHCMNNN_TypeDefinitionIndex = 56474;

class IFOHIHCMNNN : public ::System::Object
{
public:
	::DLMMAMJGPCI _AILBIDKIMCJ_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOHIHCMNNN__CTOR_OFFSET))(this);
	}

	::DLMMAMJGPCI AIENGOFDLGA()
	{
		return ((::DLMMAMJGPCI(*)(::PVOID))((::PBYTE)hIl2Cpp + IFOHIHCMNNN_AIENGOFDLGA_OFFSET))(this);
	}

	::System::Void NNPCIBFJGDP(::DLMMAMJGPCI EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DLMMAMJGPCI))((::PBYTE)hIl2Cpp + IFOHIHCMNNN_NNPCIBFJGDP_OFFSET))(this, EGEGIMGMJHN);
	}
};
