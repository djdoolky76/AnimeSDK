#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class JNNGKJFNLOM;
class PKLAICEMAHO;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
template <typename T> class DFDEIDBBGHG_1;

#define LENNCLHBHIE_EDNLHBPAMPL_OFFSET UNITYSDK_OFFSET(0x15247B40)
#define LENNCLHBHIE_GBKDEBNNGHM_OFFSET UNITYSDK_OFFSET(0x152478D0)
#define LENNCLHBHIE_HLOBCGCPOLJ_OFFSET UNITYSDK_OFFSET(0x152476B0)
#define LENNCLHBHIE_KBMFKANENAJ_OFFSET UNITYSDK_OFFSET(0x152477D0)
#define LENNCLHBHIE_LAHBOCCHEJN_OFFSET UNITYSDK_OFFSET(0x15247E40)
#define LENNCLHBHIE_PPLCNFPAIBN_OFFSET UNITYSDK_OFFSET(0x152483C0)
#define LENNCLHBHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15247540)

inline static constexpr unsigned int LENNCLHBHIE_TypeDefinitionIndex = 92886;

class LENNCLHBHIE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* NNJBDPLMDKP; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* LONFLGHMBDN; // 0x18
	::PKLAICEMAHO* MIGAOFOKENO; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JNNGKJFNLOM*>* PLLEIMIAGNH; // 0x28
	::System::Boolean IAOJECCOMPN; // 0x30

	::System::Void _ctor(::PKLAICEMAHO* MIGAOFOKENO)
	{
		return ((::System::Void(*)(::PVOID, ::PKLAICEMAHO*))((::PBYTE)hIl2Cpp + LENNCLHBHIE__CTOR_OFFSET))(this, MIGAOFOKENO);
	}

	::System::Void HLOBCGCPOLJ(::System::Int32 BBNFNKGCOIN, ::System::Action* HDCCPNFPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + LENNCLHBHIE_HLOBCGCPOLJ_OFFSET))(this, BBNFNKGCOIN, HDCCPNFPILH);
	}

	::System::Void KBMFKANENAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNCLHBHIE_KBMFKANENAJ_OFFSET))(this);
	}

	::System::Void GBKDEBNNGHM(::DFDEIDBBGHG_1<::System::Int32>* HENCOJEFEEH)
	{
		return ((::System::Void(*)(::PVOID, ::DFDEIDBBGHG_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LENNCLHBHIE_GBKDEBNNGHM_OFFSET))(this, HENCOJEFEEH);
	}

	::System::Void EDNLHBPAMPL(::System::Int32 BBNFNKGCOIN, ::System::Action* HDCCPNFPILH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + LENNCLHBHIE_EDNLHBPAMPL_OFFSET))(this, BBNFNKGCOIN, HDCCPNFPILH);
	}

	::System::Void LAHBOCCHEJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNCLHBHIE_LAHBOCCHEJN_OFFSET))(this);
	}

	::System::Void PPLCNFPAIBN(::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LENNCLHBHIE_PPLCNFPAIBN_OFFSET))(this, LADPIPOMBJM);
	}
};
