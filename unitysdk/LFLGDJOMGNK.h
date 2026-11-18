#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define LFLGDJOMGNK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x158D1FF0)
#define LFLGDJOMGNK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x158D1EB0)
#define LFLGDJOMGNK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x158D2230)
#define LFLGDJOMGNK__CTOR_OFFSET UNITYSDK_OFFSET(0x158D2110)

inline static constexpr unsigned int LFLGDJOMGNK_TypeDefinitionIndex = 63616;

class LFLGDJOMGNK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MEINJKFJIGE; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* ICGBACLFMIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLGDJOMGNK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLGDJOMGNK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LFLGDJOMGNK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFLGDJOMGNK_GDEOPIBNOIN_OFFSET))(this);
	}
};
