#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class CKLMAHHAJCJ;
class PBHPOOFFAFI;
class PGLKPCIELAN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFCJJDILHDE_BACDCPLBMNG_OFFSET UNITYSDK_OFFSET(0x144D3740)
#define AFCJJDILHDE_EILEOAAEIJI_1_OFFSET UNITYSDK_OFFSET(0x144D3460)
#define AFCJJDILHDE_EILEOAAEIJI_OFFSET UNITYSDK_OFFSET(0x144D3410)
#define AFCJJDILHDE_FMCLIICBBAP_OFFSET UNITYSDK_OFFSET(0x144D4680)
#define AFCJJDILHDE_GIJIKKHCEDP_OFFSET UNITYSDK_OFFSET(0x144D4B80)
#define AFCJJDILHDE_HAOCGKFGMAO_OFFSET UNITYSDK_OFFSET(0x144D3B30)
#define AFCJJDILHDE_MDCGOOAJBAG_OFFSET UNITYSDK_OFFSET(0x144D4FD0)

inline static constexpr unsigned int AFCJJDILHDE_TypeDefinitionIndex = 67339;

class AFCJJDILHDE : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::PBHPOOFFAFI*>* EILEOAAEIJI(::CKLMAHHAJCJ* LJBPECKCCEA)
	{
		return ((::System::Collections::Generic::List_1<::PBHPOOFFAFI*>*(*)(::CKLMAHHAJCJ*))((::PBYTE)hIl2Cpp + AFCJJDILHDE_EILEOAAEIJI_OFFSET))(LJBPECKCCEA);
	}

	static ::System::ValueTuple_2<::System::Int32, ::System::Int32> BACDCPLBMNG(::ABKOPPMAKPH EHNJCPCLCOJ)
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::ABKOPPMAKPH))((::PBYTE)hIl2Cpp + AFCJJDILHDE_BACDCPLBMNG_OFFSET))(EHNJCPCLCOJ);
	}

	static ::System::Collections::Generic::List_1<::System::Object*>* HAOCGKFGMAO(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::Int32 LHHIIDPIJJB, ::PGLKPCIELAN* LHPFMGBDFPN)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::ABKOPPMAKPH, ::System::Int32, ::PGLKPCIELAN*))((::PBYTE)hIl2Cpp + AFCJJDILHDE_HAOCGKFGMAO_OFFSET))(EHNJCPCLCOJ, LHHIIDPIJJB, LHPFMGBDFPN);
	}

	static ::PGLKPCIELAN* GIJIKKHCEDP()
	{
		return ((::PGLKPCIELAN*(*)())((::PBYTE)hIl2Cpp + AFCJJDILHDE_GIJIKKHCEDP_OFFSET))();
	}

	static ::PBHPOOFFAFI* MDCGOOAJBAG(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::Int32 PAEEEHKILOC, ::System::Int32 FMJPOIFLFOJ)
	{
		return ((::PBHPOOFFAFI*(*)(::ABKOPPMAKPH, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AFCJJDILHDE_MDCGOOAJBAG_OFFSET))(EHNJCPCLCOJ, PAEEEHKILOC, FMJPOIFLFOJ);
	}

	static ::PGLKPCIELAN* FMCLIICBBAP(::ABKOPPMAKPH EHNJCPCLCOJ)
	{
		return ((::PGLKPCIELAN*(*)(::ABKOPPMAKPH))((::PBYTE)hIl2Cpp + AFCJJDILHDE_FMCLIICBBAP_OFFSET))(EHNJCPCLCOJ);
	}

	static ::System::Collections::Generic::List_1<::PBHPOOFFAFI*>* EILEOAAEIJI_1(::ABKOPPMAKPH EHNJCPCLCOJ, ::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Collections::Generic::List_1<::PBHPOOFFAFI*>*(*)(::ABKOPPMAKPH, ::System::Int32))((::PBYTE)hIl2Cpp + AFCJJDILHDE_EILEOAAEIJI_1_OFFSET))(EHNJCPCLCOJ, KMMGKJPAOMF);
	}
};
