#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFHMNHAMCFD_BOOJJAMBIHB.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NAEJJPOKHFI_CBNAALHCJCL_OFFSET UNITYSDK_OFFSET(0x1ADE93D0)
#define NAEJJPOKHFI_CFNHBDFCEFH_OFFSET UNITYSDK_OFFSET(0x1ADE9330)
#define NAEJJPOKHFI_DGKDAGHKLOM_OFFSET UNITYSDK_OFFSET(0x1ADE9410)
#define NAEJJPOKHFI_FKGBJDDIGFJ_OFFSET UNITYSDK_OFFSET(0x1ADE92D0)
#define NAEJJPOKHFI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1ADE9320)
#define NAEJJPOKHFI_GJGCJGIBDHJ_OFFSET UNITYSDK_OFFSET(0x1ADE9390)
#define NAEJJPOKHFI_GLLCDHBJPAJ_OFFSET UNITYSDK_OFFSET(0x1ADE8D90)
#define NAEJJPOKHFI_IHMAHDAEHHF_OFFSET UNITYSDK_OFFSET(0x1ADE9110)
#define NAEJJPOKHFI_MIDMHINHEGI_OFFSET UNITYSDK_OFFSET(0x1ADE93C0)
#define NAEJJPOKHFI_MNPAEEHOHKM_OFFSET UNITYSDK_OFFSET(0x1ADE9040)
#define NAEJJPOKHFI_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1ADE9080)
#define NAEJJPOKHFI_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1ADE8C20)
#define NAEJJPOKHFI_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1ADE9310)
#define NAEJJPOKHFI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xEB75450)
#define NAEJJPOKHFI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADE92C0)
#define NAEJJPOKHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADE9240)

inline static constexpr unsigned int NAEJJPOKHFI_TypeDefinitionIndex = 69695;

class NAEJJPOKHFI : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Boolean* StaticGet_AIIFFIEJEDL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NAEJJPOKHFI_TypeDefinitionIndex)->GetStaticField(0xD010);
	}
	::NFHMNHAMCFD_BOOJJAMBIHB KOEPCPOMHOI; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* MLHIOHBILID; // 0x38
	::System::Collections::Generic::HashSet_1<::System::Int32>* NINMHIPJIHM; // 0x40
	::System::String* BNECFMIEKCK; // 0x48
	::System::Int32 LCAJCLOIKGF; // 0x50
	::System::Int32 KLMDCKCIELJ; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEJJPOKHFI__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_ONBEHAVIOURPAUSE_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	static ::System::Boolean FKGBJDDIGFJ()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + NAEJJPOKHFI_FKGBJDDIGFJ_OFFSET))();
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void CFNHBDFCEFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_CFNHBDFCEFH_OFFSET))(this);
	}

	::System::Void GLLCDHBJPAJ(::System::Boolean BAHGFPKGOIO, ::System::String* JBNFBGMMKJI, ::System::Single NLODLGANNKI, ::System::Single LFLPKLFDIDK, ::System::Single KDDMLKEBNCG, ::System::Single PEKGEDCAOOM, ::System::Boolean OKANKDKOJGA, ::System::Boolean OLBGLDIJBMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_GLLCDHBJPAJ_OFFSET))(this, BAHGFPKGOIO, JBNFBGMMKJI, NLODLGANNKI, LFLPKLFDIDK, KDDMLKEBNCG, PEKGEDCAOOM, OKANKDKOJGA, OLBGLDIJBMB);
	}

	::System::Void MNPAEEHOHKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_MNPAEEHOHKM_OFFSET))(this);
	}

	::System::Void IHMAHDAEHHF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_IHMAHDAEHHF_OFFSET))(this);
	}

	::System::Boolean GJGCJGIBDHJ(::System::Int32 OLAIAPANMKD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_GJGCJGIBDHJ_OFFSET))(this, OLAIAPANMKD);
	}

	::System::Void MIDMHINHEGI(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_MIDMHINHEGI_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void CBNAALHCJCL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_CBNAALHCJCL_OFFSET))(this);
	}

	::System::Void DGKDAGHKLOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEJJPOKHFI_DGKDAGHKLOM_OFFSET))(this);
	}
};
