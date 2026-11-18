#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Nap/NapECS/ArchetypeComponentAccessor.h"

class LNBCBKJIJBN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LNBCBKJIJBN_OFCIBINIMJO_DNCEPLKGHCE_OFFSET UNITYSDK_OFFSET(0x6C9220)
#define LNBCBKJIJBN_OFCIBINIMJO_INVOKE_OFFSET UNITYSDK_OFFSET(0x6C9210)
#define LNBCBKJIJBN_OFCIBINIMJO__CTOR_OFFSET UNITYSDK_OFFSET(0x3657B0)

inline static constexpr unsigned int LNBCBKJIJBN_OFCIBINIMJO_TypeDefinitionIndex = 80952;

struct alignas(8) LNBCBKJIJBN_OFCIBINIMJO
{
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* MMJFAHDHOLE; // 0x10
	::LNBCBKJIJBN* FEFFFPGCIIO; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* PELELFHAEHP, ::LNBCBKJIJBN* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>*, ::LNBCBKJIJBN*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_OFCIBINIMJO__CTOR_OFFSET))(this, PELELFHAEHP, AMNIHACKELI);
	}

	::System::Void Invoke(::Nap::NapECS::ArchetypeComponentAccessor& KBPFBOGDMAD)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_OFCIBINIMJO_INVOKE_OFFSET))(this, KBPFBOGDMAD);
	}

	::System::Void DNCEPLKGHCE(::Nap::NapECS::ArchetypeComponentAccessor& KBPFBOGDMAD)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ArchetypeComponentAccessor&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_OFCIBINIMJO_DNCEPLKGHCE_OFFSET))(this, KBPFBOGDMAD);
	}
};
