#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CDNAABEAPDI;
class PLLADJPGMCG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJLKECDEHCO_AIJCEMOLPBN_OFFSET UNITYSDK_OFFSET(0xB7A4700)
#define BJLKECDEHCO_BGAKDFJDIKF_OFFSET UNITYSDK_OFFSET(0xB7A4780)
#define BJLKECDEHCO_BIAOFOHNJBF_OFFSET UNITYSDK_OFFSET(0xB7A6670)
#define BJLKECDEHCO_CCDCFEBOGGL_OFFSET UNITYSDK_OFFSET(0xB7A6320)
#define BJLKECDEHCO_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A6A80)
#define BJLKECDEHCO_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB7A53C0)
#define BJLKECDEHCO_FIDIBPFEGIO_OFFSET UNITYSDK_OFFSET(0xB7A6890)
#define BJLKECDEHCO_GHOPBNEDGHN_OFFSET UNITYSDK_OFFSET(0xB7A5890)
#define BJLKECDEHCO_ICADNILJNEH_1_OFFSET UNITYSDK_OFFSET(0xB7A6630)
#define BJLKECDEHCO_ICADNILJNEH_OFFSET UNITYSDK_OFFSET(0xB7A65F0)
#define BJLKECDEHCO_KHPOPFAILCI_OFFSET UNITYSDK_OFFSET(0xB7A4680)
#define BJLKECDEHCO_MHFNLLAGIKN_OFFSET UNITYSDK_OFFSET(0xB7A54D0)

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

		::System::ValueTuple MHFNLLAGIKN(::System::UInt32 a1)
		{
			return ((::System::ValueTuple(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJLKECDEHCO_MHFNLLAGIKN_OFFSET))(this, a1);
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
