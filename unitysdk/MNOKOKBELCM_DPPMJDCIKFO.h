#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MNOKOKBELCM_DPPMJDCIKFO_KCNBPLEOGAG_OFFSET UNITYSDK_OFFSET(0x14D96200)
#define MNOKOKBELCM_DPPMJDCIKFO_LKGGPADBKAF_OFFSET UNITYSDK_OFFSET(0x14D96250)
#define MNOKOKBELCM_DPPMJDCIKFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14D961F0)

inline static constexpr unsigned int MNOKOKBELCM_DPPMJDCIKFO_TypeDefinitionIndex = 84676;

class MNOKOKBELCM_DPPMJDCIKFO : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOKOKBELCM_DPPMJDCIKFO__CTOR_OFFSET))(this);
	}

	::System::Void KCNBPLEOGAG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_DPPMJDCIKFO_KCNBPLEOGAG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LKGGPADBKAF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_DPPMJDCIKFO_LKGGPADBKAF_OFFSET))(this, PIIPCLCCOIG);
	}
};
