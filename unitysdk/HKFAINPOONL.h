#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class AFPMNKCAMEC;
class MKBBPOFGLOF;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HKFAINPOONL_DLNIOLHNOPF_OFFSET UNITYSDK_OFFSET(0x15DBE210)
#define HKFAINPOONL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15DBDB20)
#define HKFAINPOONL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15DBD740)
#define HKFAINPOONL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15DBE060)
#define HKFAINPOONL_JCBKJIOIGPN_OFFSET UNITYSDK_OFFSET(0x15DBE070)
#define HKFAINPOONL_LBNCGCEBMBF_OFFSET UNITYSDK_OFFSET(0x15DBDB90)
#define HKFAINPOONL__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBDD30)

inline static constexpr unsigned int HKFAINPOONL_TypeDefinitionIndex = 68253;

class HKFAINPOONL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JMFPLKMIDCB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* MKLBJGKKBOG; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* KGNGFIIJEML; // 0x38
	::KCMIFNGABDC_1<::System::String*>* JDEEDKLNLAG; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* KEGBDFFFOOO; // 0x48
	::MKBBPOFGLOF* ECCGMJHOKFG; // 0x50
	::MKBBPOFGLOF* PLEJMLIFFHG; // 0x58
	::AAMKEDEDHPD_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*>* BGPPDMJEOIC; // 0x60
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* OJCJDONKOLB; // 0x68
	::KCMIFNGABDC_1<::System::Int32>* NAIDADGNEDI; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFAINPOONL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFAINPOONL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKFAINPOONL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKFAINPOONL_GDEOPIBNOIN_OFFSET))(this);
	}

	::AFPMNKCAMEC* JCBKJIOIGPN(::LGCNEDCMPKM& BKBGPKNGNMF, ::System::Int32 BDHFADMIJGL, ::System::Collections::Generic::List_1<::System::Int32>* GECJGHOPJBN)
	{
		return ((::AFPMNKCAMEC*(*)(::PVOID, ::LGCNEDCMPKM&, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HKFAINPOONL_JCBKJIOIGPN_OFFSET))(this, BKBGPKNGNMF, BDHFADMIJGL, GECJGHOPJBN);
	}

	::System::Void DLNIOLHNOPF(::AFPMNKCAMEC* GKCEBLCFONG, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::AFPMNKCAMEC*, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKFAINPOONL_DLNIOLHNOPF_OFFSET))(this, GKCEBLCFONG, BKBGPKNGNMF);
	}

	::System::Void LBNCGCEBMBF(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HKFAINPOONL_LBNCGCEBMBF_OFFSET))(this, BKBGPKNGNMF);
	}
};
