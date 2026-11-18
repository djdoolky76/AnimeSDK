#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/PNGPGANCIGH_GNFOFPHFAKK.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNGPGANCIGH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x194B9A40)
#define PNGPGANCIGH_IBGADCLEJMJ_OFFSET UNITYSDK_OFFSET(0x194B9DC0)
#define PNGPGANCIGH_IONBNLEPNKJ_OFFSET UNITYSDK_OFFSET(0x194B9F60)
#define PNGPGANCIGH_MCKFJEIFABI_OFFSET UNITYSDK_OFFSET(0x194B9890)
#define PNGPGANCIGH_MKJBHPKBEOP_OFFSET UNITYSDK_OFFSET(0x194B9220)
#define PNGPGANCIGH_NBHCNEPCJKB_OFFSET UNITYSDK_OFFSET(0x194B9E40)
#define PNGPGANCIGH__CTOR_OFFSET UNITYSDK_OFFSET(0x194B9210)

inline static constexpr unsigned int PNGPGANCIGH_TypeDefinitionIndex = 62919;

class PNGPGANCIGH : public ::System::Object
{
public:
	// static const ::System::Int32 FHMCAGLHNMD = 0x1E; // 0x0
	// static const ::System::Single GBOFHOHFPGH; // 0x0
	// static const ::System::Single DFEFCMFNEMN; // 0x0
	// static const ::System::Single FKNAKOMBBLO; // 0x0
	// static const ::System::Int32 MMLGBPPINDC = 0x64; // 0x0
	::System::Object* IEJHLFHCCDO; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* LIJNOAPJPEA; // 0x18
	::System::Single AJOJEKKIJCL; // 0x20
	::System::Single FFJHGPPHIDJ; // 0x24
	::System::Single JAPGHEPDCBB; // 0x28
	::System::Single BGAJCKMCEJO; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGPGANCIGH__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* MKJBHPKBEOP(::System::Single KKHHIBFIBMC, ::System::Single GKPNFBIKEMO, ::System::Collections::Generic::List_1<::System::Object*>* JJOKEABCDIE, ::System::Int32 AHBGEPBGGHG)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32))((::PBYTE)hIl2Cpp + PNGPGANCIGH_MKJBHPKBEOP_OFFSET))(this, KKHHIBFIBMC, GKPNFBIKEMO, JJOKEABCDIE, AHBGEPBGGHG);
	}

	::System::Boolean FFCPIEDHBDP(::UnityEngine::Vector2 CMLFALFJONB, ::UnityEngine::Vector2 HOIPNIDMDPH, ::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* CELGKCKLPJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + PNGPGANCIGH_FFCPIEDHBDP_OFFSET))(this, CMLFALFJONB, HOIPNIDMDPH, FJDMDOONDFG, CGDOFPGLLLF, CELGKCKLPJC);
	}

	::UnityEngine::Vector2 IBGADCLEJMJ(::PNGPGANCIGH_GNFOFPHFAKK& param_0)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::PNGPGANCIGH_GNFOFPHFAKK&))((::PBYTE)hIl2Cpp + PNGPGANCIGH_IBGADCLEJMJ_OFFSET))(this, param_0);
	}

	::System::Boolean NBHCNEPCJKB(::UnityEngine::Vector2 MGHGNBNHOAF, ::PNGPGANCIGH_GNFOFPHFAKK& param_1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::PNGPGANCIGH_GNFOFPHFAKK&))((::PBYTE)hIl2Cpp + PNGPGANCIGH_NBHCNEPCJKB_OFFSET))(this, MGHGNBNHOAF, param_1);
	}

	::System::Void MCKFJEIFABI(::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF, ::System::Int32 AHBGEPBGGHG, ::System::Single MLHCGHJMNBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + PNGPGANCIGH_MCKFJEIFABI_OFFSET))(this, FJDMDOONDFG, CGDOFPGLLLF, AHBGEPBGGHG, MLHCGHJMNBK);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector2>* IONBNLEPNKJ(::System::Single FJDMDOONDFG, ::System::Single CGDOFPGLLLF, ::System::Int32 AHBGEPBGGHG)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector2>*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + PNGPGANCIGH_IONBNLEPNKJ_OFFSET))(this, FJDMDOONDFG, CGDOFPGLLLF, AHBGEPBGGHG);
	}
};
