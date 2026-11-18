#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

#define FNBDJCBCHMI_EBLBGCHPLMK_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x15EFB710)
#define FNBDJCBCHMI_EBLBGCHPLMK__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB760)

inline static constexpr unsigned int FNBDJCBCHMI_EBLBGCHPLMK_TypeDefinitionIndex = 68957;

class FNBDJCBCHMI_EBLBGCHPLMK : public ::System::Object
{
public:
	::Foundation::Unreal::FGameplayTag IPKHBKKOBFC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_EBLBGCHPLMK__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + FNBDJCBCHMI_EBLBGCHPLMK_ONVISITONE_OFFSET))(this, AELLPLBJELA);
	}
};
