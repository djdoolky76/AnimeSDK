#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define FMOCCEFFMFK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15E742F0)
#define FMOCCEFFMFK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15E74090)
#define FMOCCEFFMFK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15E74A20)
#define FMOCCEFFMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x15E74820)

inline static constexpr unsigned int FMOCCEFFMFK_TypeDefinitionIndex = 91594;

class FMOCCEFFMFK : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::String*>*>* NEKOIHNOPAA; // 0x18
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* KPDHDNGLFPJ; // 0x20
	::CPABOPKIGAL* PLEJMLIFFHG; // 0x28
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x30
	::KCMIFNGABDC_1<::System::String*>* LHLOFABPABK; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOCCEFFMFK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOCCEFFMFK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMOCCEFFMFK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOCCEFFMFK_GDEOPIBNOIN_OFFSET))(this);
	}
};
