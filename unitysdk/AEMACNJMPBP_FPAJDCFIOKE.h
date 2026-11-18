#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class GGPBJGLCMCC;
template <typename T> class EFBMBOCNAJI_1;
template <typename T> class KLIOMMIOFDC_1;
template <typename T> class LGFJMNEABJP_1;

#define AEMACNJMPBP_FPAJDCFIOKE_HNKMNHGAGDM_OFFSET UNITYSDK_OFFSET(0x154EBBE0)
#define AEMACNJMPBP_FPAJDCFIOKE_JINPDDJFIJK_OFFSET UNITYSDK_OFFSET(0x154EC1E0)
#define AEMACNJMPBP_FPAJDCFIOKE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x154EBAB0)
#define AEMACNJMPBP_FPAJDCFIOKE__CTOR_OFFSET UNITYSDK_OFFSET(0x154EBBD0)

inline static constexpr unsigned int AEMACNJMPBP_FPAJDCFIOKE_TypeDefinitionIndex = 59160;

class AEMACNJMPBP_FPAJDCFIOKE : public ::JJEJBPGJPJN
{
public:
	::KLIOMMIOFDC_1<::GGPBJGLCMCC*>* JOPLHMACAID; // 0x88
	::EFBMBOCNAJI_1<::System::Int32>* CJHCCIAEBNP; // 0x90
	::LGFJMNEABJP_1<::System::Int32>* CCOALDLAGCN; // 0x98
	::System::Int32 JLLEPILNAOE; // 0xA0
	::System::Int32 EPDDDLMEIJH; // 0xA4
	::System::Int32 FAOPCIONDGC; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMACNJMPBP_FPAJDCFIOKE__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMACNJMPBP_FPAJDCFIOKE_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void HNKMNHGAGDM(::System::Int32 HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEMACNJMPBP_FPAJDCFIOKE_HNKMNHGAGDM_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Int32 JINPDDJFIJK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEMACNJMPBP_FPAJDCFIOKE_JINPDDJFIJK_OFFSET))(this);
	}
};
