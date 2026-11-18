#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class EMHHMLJNMEE;
template <typename T> class LJHFMILANJA_1;

#define BCMNGFGCIKO_CLEJAPKHGMI_OFFSET UNITYSDK_OFFSET(0x186658D0)
#define BCMNGFGCIKO_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x186657E0)
#define BCMNGFGCIKO__CTOR_OFFSET UNITYSDK_OFFSET(0x186658C0)

inline static constexpr unsigned int BCMNGFGCIKO_TypeDefinitionIndex = 65587;

class BCMNGFGCIKO : public ::JJEJBPGJPJN
{
public:
	::LJHFMILANJA_1<::System::UInt32>* DGEBDBEOEFO; // 0x88
	::LJHFMILANJA_1<::System::Int32>* AMCDAOJKFNF; // 0x90
	::LJHFMILANJA_1<::System::Int64>* FPFCBHBPCFM; // 0x98
	::LJHFMILANJA_1<::System::Int32>* APKIKLPPHEA; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMNGFGCIKO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCMNGFGCIKO_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void CLEJAPKHGMI(::EMHHMLJNMEE* KLPLABKOMKE)
	{
		return ((::System::Void(*)(::PVOID, ::EMHHMLJNMEE*))((::PBYTE)hIl2Cpp + BCMNGFGCIKO_CLEJAPKHGMI_OFFSET))(this, KLPLABKOMKE);
	}
};
