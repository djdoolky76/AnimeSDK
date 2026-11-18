#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PPPPBIJJDJF_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1EBC2180)
#define PPPPBIJJDJF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1EBC2110)
#define PPPPBIJJDJF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1EBC1E50)
#define PPPPBIJJDJF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1EBC2800)
#define PPPPBIJJDJF__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC2600)

inline static constexpr unsigned int PPPPBIJJDJF_TypeDefinitionIndex = 83126;

class PPPPBIJJDJF : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BGDAKEIHKJN; // 0x18
	::KCMIFNGABDC_1<::System::String*>* BJKJPDICKLN; // 0x20
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* JMLONBKGKEP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* GPJOOJKCAFE; // 0x30
	::CPABOPKIGAL* MMFNFINOFPN; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* NCJLCLJLACN; // 0x40
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPPBIJJDJF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPPBIJJDJF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPPPBIJJDJF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPPPBIJJDJF_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPPBIJJDJF_GDEOPIBNOIN_OFFSET))(this);
	}
};
