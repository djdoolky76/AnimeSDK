#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BNFDJEMMDFD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18580DE0)
#define BNFDJEMMDFD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18580C30)
#define BNFDJEMMDFD_GCKHEFEPNEC_OFFSET UNITYSDK_OFFSET(0x185819E0)
#define BNFDJEMMDFD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18581D90)
#define BNFDJEMMDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x18581C30)

inline static constexpr unsigned int BNFDJEMMDFD_TypeDefinitionIndex = 82762;

class BNFDJEMMDFD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::KCMIFNGABDC_1<::System::Single>* GEEMKIKDHLB; // 0x30
	::KCMIFNGABDC_1<::System::String*>* OFPELCMJKBH; // 0x38
	::KCMIFNGABDC_1<::System::String*>* ANDOJOBODMN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFDJEMMDFD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFDJEMMDFD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BNFDJEMMDFD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFDJEMMDFD_GDEOPIBNOIN_OFFSET))(this);
	}

	::MoleMole::Config::ConfigEntityAnimEvent* GCKHEFEPNEC(::MoleMole::Battle::Entity* KDEHMPGOCEP, ::System::String* GPMKNAIINNH)
	{
		return ((::MoleMole::Config::ConfigEntityAnimEvent*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + BNFDJEMMDFD_GCKHEFEPNEC_OFFSET))(this, KDEHMPGOCEP, GPMKNAIINNH);
	}
};
