#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class KCMIFNGABDC_1;

#define BMGPKDLKPID_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1508A380)
#define BMGPKDLKPID_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1508A170)
#define BMGPKDLKPID_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1508AB60)
#define BMGPKDLKPID__CTOR_OFFSET UNITYSDK_OFFSET(0x1508A950)

inline static constexpr unsigned int BMGPKDLKPID_TypeDefinitionIndex = 79151;

class BMGPKDLKPID : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* EJHNHCADPGO; // 0x38
	::CPABOPKIGAL* DGLPCINAMAC; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* BEIKADLDACP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BMGPKDLKPID_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGPKDLKPID_GDEOPIBNOIN_OFFSET))(this);
	}
};
