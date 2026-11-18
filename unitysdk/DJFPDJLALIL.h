#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMBMBLDFBID.h"
#include "unitysdk/System/Object.h"

class FFDNKIDGFMD;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DJFPDJLALIL_CLGELEAKAIO_OFFSET UNITYSDK_OFFSET(0x18344390)
#define DJFPDJLALIL_DCMFFJJGHNI_OFFSET UNITYSDK_OFFSET(0x183446B0)
#define DJFPDJLALIL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18344F50)
#define DJFPDJLALIL_ELFJIAOOOJA_OFFSET UNITYSDK_OFFSET(0x18344B90)
#define DJFPDJLALIL_HKJFFEOHEEL_OFFSET UNITYSDK_OFFSET(0x18344D50)
#define DJFPDJLALIL_IEAPGDFJCPH_OFFSET UNITYSDK_OFFSET(0x18345160)
#define DJFPDJLALIL_INFEMMDEDFK_OFFSET UNITYSDK_OFFSET(0x183451B0)
#define DJFPDJLALIL_JKJLMGMKCNE_1_OFFSET UNITYSDK_OFFSET(0x183449C0)
#define DJFPDJLALIL_JKJLMGMKCNE_OFFSET UNITYSDK_OFFSET(0x18344960)
#define DJFPDJLALIL_MCKJKBMDFDC_OFFSET UNITYSDK_OFFSET(0x18345260)
#define DJFPDJLALIL_OCCGGBGGDPN_OFFSET UNITYSDK_OFFSET(0x183447B0)
#define DJFPDJLALIL_OEEEFKMOABA_OFFSET UNITYSDK_OFFSET(0x18345200)
#define DJFPDJLALIL__CTOR_OFFSET UNITYSDK_OFFSET(0x18345060)

inline static constexpr unsigned int DJFPDJLALIL_TypeDefinitionIndex = 44724;

class DJFPDJLALIL : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::BMBMBLDFBID, ::FFDNKIDGFMD*>* CGLOLPGCNDM; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::FFDNKIDGFMD*>*>* OOCMMIDDHBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPDJLALIL__CTOR_OFFSET))(this);
	}

	::System::Boolean CLGELEAKAIO(::FFDNKIDGFMD* IIHGNBNLLNG)
	{
		return ((::System::Boolean(*)(::PVOID, ::FFDNKIDGFMD*))((::PBYTE)hIl2Cpp + DJFPDJLALIL_CLGELEAKAIO_OFFSET))(this, IIHGNBNLLNG);
	}

	::System::Boolean DCMFFJJGHNI(::BMBMBLDFBID& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_DCMFFJJGHNI_OFFSET))(this, PHHDHIBOCKA);
	}

	::FFDNKIDGFMD* OCCGGBGGDPN(::BMBMBLDFBID& PHHDHIBOCKA)
	{
		return ((::FFDNKIDGFMD*(*)(::PVOID, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_OCCGGBGGDPN_OFFSET))(this, PHHDHIBOCKA);
	}

	::BMBMBLDFBID JKJLMGMKCNE(::System::Int32 DKOFFFNEFJC)
	{
		return ((::BMBMBLDFBID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJFPDJLALIL_JKJLMGMKCNE_OFFSET))(this, DKOFFFNEFJC);
	}

	::BMBMBLDFBID JKJLMGMKCNE_1(::System::Int32 DKOFFFNEFJC, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*& FOFKALMENCJ)
	{
		return ((::BMBMBLDFBID(*)(::PVOID, ::System::Int32, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_JKJLMGMKCNE_1_OFFSET))(this, DKOFFFNEFJC, FOFKALMENCJ);
	}

	::BMBMBLDFBID ELFJIAOOOJA(::System::Int32 DKOFFFNEFJC)
	{
		return ((::BMBMBLDFBID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DJFPDJLALIL_ELFJIAOOOJA_OFFSET))(this, DKOFFFNEFJC);
	}

	::System::Boolean HKJFFEOHEEL(::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*& FOFKALMENCJ, ::System::Collections::Generic::List_1<::FFDNKIDGFMD*>*& PILELGPBCLL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*&, ::System::Collections::Generic::List_1<::FFDNKIDGFMD*>*&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_HKJFFEOHEEL_OFFSET))(this, FOFKALMENCJ, PILELGPBCLL);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPDJLALIL_DISPOSE_OFFSET))(this);
	}

	::System::Boolean IEAPGDFJCPH(::BMBMBLDFBID& PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_IEAPGDFJCPH_OFFSET))(this, PHHDHIBOCKA);
	}

	::FFDNKIDGFMD* INFEMMDEDFK(::BMBMBLDFBID& PHHDHIBOCKA)
	{
		return ((::FFDNKIDGFMD*(*)(::PVOID, ::BMBMBLDFBID&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_INFEMMDEDFK_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Boolean OEEEFKMOABA(::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*& FOFKALMENCJ, ::System::Collections::Generic::List_1<::FFDNKIDGFMD*>*& PILELGPBCLL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*&, ::System::Collections::Generic::List_1<::FFDNKIDGFMD*>*&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_OEEEFKMOABA_OFFSET))(this, FOFKALMENCJ, PILELGPBCLL);
	}

	::BMBMBLDFBID MCKJKBMDFDC(::System::Int32 DKOFFFNEFJC, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*& FOFKALMENCJ)
	{
		return ((::BMBMBLDFBID(*)(::PVOID, ::System::Int32, ::System::Func_2<::FFDNKIDGFMD*, ::System::Boolean>*&))((::PBYTE)hIl2Cpp + DJFPDJLALIL_MCKJKBMDFDC_OFFSET))(this, DKOFFFNEFJC, FOFKALMENCJ);
	}
};
