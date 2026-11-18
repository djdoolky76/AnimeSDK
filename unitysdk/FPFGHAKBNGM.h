#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBKFNNHAKBP.h"

namespace System { class EventArgs; }

#define FPFGHAKBNGM_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x11C7E3E0)
#define FPFGHAKBNGM_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x11C7E880)
#define FPFGHAKBNGM_KHAEIOINMBG_OFFSET UNITYSDK_OFFSET(0x11C7E950)
#define FPFGHAKBNGM_LODHHEPLHKM_OFFSET UNITYSDK_OFFSET(0x11C7E8D0)
#define FPFGHAKBNGM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C7E190)
#define FPFGHAKBNGM__CTOR_OFFSET UNITYSDK_OFFSET(0x11C7E840)

inline static constexpr unsigned int FPFGHAKBNGM_TypeDefinitionIndex = 38411;

class FPFGHAKBNGM : public ::BBKFNNHAKBP
{
public:
	::System::Int32 MBPLJLLCDIJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGHAKBNGM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGHAKBNGM_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void BGJPLEHEDKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGHAKBNGM_BGJPLEHEDKJ_OFFSET))(this);
	}

	::System::Void IAFHBCHLBME(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FPFGHAKBNGM_IAFHBCHLBME_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void LODHHEPLHKM(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FPFGHAKBNGM_LODHHEPLHKM_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void KHAEIOINMBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPFGHAKBNGM_KHAEIOINMBG_OFFSET))(this);
	}
};
