#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FNEKKILCHOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14112900)
#define FNEKKILCHOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14112520)
#define FNEKKILCHOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14113370)
#define FNEKKILCHOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14113040)

inline static constexpr unsigned int FNEKKILCHOJ_TypeDefinitionIndex = 93110;

class FNEKKILCHOJ : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* OEDAFMOFELG; // 0x28
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x30
	::CPABOPKIGAL* BEOEBBIHCKO; // 0x38
	::KCMIFNGABDC_1<::System::Single>* BMEJGPICECP; // 0x40
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJHGOOPHALO; // 0x48
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x50
	::KCMIFNGABDC_1<::System::Boolean>* LPAAHBHNKCB; // 0x58
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* IKKJLHAOAFF; // 0x60
	::CPABOPKIGAL* CHAHFFCDJIL; // 0x68
	::KCMIFNGABDC_1<::System::Single>* MDIKEOEGHIF; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEKKILCHOJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
