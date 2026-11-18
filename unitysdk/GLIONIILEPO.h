#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GLIONIILEPO_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x16CD3B20)
#define GLIONIILEPO_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x16CD3BE0)
#define GLIONIILEPO_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x16CD3980)
#define GLIONIILEPO_LJCLMCCDAJB_OFFSET UNITYSDK_OFFSET(0x16CD38E0)
#define GLIONIILEPO_NBIMNBOHPGL_OFFSET UNITYSDK_OFFSET(0x16CD38F0)
#define GLIONIILEPO_OECPFJGBEPB_OFFSET UNITYSDK_OFFSET(0x16CD3A10)
#define GLIONIILEPO_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x16CD3C70)
#define GLIONIILEPO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x16CD3820)
#define GLIONIILEPO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CD3900)
#define GLIONIILEPO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CD3970)

inline static constexpr unsigned int GLIONIILEPO_TypeDefinitionIndex = 50105;

class GLIONIILEPO : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x85; // 0x0
	::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* _EMMIFPKCJPE_k__BackingField; // 0x20
	::System::String* PKGDBDFHOMO; // 0x28
	::MoleMole::Config::DamageElementType HBMBILMFEII; // 0x30
	::System::Boolean LIIIPBOEJAF; // 0x34
	::System::Boolean KHABCHNADGA; // 0x35
	::System::Byte _padding0[0x2];
	::System::Int32 KANALECEMBD; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLIONIILEPO__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* LJCLMCCDAJB()
	{
		return ((::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO_LJCLMCCDAJB_OFFSET))(this);
	}

	::System::Void NBIMNBOHPGL(::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + GLIONIILEPO_NBIMNBOHPGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void OECPFJGBEPB(::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* KLPLLHDEEOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + GLIONIILEPO_OECPFJGBEPB_OFFSET))(this, KLPLLHDEEOP);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 KANALECEMBD, ::System::String* PKGDBDFHOMO, ::System::Boolean KHABCHNADGA, ::MoleMole::Config::DamageElementType EIILOAOBACD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + GLIONIILEPO_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, KANALECEMBD, PKGDBDFHOMO, KHABCHNADGA, EIILOAOBACD);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLIONIILEPO_OHFHFOHMBJH_OFFSET))(this);
	}
};
