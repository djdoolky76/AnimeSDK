#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFBFJENCJDI.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define BADBPKLCILC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0xF784840)
#define BADBPKLCILC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF784720)
#define BADBPKLCILC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0xF784520)
#define BADBPKLCILC_HCPDFOGOCKA_OFFSET UNITYSDK_OFFSET(0xF784680)
#define BADBPKLCILC_LCPIEGKFFLP_OFFSET UNITYSDK_OFFSET(0xF784670)
#define BADBPKLCILC_LMDJHKODAAC_OFFSET UNITYSDK_OFFSET(0xF7843C0)
#define BADBPKLCILC_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0xF7847B0)
#define BADBPKLCILC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF784150)
#define BADBPKLCILC_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0xF784210)
#define BADBPKLCILC__CTOR_OFFSET UNITYSDK_OFFSET(0xF784660)

inline static constexpr unsigned int BADBPKLCILC_TypeDefinitionIndex = 75967;

class BADBPKLCILC : public ::NHPFMFABMEC
{
public:
	::CFBFJENCJDI BBNCLNPGAEF; // 0x38
	::System::Collections::Generic::Queue_1<::CFBFJENCJDI>* OGKJGLADPMO; // 0x50
	::System::Int32 EKDELEBLOAB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BADBPKLCILC_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* LMDJHKODAAC()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_LMDJHKODAAC_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* LCPIEGKFFLP()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_LCPIEGKFFLP_OFFSET))(this);
	}

	::System::Void HCPDFOGOCKA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_HCPDFOGOCKA_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BADBPKLCILC_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BADBPKLCILC_ANEOCOIFDDJ_OFFSET))(this);
	}
};
