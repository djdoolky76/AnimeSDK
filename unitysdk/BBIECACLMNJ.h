#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
template <typename T> class KCMIFNGABDC_1;

#define BBIECACLMNJ_ABIKMGNOOCP_OFFSET UNITYSDK_OFFSET(0x1360F8C0)
#define BBIECACLMNJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1360F4C0)
#define BBIECACLMNJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1360F310)
#define BBIECACLMNJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13610190)
#define BBIECACLMNJ_NFPACADKCAF_OFFSET UNITYSDK_OFFSET(0x136101A0)
#define BBIECACLMNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13610000)

inline static constexpr unsigned int BBIECACLMNJ_TypeDefinitionIndex = 58267;

class BBIECACLMNJ : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* EGCCIODCJIA; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* KNDOHCEMFGM; // 0x30
	::KCMIFNGABDC_1<::System::String*>* FLNKNMGGHBK; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BBIECACLMNJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBIECACLMNJ_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::UnityEngine::GameObject* ABIKMGNOOCP(::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH, ::System::Boolean& IJHLGPKFBCJ)
	{
		return ((::UnityEngine::GameObject*(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean&))((::PBYTE)hIl2Cpp + BBIECACLMNJ_ABIKMGNOOCP_OFFSET))(JEJJLALJJKH, IJHLGPKFBCJ);
	}

	static ::System::Boolean NFPACADKCAF(::Foundation::ViewObject::ViewObjectHandle JEJJLALJJKH)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + BBIECACLMNJ_NFPACADKCAF_OFFSET))(JEJJLALJJKH);
	}
};
