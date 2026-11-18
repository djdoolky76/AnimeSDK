#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define MNOKOKBELCM_FELEOAMLECF_KCNBPLEOGAG_OFFSET UNITYSDK_OFFSET(0x1077F9D0)
#define MNOKOKBELCM_FELEOAMLECF_LKGGPADBKAF_OFFSET UNITYSDK_OFFSET(0x1077F980)
#define MNOKOKBELCM_FELEOAMLECF__CTOR_OFFSET UNITYSDK_OFFSET(0x1077F970)

inline static constexpr unsigned int MNOKOKBELCM_FELEOAMLECF_TypeDefinitionIndex = 84677;

class MNOKOKBELCM_FELEOAMLECF : public ::System::Object
{
public:
	::System::Action_1<::System::Boolean>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNOKOKBELCM_FELEOAMLECF__CTOR_OFFSET))(this);
	}

	::System::Void LKGGPADBKAF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_FELEOAMLECF_LKGGPADBKAF_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KCNBPLEOGAG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MNOKOKBELCM_FELEOAMLECF_KCNBPLEOGAG_OFFSET))(this, PIIPCLCCOIG);
	}
};
