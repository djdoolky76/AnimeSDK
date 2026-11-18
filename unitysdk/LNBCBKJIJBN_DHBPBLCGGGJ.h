#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNBCBKJIJBN_DHBPBLCGGGJ_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x14D3D3A0)
#define LNBCBKJIJBN_DHBPBLCGGGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14D3D2D0)
#define LNBCBKJIJBN_DHBPBLCGGGJ_ONVISITONE_OFFSET UNITYSDK_OFFSET(0x14D3D270)
#define LNBCBKJIJBN_DHBPBLCGGGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14D3D390)

inline static constexpr unsigned int LNBCBKJIJBN_DHBPBLCGGGJ_TypeDefinitionIndex = 80957;

class LNBCBKJIJBN_DHBPBLCGGGJ : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Foundation::Unreal::FGameplayTag>* PGJEEDHIFLK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DHBPBLCGGGJ__CTOR_OFFSET))(this);
	}

	::System::Void OnVisitOne(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DHBPBLCGGGJ_ONVISITONE_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DHBPBLCGGGJ_DISPOSE_OFFSET))(this);
	}

	::LNBCBKJIJBN_DHBPBLCGGGJ* BBPCBEEHALC()
	{
		return ((::LNBCBKJIJBN_DHBPBLCGGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DHBPBLCGGGJ_BBPCBEEHALC_OFFSET))(this);
	}
};
