#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FEBHBBFCDOE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1428C620)
#define FEBHBBFCDOE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1428C2B0)
#define FEBHBBFCDOE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1428CDA0)
#define FEBHBBFCDOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1428CB00)

inline static constexpr unsigned int FEBHBBFCDOE_TypeDefinitionIndex = 87207;

class FEBHBBFCDOE : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* CDOIJJAFFBG; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::AAMKEDEDHPD_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* FHALMJAGHJP; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* JLJDKOCEHBC; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* NDGOHMFOANE; // 0x38
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* OMPNEHNOPJC; // 0x40
	::KCMIFNGABDC_1<::System::Int32>* INKADAHCBNN; // 0x48
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x50
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ENODLAIEEGD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBHBBFCDOE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBHBBFCDOE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEBHBBFCDOE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEBHBBFCDOE_GDEOPIBNOIN_OFFSET))(this);
	}
};
