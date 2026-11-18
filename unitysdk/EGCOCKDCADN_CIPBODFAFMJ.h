#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Unreal/FTransform.h"

class LFDGABGKACJ;

#define EGCOCKDCADN_CIPBODFAFMJ_LJHDGNAEDIC_OFFSET UNITYSDK_OFFSET(0x14A881B0)
#define EGCOCKDCADN_CIPBODFAFMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14A881A0)

inline static constexpr unsigned int EGCOCKDCADN_CIPBODFAFMJ_TypeDefinitionIndex = 53545;

class EGCOCKDCADN_CIPBODFAFMJ : public ::System::Object
{
public:
	::LFDGABGKACJ* AOKJEGNBALI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCOCKDCADN_CIPBODFAFMJ__CTOR_OFFSET))(this);
	}

	::Foundation::Unreal::FTransform LJHDGNAEDIC()
	{
		return ((::Foundation::Unreal::FTransform(*)(::PVOID))((::PBYTE)hIl2Cpp + EGCOCKDCADN_CIPBODFAFMJ_LJHDGNAEDIC_OFFSET))(this);
	}
};
