#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class KCMIFNGABDC_1;

#define KDCCJGNIIDB_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x15155190)
#define KDCCJGNIIDB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15154990)
#define KDCCJGNIIDB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15154730)
#define KDCCJGNIIDB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15155100)
#define KDCCJGNIIDB__CTOR_OFFSET UNITYSDK_OFFSET(0x15154F40)

inline static constexpr unsigned int KDCCJGNIIDB_TypeDefinitionIndex = 89922;

class KDCCJGNIIDB : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* EGJNOGDMCHE; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* JEDCHMMKKEE; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* KNFDDBPELMJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJGNIIDB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + KDCCJGNIIDB_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}
};
