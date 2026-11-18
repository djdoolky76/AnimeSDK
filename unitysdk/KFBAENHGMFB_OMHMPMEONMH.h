#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_OMHMPMEONMH_JPMLKLADGGO_OFFSET UNITYSDK_OFFSET(0x178FB1B0)
#define KFBAENHGMFB_OMHMPMEONMH_OAONFNIDKLI_OFFSET UNITYSDK_OFFSET(0x178FB1C0)
#define KFBAENHGMFB_OMHMPMEONMH__CTOR_OFFSET UNITYSDK_OFFSET(0x178FB1A0)

inline static constexpr unsigned int KFBAENHGMFB_OMHMPMEONMH_TypeDefinitionIndex = 78576;

class KFBAENHGMFB_OMHMPMEONMH : public ::System::Object
{
public:
	::System::Action* AFKOOINGNAK; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OMHMPMEONMH__CTOR_OFFSET))(this);
	}

	::System::Void JPMLKLADGGO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OMHMPMEONMH_JPMLKLADGGO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OAONFNIDKLI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_OMHMPMEONMH_OAONFNIDKLI_OFFSET))(this, PIIPCLCCOIG);
	}
};
