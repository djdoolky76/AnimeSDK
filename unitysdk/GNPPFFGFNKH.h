#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define GNPPFFGFNKH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DF6ED0)
#define GNPPFFGFNKH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DF6D20)
#define GNPPFFGFNKH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DF7180)
#define GNPPFFGFNKH__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF7040)

inline static constexpr unsigned int GNPPFFGFNKH_TypeDefinitionIndex = 47146;

class GNPPFFGFNKH : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* DGDJHGBDBBK; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPFFGFNKH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPFFGFNKH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GNPPFFGFNKH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNPPFFGFNKH_GDEOPIBNOIN_OFFSET))(this);
	}
};
