#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define PLMHDOMJHMC_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x194B7DE0)
#define PLMHDOMJHMC_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x194B8100)
#define PLMHDOMJHMC_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x194B81D0)
#define PLMHDOMJHMC_LODHHEPLHKM_OFFSET UNITYSDK_OFFSET(0x194B8150)
#define PLMHDOMJHMC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194B7B90)
#define PLMHDOMJHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x194B80C0)

inline static constexpr unsigned int PLMHDOMJHMC_TypeDefinitionIndex = 73772;

class PLMHDOMJHMC : public ::BBKFNNHAKBP
{
public:
	::System::Int32 MJKEDDKDLCC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHDOMJHMC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHDOMJHMC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHDOMJHMC_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void IAFHBCHLBME(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PLMHDOMJHMC_IAFHBCHLBME_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void LODHHEPLHKM(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PLMHDOMJHMC_LODHHEPLHKM_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMHDOMJHMC_KHAEIOINMBG_OFFSET))(this);
	}
};
