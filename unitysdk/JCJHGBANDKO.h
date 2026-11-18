#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GNCLMODKIHG;
namespace System { class Random; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CircleCollider2D; }

#define JCJHGBANDKO_ABKAGPIJJLN_OFFSET UNITYSDK_OFFSET(0xF8951C0)
#define JCJHGBANDKO_ANPBCLAFCJB_OFFSET UNITYSDK_OFFSET(0xF8984C0)
#define JCJHGBANDKO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xF899690)
#define JCJHGBANDKO_CGJPFCCHAGD_OFFSET UNITYSDK_OFFSET(0xF897620)
#define JCJHGBANDKO_CIPCJBKNCFN_OFFSET UNITYSDK_OFFSET(0xF897C40)
#define JCJHGBANDKO_CNEHGCEIFAK_OFFSET UNITYSDK_OFFSET(0xF894DE0)
#define JCJHGBANDKO_DJFHEGNIMNL_OFFSET UNITYSDK_OFFSET(0xF898BE0)
#define JCJHGBANDKO_EIJAKLOBIJH_OFFSET UNITYSDK_OFFSET(0xF8955C0)
#define JCJHGBANDKO_FACGJNJOHNE_OFFSET UNITYSDK_OFFSET(0xF8954A0)
#define JCJHGBANDKO_GHOIPBAJJIB_OFFSET UNITYSDK_OFFSET(0xF899020)
#define JCJHGBANDKO_HMBMINHIDPE_OFFSET UNITYSDK_OFFSET(0xF899120)
#define JCJHGBANDKO_ILDHEBFKHGJ_OFFSET UNITYSDK_OFFSET(0xF896A70)
#define JCJHGBANDKO_IPHMEDGBDDF_OFFSET UNITYSDK_OFFSET(0xF898CA0)
#define JCJHGBANDKO_JEJIJOOJJNN_OFFSET UNITYSDK_OFFSET(0xF8993E0)
#define JCJHGBANDKO_JNOBHCFBFMI_OFFSET UNITYSDK_OFFSET(0xF8981E0)
#define JCJHGBANDKO_LJHIECBDPHO_OFFSET UNITYSDK_OFFSET(0xF897260)
#define JCJHGBANDKO_LNHHMOLNBFB_OFFSET UNITYSDK_OFFSET(0xF898330)
#define JCJHGBANDKO_MEDNNGPLBEN_OFFSET UNITYSDK_OFFSET(0xF894EC0)
#define JCJHGBANDKO_NCOGMJDABAI_OFFSET UNITYSDK_OFFSET(0xF899540)
#define JCJHGBANDKO_NDLAHLAJFIM_OFFSET UNITYSDK_OFFSET(0xF897BA0)
#define JCJHGBANDKO_NGJGHEOPHHB_OFFSET UNITYSDK_OFFSET(0xF895010)
#define JCJHGBANDKO_OAOIGKDHIGF_OFFSET UNITYSDK_OFFSET(0xF895D00)
#define JCJHGBANDKO_OFODENIFJAL_OFFSET UNITYSDK_OFFSET(0xF895E50)
#define JCJHGBANDKO_PFHDENADLNI_OFFSET UNITYSDK_OFFSET(0xF897CB0)
#define JCJHGBANDKO_PNGFIMJNFCJ_OFFSET UNITYSDK_OFFSET(0xF8975D0)
#define JCJHGBANDKO__CTOR_OFFSET UNITYSDK_OFFSET(0xF894CD0)

inline static constexpr unsigned int JCJHGBANDKO_TypeDefinitionIndex = 85311;

class JCJHGBANDKO : public ::System::Object
{
public:
	// static const ::System::Int32 BLNDAOFDMCA = 0x32; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Vector2Int, ::System::Collections::Generic::HashSet_1<::GNCLMODKIHG*>*>* KPHFDKFHIBI; // 0x10
	::System::Random* MPNBFJLHEIH; // 0x18
	::System::Collections::Generic::Dictionary_2<::GNCLMODKIHG*, ::System::Object*>* PLLPPPDLINP; // 0x20
	::System::Single MGGDKNBLKFM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO__CTOR_OFFSET))(this);
	}

	::System::Boolean CNEHGCEIFAK(::UnityEngine::Bounds EJCBEJMGFAJ, ::UnityEngine::Bounds EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JCJHGBANDKO_CNEHGCEIFAK_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
	}

	::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>* MEDNNGPLBEN(::MoleMole::Vector2Int EKPEBNCLJPM)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JCJHGBANDKO_MEDNNGPLBEN_OFFSET))(this, EKPEBNCLJPM);
	}

	::UnityEngine::Vector2 NGJGHEOPHHB(::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single BHPHKIKEJJM, ::System::Single LCPLGJDNHHB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_NGJGHEOPHHB_OFFSET))(this, MPLDDNMCECG, BHPHKIKEJJM, LCPLGJDNHHB);
	}

	::System::Nullable_1<::UnityEngine::Vector2> ABKAGPIJJLN(::GNCLMODKIHG* FDMLLKAJHCP, ::UnityEngine::Vector2 LDAAJPFPMEJ, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID, ::GNCLMODKIHG*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_ABKAGPIJJLN_OFFSET))(this, FDMLLKAJHCP, LDAAJPFPMEJ, FJDMDOONDFG, CGDOFPGLLLF);
	}

	::System::Void OAOIGKDHIGF(::System::Collections::Generic::Dictionary_2<::GNCLMODKIHG*, ::UnityEngine::Vector2>* KGBPIEBFOMJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::GNCLMODKIHG*, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_OAOIGKDHIGF_OFFSET))(this, KGBPIEBFOMJ);
	}

	::System::Single ILDHEBFKHGJ(::UnityEngine::Vector2 OHOGDOMNHNK, ::UnityEngine::Bounds JCNOAHJDPCL)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JCJHGBANDKO_ILDHEBFKHGJ_OFFSET))(this, OHOGDOMNHNK, JCNOAHJDPCL);
	}

	::System::Void PNGFIMJNFCJ(::System::Random* NOGBPAMGMEG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Random*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_PNGFIMJNFCJ_OFFSET))(this, NOGBPAMGMEG);
	}

	::System::Void CGJPFCCHAGD(::GNCLMODKIHG* FDMLLKAJHCP, ::UnityEngine::Vector2 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::GNCLMODKIHG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_CGJPFCCHAGD_OFFSET))(this, FDMLLKAJHCP, OHOGDOMNHNK);
	}

	::System::Collections::Generic::List_1<::MoleMole::Vector2Int>* LJHIECBDPHO(::UnityEngine::Vector2 OHOGDOMNHNK, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Vector2Int>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_LJHIECBDPHO_OFFSET))(this, OHOGDOMNHNK, NCCDJLDKFGA);
	}

	::System::Single CIPCJBKNCFN(::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + JCJHGBANDKO_CIPCJBKNCFN_OFFSET))(this, GOFCNJELMHH);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* PFHDENADLNI(::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF, ::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + JCJHGBANDKO_PFHDENADLNI_OFFSET))(this, MPLDDNMCECG, FJDMDOONDFG, CGDOFPGLLLF, JHFKDGBCOBA);
	}

	::MoleMole::Vector2Int NDLAHLAJFIM(::UnityEngine::Vector2 BAECLPHLLHO)
	{
		return ((::MoleMole::Vector2Int(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_NDLAHLAJFIM_OFFSET))(this, BAECLPHLLHO);
	}

	::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>* JNOBHCFBFMI(::MoleMole::Vector2Int EKPEBNCLJPM)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JCJHGBANDKO_JNOBHCFBFMI_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void LNHHMOLNBFB(::System::Collections::Generic::List_1<::GNCLMODKIHG*>* NNNDFPBPIJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::GNCLMODKIHG*>*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_LNHHMOLNBFB_OFFSET))(this, NNNDFPBPIJL);
	}

	::System::Void OFODENIFJAL(::GNCLMODKIHG* FDMLLKAJHCP, ::UnityEngine::Vector2 EFMNDLNEHNB)
	{
		return ((::System::Void(*)(::PVOID, ::GNCLMODKIHG*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_OFODENIFJAL_OFFSET))(this, FDMLLKAJHCP, EFMNDLNEHNB);
	}

	::System::Boolean FACGJNJOHNE(::UnityEngine::Vector2 OHOGDOMNHNK, ::UnityEngine::Bounds HMOFJMCHBBO, ::UnityEngine::Vector2 LDAAJPFPMEJ, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_FACGJNJOHNE_OFFSET))(this, OHOGDOMNHNK, HMOFJMCHBBO, LDAAJPFPMEJ, FJDMDOONDFG, CGDOFPGLLLF);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ANPBCLAFCJB(::System::Collections::Generic::List_1<::GNCLMODKIHG*>* FCHOGBKPMIJ, ::System::Collections::Generic::List_1<::GNCLMODKIHG*>* NNNDFPBPIJL, ::UnityEngine::CircleCollider2D* HBAGHEJMCKE, ::UnityEngine::CircleCollider2D* KFBBAEMPNFP)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Collections::Generic::List_1<::GNCLMODKIHG*>*, ::System::Collections::Generic::List_1<::GNCLMODKIHG*>*, ::UnityEngine::CircleCollider2D*, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_ANPBCLAFCJB_OFFSET))(this, FCHOGBKPMIJ, NNNDFPBPIJL, HBAGHEJMCKE, KFBBAEMPNFP);
	}

	::System::Void HMBMINHIDPE(::GNCLMODKIHG* FDMLLKAJHCP)
	{
		return ((::System::Void(*)(::PVOID, ::GNCLMODKIHG*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_HMBMINHIDPE_OFFSET))(this, FDMLLKAJHCP);
	}

	::System::Nullable_1<::UnityEngine::Vector2> IPHMEDGBDDF(::GNCLMODKIHG* FDMLLKAJHCP, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* ENOLFNGENJK, ::UnityEngine::Vector2 LDAAJPFPMEJ, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF)
	{
		return ((::System::Nullable_1<::UnityEngine::Vector2>(*)(::PVOID, ::GNCLMODKIHG*, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_IPHMEDGBDDF_OFFSET))(this, FDMLLKAJHCP, ENOLFNGENJK, LDAAJPFPMEJ, FJDMDOONDFG, CGDOFPGLLLF);
	}

	::System::Boolean EIJAKLOBIJH(::UnityEngine::Vector2 OHOGDOMNHNK, ::UnityEngine::Bounds GOFCNJELMHH, ::GNCLMODKIHG* HEJPIGCBPCE)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Bounds, ::GNCLMODKIHG*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_EIJAKLOBIJH_OFFSET))(this, OHOGDOMNHNK, GOFCNJELMHH, HEJPIGCBPCE);
	}

	::System::Collections::Generic::List_1<::GNCLMODKIHG*>* JEJIJOOJJNN(::UnityEngine::Vector2 OHOGDOMNHNK, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Collections::Generic::List_1<::GNCLMODKIHG*>*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_JEJIJOOJJNN_OFFSET))(this, OHOGDOMNHNK, NCCDJLDKFGA);
	}

	::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>* NCOGMJDABAI(::MoleMole::Vector2Int EKPEBNCLJPM)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::GNCLMODKIHG*>*(*)(::PVOID, ::MoleMole::Vector2Int))((::PBYTE)hIl2Cpp + JCJHGBANDKO_NCOGMJDABAI_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void GHOIPBAJJIB(::System::Collections::Generic::List_1<::UnityEngine::Vector2>* OJKLNDIBAKG, ::UnityEngine::Vector2 MPLDDNMCECG, ::System::Single NCCDJLDKFGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_GHOIPBAJJIB_OFFSET))(this, OJKLNDIBAKG, MPLDDNMCECG, NCCDJLDKFGA);
	}

	::System::Single DJFHEGNIMNL(::UnityEngine::CircleCollider2D* PDFJFDGECCH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::CircleCollider2D*))((::PBYTE)hIl2Cpp + JCJHGBANDKO_DJFHEGNIMNL_OFFSET))(this, PDFJFDGECCH);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* BBOMJDBNHIC(::System::Collections::Generic::List_1<::GNCLMODKIHG*>* FCHOGBKPMIJ, ::UnityEngine::CircleCollider2D* HBAGHEJMCKE, ::UnityEngine::CircleCollider2D* KFBBAEMPNFP, ::System::Single LDNOCLPBPMI)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Collections::Generic::List_1<::GNCLMODKIHG*>*, ::UnityEngine::CircleCollider2D*, ::UnityEngine::CircleCollider2D*, ::System::Single))((::PBYTE)hIl2Cpp + JCJHGBANDKO_BBOMJDBNHIC_OFFSET))(this, FCHOGBKPMIJ, HBAGHEJMCKE, KFBBAEMPNFP, LDNOCLPBPMI);
	}
};
