#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAMLPLAEOFA.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CILLBNCAJLG_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1E4C72C0)
#define CILLBNCAJLG_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1E4C7790)
#define CILLBNCAJLG_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1E4C7AF0)
#define CILLBNCAJLG_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1E4C7480)
#define CILLBNCAJLG_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1E4C7EA0)
#define CILLBNCAJLG_JFLFPFOPHMP_OFFSET UNITYSDK_OFFSET(0x1E4C7F60)
#define CILLBNCAJLG_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1E4C7280)
#define CILLBNCAJLG_KMNKGOMLJKG_OFFSET UNITYSDK_OFFSET(0x1E4C8480)
#define CILLBNCAJLG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1E4C7230)
#define CILLBNCAJLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C7F50)

inline static constexpr unsigned int CILLBNCAJLG_TypeDefinitionIndex = 94058;

class CILLBNCAJLG : public ::KAMLPLAEOFA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + CILLBNCAJLG_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + CILLBNCAJLG_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CILLBNCAJLG_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_HDGDNIDFKCG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* JFLFPFOPHMP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_JFLFPFOPHMP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* KMNKGOMLJKG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILLBNCAJLG_KMNKGOMLJKG_OFFSET))(this);
	}
};
