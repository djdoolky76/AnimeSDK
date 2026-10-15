#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CDNAABEAPDI;
class PLLADJPGMCG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJLKECDEHCO_AIJCEMOLPBN_OFFSET UNITYSDK_OFFSET(0xB79F940)
#define BJLKECDEHCO_BGAKDFJDIKF_OFFSET UNITYSDK_OFFSET(0xB79F9C0)
#define BJLKECDEHCO_BIAOFOHNJBF_OFFSET UNITYSDK_OFFSET(0xB7A18B0)
#define BJLKECDEHCO_CCDCFEBOGGL_OFFSET UNITYSDK_OFFSET(0xB7A1560)
#define BJLKECDEHCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1CB0)
#define BJLKECDEHCO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB7A0600)
#define BJLKECDEHCO_FIDIBPFEGIO_OFFSET UNITYSDK_OFFSET(0xB7A1AC0)
#define BJLKECDEHCO_GHOPBNEDGHN_OFFSET UNITYSDK_OFFSET(0xB7A0AD0)
#define BJLKECDEHCO_ICADNILJNEH_1_OFFSET UNITYSDK_OFFSET(0xB7A1870)
#define BJLKECDEHCO_ICADNILJNEH_OFFSET UNITYSDK_OFFSET(0xB7A1830)
#define BJLKECDEHCO_KHPOPFAILCI_OFFSET UNITYSDK_OFFSET(0xB79F8C0)
#define BJLKECDEHCO_MHFNLLAGIKN_OFFSET UNITYSDK_OFFSET(0xB7A0710)

inline static constexpr unsigned int BJLKECDEHCO_TypeDefinitionIndex = 52013;

	class BJLKECDEHCO : public ::System::Object
	{
	public:
		::CDNAABEAPDI* GGAJBBGPHMJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLKECDEHCO_CTOR_OFFSET))(this);
		}

		::System::Boolean KHPOPFAILCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLKECDEHCO_KHPOPFAILCI_OFFSET))(this);
		}

		::System::Boolean AIJCEMOLPBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLKECDEHCO_AIJCEMOLPBN_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PLLADJPGMCG*>* BGAKDFJDIKF(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::PLLADJPGMCG*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJLKECDEHCO_BGAKDFJDIKF_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::CDNAABEAPDI*, ::System::Collections::Generic::List_1<::CDNAABEAPDI*>*> MHFNLLAGIKN(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::CDNAABEAPDI*, ::System::Collections::Generic::List_1<::CDNAABEAPDI*>*>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJLKECDEHCO_MHFNLLAGIKN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::CDNAABEAPDI*>* CCDCFEBOGGL(::CDNAABEAPDI* a1)
		{
			return ((::System::Collections::Generic::List_1<::CDNAABEAPDI*>*(*)(::PVOID, ::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + BJLKECDEHCO_CCDCFEBOGGL_OFFSET))(this, a1);
		}

		static ::System::Void ICADNILJNEH(::CDNAABEAPDI* a1)
		{
			return ((::System::Void(*)(::CDNAABEAPDI*))((::PBYTE)hIl2Cpp + BJLKECDEHCO_ICADNILJNEH_OFFSET))(a1);
		}

		static ::System::Void ICADNILJNEH_1(::System::Collections::Generic::List_1<::CDNAABEAPDI*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::CDNAABEAPDI*>*))((::PBYTE)hIl2Cpp + BJLKECDEHCO_ICADNILJNEH_1_OFFSET))(a1);
		}

		static ::System::Void BIAOFOHNJBF()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJLKECDEHCO_BIAOFOHNJBF_OFFSET))();
		}

		::CDNAABEAPDI* GHOPBNEDGHN(::System::Collections::Generic::List_1<::PLLADJPGMCG*>* a1)
		{
			return ((::CDNAABEAPDI*(*)(::PVOID, ::System::Collections::Generic::List_1<::PLLADJPGMCG*>*))((::PBYTE)hIl2Cpp + BJLKECDEHCO_GHOPBNEDGHN_OFFSET))(this, a1);
		}

		::PLLADJPGMCG* FIDIBPFEGIO(::PLLADJPGMCG* a1, ::System::Collections::Generic::List_1<::PLLADJPGMCG*>* a2)
		{
			return ((::PLLADJPGMCG*(*)(::PVOID, ::PLLADJPGMCG*, ::System::Collections::Generic::List_1<::PLLADJPGMCG*>*))((::PBYTE)hIl2Cpp + BJLKECDEHCO_FIDIBPFEGIO_OFFSET))(this, a1, a2);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJLKECDEHCO_DIOEAJEHHND_OFFSET))(this);
		}

	};
