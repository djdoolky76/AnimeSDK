#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAMLPLAEOFA.h"

class DMFCAPLHHON;
class EAIOHODECAO;
class JGNPOMIAMOI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHLOBIHKIJI_CFJCGBCPGPK_OFFSET UNITYSDK_OFFSET(0x1FB876D0)
#define IHLOBIHKIJI_HDGDNIDFKCG_OFFSET UNITYSDK_OFFSET(0x1FB874D0)
#define IHLOBIHKIJI_HGIEPCLGAFP_OFFSET UNITYSDK_OFFSET(0x1FB87420)
#define IHLOBIHKIJI_HMMOPDIPIOJ_OFFSET UNITYSDK_OFFSET(0x1FB87510)
#define IHLOBIHKIJI_JAPFFPNAJHB_OFFSET UNITYSDK_OFFSET(0x1FB87290)
#define IHLOBIHKIJI_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x1FB87250)
#define IHLOBIHKIJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FB87200)
#define IHLOBIHKIJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB879E0)

inline static constexpr unsigned int IHLOBIHKIJI_TypeDefinitionIndex = 95115;

class IHLOBIHKIJI : public ::KAMLPLAEOFA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLOBIHKIJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::EAIOHODECAO* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::EAIOHODECAO*))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_OJENCMOGDKL_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_KMMIPNMJILI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* JAPFFPNAJHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_JAPFFPNAJHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HGIEPCLGAFP()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_HGIEPCLGAFP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::JGNPOMIAMOI*>* HDGDNIDFKCG()
	{
		return ((::System::Collections::Generic::List_1<::JGNPOMIAMOI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_HDGDNIDFKCG_OFFSET))(this);
	}

	::EAIOHODECAO* HMMOPDIPIOJ(::System::UInt64 FALJABIBPNH, ::DMFCAPLHHON* AAOCANGHBDG, ::System::String* FMMNDNJDCBF, ::System::String* MNEIGDIOHDE)
	{
		return ((::EAIOHODECAO*(*)(::PVOID, ::System::UInt64, ::DMFCAPLHHON*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_HMMOPDIPIOJ_OFFSET))(this, FALJABIBPNH, AAOCANGHBDG, FMMNDNJDCBF, MNEIGDIOHDE);
	}

	::System::Void CFJCGBCPGPK(::DMFCAPLHHON* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::DMFCAPLHHON*))((::PBYTE)hIl2Cpp + IHLOBIHKIJI_CFJCGBCPGPK_OFFSET))(this, AAOCANGHBDG);
	}
};
