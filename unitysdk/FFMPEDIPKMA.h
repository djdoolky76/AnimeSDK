#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FFMPEDIPKMA_BIKNPDECHOK_OFFSET UNITYSDK_OFFSET(0x11D74720)
#define FFMPEDIPKMA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D73F30)
#define FFMPEDIPKMA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D73C70)
#define FFMPEDIPKMA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D747D0)
#define FFMPEDIPKMA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D74500)

inline static constexpr unsigned int FFMPEDIPKMA_TypeDefinitionIndex = 90285;

class FFMPEDIPKMA : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* MKLBJGKKBOG; // 0x18
	::KCMIFNGABDC_1<::System::Single>* JHLIKANBHBK; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* ANDFMBKKKPE; // 0x28
	::AAMKEDEDHPD_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* FHALMJAGHJP; // 0x30
	::MKBBPOFGLOF* FDBBLEBBLIJ; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPEDIPKMA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* BIKNPDECHOK(::LGCNEDCMPKM BKBGPKNGNMF)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::LGCNEDCMPKM))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_BIKNPDECHOK_OFFSET))(BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPEDIPKMA_GDEOPIBNOIN_OFFSET))(this);
	}
};
