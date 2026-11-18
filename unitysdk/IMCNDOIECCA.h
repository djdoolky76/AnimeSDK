#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define IMCNDOIECCA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1ACBDEE0)
#define IMCNDOIECCA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1ACBDD90)
#define IMCNDOIECCA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1ACBE130)
#define IMCNDOIECCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACBE000)

inline static constexpr unsigned int IMCNDOIECCA_TypeDefinitionIndex = 46553;

class IMCNDOIECCA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCNDOIECCA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCNDOIECCA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IMCNDOIECCA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMCNDOIECCA_GDEOPIBNOIN_OFFSET))(this);
	}
};
