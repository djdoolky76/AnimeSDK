#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFOEOKBFJPJ.h"
#include "unitysdk/ENGKPGFGGLM.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBMGAAFFLPI_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x19495D80)
#define PBMGAAFFLPI_FIGPAOKNJLN_OFFSET UNITYSDK_OFFSET(0x19495B10)
#define PBMGAAFFLPI_GCDIGLPEOGH_OFFSET UNITYSDK_OFFSET(0x19495A80)
#define PBMGAAFFLPI_LJCLMCCDAJB_OFFSET UNITYSDK_OFFSET(0x194959E0)
#define PBMGAAFFLPI_NBIMNBOHPGL_OFFSET UNITYSDK_OFFSET(0x194959F0)
#define PBMGAAFFLPI_OECPFJGBEPB_1_OFFSET UNITYSDK_OFFSET(0x19495C70)
#define PBMGAAFFLPI_OECPFJGBEPB_OFFSET UNITYSDK_OFFSET(0x19495BA0)
#define PBMGAAFFLPI_OHFHFOHMBJH_OFFSET UNITYSDK_OFFSET(0x19495E40)
#define PBMGAAFFLPI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x19495920)
#define PBMGAAFFLPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x19495A00)
#define PBMGAAFFLPI__CTOR_OFFSET UNITYSDK_OFFSET(0x19495A70)

inline static constexpr unsigned int PBMGAAFFLPI_TypeDefinitionIndex = 61743;

class PBMGAAFFLPI : public ::ENGKPGFGGLM
{
public:
	// static const ::System::UInt16 GBKNNOFLGDJ = 0x84; // 0x0
	::System::String* PKGDBDFHOMO; // 0x20
	::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* _EMMIFPKCJPE_k__BackingField; // 0x28
	::System::Boolean KHABCHNADGA; // 0x30
	::System::Boolean LIIIPBOEJAF; // 0x31
	::System::Byte _padding0[0x2];
	::MoleMole::Config::DamageElementType HBMBILMFEII; // 0x34
	::System::Int32 KANALECEMBD; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBMGAAFFLPI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* LJCLMCCDAJB()
	{
		return ((::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_LJCLMCCDAJB_OFFSET))(this);
	}

	::System::Void NBIMNBOHPGL(::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_NBIMNBOHPGL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GCDIGLPEOGH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_GCDIGLPEOGH_OFFSET))(this);
	}

	::System::Void FIGPAOKNJLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_FIGPAOKNJLN_OFFSET))(this);
	}

	::System::Void OECPFJGBEPB(::EFOEOKBFJPJ DJHDNNHANFA)
	{
		return ((::System::Void(*)(::PVOID, ::EFOEOKBFJPJ))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_OECPFJGBEPB_OFFSET))(this, DJHDNNHANFA);
	}

	::System::Void OECPFJGBEPB_1(::System::Collections::Generic::List_1<::EFOEOKBFJPJ>* KLPLLHDEEOP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EFOEOKBFJPJ>*))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_OECPFJGBEPB_1_OFFSET))(this, KLPLLHDEEOP);
	}

	::System::Void CNHBDOMKKDE(::System::UInt32 JHGKGEGGGFF, ::System::Int32 KANALECEMBD, ::System::String* PKGDBDFHOMO, ::System::Boolean KHABCHNADGA, ::MoleMole::Config::DamageElementType EIILOAOBACD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::String*, ::System::Boolean, ::MoleMole::Config::DamageElementType))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_CNHBDOMKKDE_OFFSET))(this, JHGKGEGGGFF, KANALECEMBD, PKGDBDFHOMO, KHABCHNADGA, EIILOAOBACD);
	}

	::System::Void OHFHFOHMBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMGAAFFLPI_OHFHFOHMBJH_OFFSET))(this);
	}
};
