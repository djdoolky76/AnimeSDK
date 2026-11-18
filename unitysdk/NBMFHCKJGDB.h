#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class LGAFMFNMCOG;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NBMFHCKJGDB_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x13B56280)
#define NBMFHCKJGDB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13B56210)
#define NBMFHCKJGDB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13B55EF0)
#define NBMFHCKJGDB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13B56D80)
#define NBMFHCKJGDB_JFBDALLPLBA_OFFSET UNITYSDK_OFFSET(0x13B56E10)
#define NBMFHCKJGDB_MLAAFFHCOJE_OFFSET UNITYSDK_OFFSET(0x13B55DA0)
#define NBMFHCKJGDB__CTOR_OFFSET UNITYSDK_OFFSET(0x13B56B50)

inline static constexpr unsigned int NBMFHCKJGDB_TypeDefinitionIndex = 67384;

class NBMFHCKJGDB : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* EOFKGLCBKDI; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* FKHBGNGOIHI; // 0x20
	::KCMIFNGABDC_1<::System::Single>* GEEMKIKDHLB; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OOPLCPKCDJA; // 0x30
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* IMOFKFNJHHA; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x48
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* LKPBACBAHNH; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMFHCKJGDB__CTOR_OFFSET))(this);
	}

	::System::Void MLAAFFHCOJE(::LGAFMFNMCOG* ONBDAIKININ)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_MLAAFFHCOJE_OFFSET))(this, ONBDAIKININ);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void JFBDALLPLBA(::LGAFMFNMCOG* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::LGAFMFNMCOG*))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_JFBDALLPLBA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBMFHCKJGDB_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
