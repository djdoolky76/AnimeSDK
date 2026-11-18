#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJDNEMGCDEM.h"
#include "unitysdk/ONFLBFFBHID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DLFMLGAIHKO_EOOEMMLIHIP.h"
#include "unitysdk/ICANJLLILFH.h"

class BMHDGHCLELE;
class GOIKJCHFIIO;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }

#define DLFMLGAIHKO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x2001EDC0)
#define DLFMLGAIHKO_HHKPAMDCLDP_OFFSET UNITYSDK_OFFSET(0x2001F480)
#define DLFMLGAIHKO_JACMNCDIJMK_OFFSET UNITYSDK_OFFSET(0x2001E9C0)
#define DLFMLGAIHKO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x2001F0C0)
#define DLFMLGAIHKO_LOHFGAFIPHD_OFFSET UNITYSDK_OFFSET(0x2001EB90)
#define DLFMLGAIHKO_MKENNOGJHPK_1_OFFSET UNITYSDK_OFFSET(0x2001F310)
#define DLFMLGAIHKO_MKENNOGJHPK_OFFSET UNITYSDK_OFFSET(0x2001EA90)
#define DLFMLGAIHKO_PHLCGLOLJKD_OFFSET UNITYSDK_OFFSET(0x2001EE00)
#define DLFMLGAIHKO_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x2001E7E0)
#define DLFMLGAIHKO__CTOR_OFFSET UNITYSDK_OFFSET(0x2001E6B0)

inline static constexpr unsigned int DLFMLGAIHKO_TypeDefinitionIndex = 96619;

class DLFMLGAIHKO : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::ONFLBFFBHID, ::System::Int32>* ANOHIDIPEMN; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* IMLCHFGDLFL; // 0x18
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* CLOJDAEALNF; // 0x20
	::GOIKJCHFIIO* HEJALNLNJGM; // 0x28
	::UnityEngine::MaterialPropertyBlock* FAKODOKICHI; // 0x30
	::System::Boolean IODCONPOAFO; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 LGLLHGCAKDP; // 0x3C

	::System::Void _ctor(::System::Int32 LGLLHGCAKDP, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* FJDOCPKEACA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + DLFMLGAIHKO__CTOR_OFFSET))(this, LGLLHGCAKDP, FJDOCPKEACA);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::BMHDGHCLELE* JACMNCDIJMK(::UnityEngine::SpriteRenderer* MPCCAGODNJE)
	{
		return ((::BMHDGHCLELE*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_JACMNCDIJMK_OFFSET))(this, MPCCAGODNJE);
	}

	static ::DLFMLGAIHKO* MKENNOGJHPK(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* CLOJDAEALNF, ::ICANJLLILFH NBPECCJGOGM, ::ICANJLLILFH DDKFIBMLCGG)
	{
		return ((::DLFMLGAIHKO*(*)(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*, ::ICANJLLILFH, ::ICANJLLILFH))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_MKENNOGJHPK_OFFSET))(CLOJDAEALNF, NBPECCJGOGM, DDKFIBMLCGG);
	}

	::System::Void PHLCGLOLJKD(::DLFMLGAIHKO_EOOEMMLIHIP HMMMOCJAEOA, ::System::String* HIAIKHDFCLN)
	{
		return ((::System::Void(*)(::PVOID, ::DLFMLGAIHKO_EOOEMMLIHIP, ::System::String*))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_PHLCGLOLJKD_OFFSET))(this, HMMMOCJAEOA, HIAIKHDFCLN);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_JJEJHGOJOII_OFFSET))(this);
	}

	static ::DLFMLGAIHKO* MKENNOGJHPK_1(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* CLOJDAEALNF, ::ICANJLLILFH NBPECCJGOGM, ::ICANJLLILFH DDKFIBMLCGG, ::ICANJLLILFH DBIAPPJFCLG, ::ICANJLLILFH DEEFBFPJLCM)
	{
		return ((::DLFMLGAIHKO*(*)(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*, ::ICANJLLILFH, ::ICANJLLILFH, ::ICANJLLILFH, ::ICANJLLILFH))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_MKENNOGJHPK_1_OFFSET))(CLOJDAEALNF, NBPECCJGOGM, DDKFIBMLCGG, DBIAPPJFCLG, DEEFBFPJLCM);
	}

	::System::Void LOHFGAFIPHD(::ICANJLLILFH& HHIJHDFHPOI)
	{
		return ((::System::Void(*)(::PVOID, ::ICANJLLILFH&))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_LOHFGAFIPHD_OFFSET))(this, HHIJHDFHPOI);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void HHKPAMDCLDP(::JJDNEMGCDEM LIJOMOCFAHP, ::ONFLBFFBHID OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::JJDNEMGCDEM, ::ONFLBFFBHID))((::PBYTE)hIl2Cpp + DLFMLGAIHKO_HHKPAMDCLDP_OFFSET))(this, LIJOMOCFAHP, OBNIAHNMHPF);
	}
};
