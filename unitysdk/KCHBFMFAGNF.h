#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FNJCJNFMPON;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCHBFMFAGNF_GKDBJNGHPPM_OFFSET UNITYSDK_OFFSET(0x13CE5680)
#define KCHBFMFAGNF_HNJDEGABMMB_OFFSET UNITYSDK_OFFSET(0x13CE5690)
#define KCHBFMFAGNF__CTOR_OFFSET UNITYSDK_OFFSET(0x13CE5600)

inline static constexpr unsigned int KCHBFMFAGNF_TypeDefinitionIndex = 73414;

class KCHBFMFAGNF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FNJCJNFMPON*>* _PCLOKOLCHKK_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHBFMFAGNF__CTOR_OFFSET))(this);
	}

	::System::Void GKDBJNGHPPM(::System::Collections::Generic::List_1<::FNJCJNFMPON*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::FNJCJNFMPON*>*))((::PBYTE)hIl2Cpp + KCHBFMFAGNF_GKDBJNGHPPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::FNJCJNFMPON*>* HNJDEGABMMB()
	{
		return ((::System::Collections::Generic::List_1<::FNJCJNFMPON*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCHBFMFAGNF_HNJDEGABMMB_OFFSET))(this);
	}
};
