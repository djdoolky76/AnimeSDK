#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCKKEJCOFAM.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/OAJDNCOEIKE.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace MoleMole { class AnimatorRandomIntConfig; }
namespace MoleMole { class AvatarShowSetting; }
namespace MoleMole { class SecondaryCharacterShowSetting; }
namespace MoleMole { class UIAvatarAnimator; }
namespace MoleMole { class UIAvatarAnimatorParamsSetting; }
namespace MoleMole { class UIAvatarGraphics; }
namespace MoleMole { class UIAvatarLightSetting; }
namespace MoleMole { class UIAvatarSetting; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }

#define PHBGAINMEEM_ABHFKNIFMOM_OFFSET UNITYSDK_OFFSET(0x13710830)
#define PHBGAINMEEM_ABHGCIDEAAI_OFFSET UNITYSDK_OFFSET(0x13711A80)
#define PHBGAINMEEM_BEPMGELHJMG_OFFSET UNITYSDK_OFFSET(0x1370F1B0)
#define PHBGAINMEEM_BFFNFLGPBJA_OFFSET UNITYSDK_OFFSET(0x13712410)
#define PHBGAINMEEM_FBDCEDGKANN_OFFSET UNITYSDK_OFFSET(0x13712600)
#define PHBGAINMEEM_FECDCIEFONF_1_OFFSET UNITYSDK_OFFSET(0x137117A0)
#define PHBGAINMEEM_FECDCIEFONF_OFFSET UNITYSDK_OFFSET(0x13711730)
#define PHBGAINMEEM_FGLNJJBAODK_OFFSET UNITYSDK_OFFSET(0x1370F490)
#define PHBGAINMEEM_FHPMCBMNPCJ_1_OFFSET UNITYSDK_OFFSET(0x137123B0)
#define PHBGAINMEEM_FHPMCBMNPCJ_OFFSET UNITYSDK_OFFSET(0x13711E30)
#define PHBGAINMEEM_FIPAKDIOGFN_OFFSET UNITYSDK_OFFSET(0x1370EA20)
#define PHBGAINMEEM_FKAOMABGJJM_OFFSET UNITYSDK_OFFSET(0x13711DD0)
#define PHBGAINMEEM_GJCHCLENMCL_OFFSET UNITYSDK_OFFSET(0x137112F0)
#define PHBGAINMEEM_HNPHKKFLCJP_OFFSET UNITYSDK_OFFSET(0x13711A30)
#define PHBGAINMEEM_IDIEKAMENAC_OFFSET UNITYSDK_OFFSET(0x13712650)
#define PHBGAINMEEM_JCPPACBLGFC_OFFSET UNITYSDK_OFFSET(0x1370F770)
#define PHBGAINMEEM_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x13710A80)
#define PHBGAINMEEM_JNKPGGKAIDO_OFFSET UNITYSDK_OFFSET(0x13710B60)
#define PHBGAINMEEM_KKONOHHPOIK_OFFSET UNITYSDK_OFFSET(0x1370F2B0)
#define PHBGAINMEEM_KLHKMEMGKCI_OFFSET UNITYSDK_OFFSET(0x13711050)
#define PHBGAINMEEM_KMOGBFDJNDM_OFFSET UNITYSDK_OFFSET(0x1370FAE0)
#define PHBGAINMEEM_LGCNHALPHPA_OFFSET UNITYSDK_OFFSET(0x13712420)
#define PHBGAINMEEM_LLLHAILGNED_OFFSET UNITYSDK_OFFSET(0x1370F230)
#define PHBGAINMEEM_MFCMJBEGGBK_OFFSET UNITYSDK_OFFSET(0x13712470)
#define PHBGAINMEEM_MLAJPEFMLBN_OFFSET UNITYSDK_OFFSET(0x137101A0)
#define PHBGAINMEEM_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x13711400)
#define PHBGAINMEEM_NLEAJLLPJFH_OFFSET UNITYSDK_OFFSET(0x13711A20)
#define PHBGAINMEEM_OAMKHMEHMII_OFFSET UNITYSDK_OFFSET(0x13711380)
#define PHBGAINMEEM_OBHGLHGEDCP_OFFSET UNITYSDK_OFFSET(0x137125B0)
#define PHBGAINMEEM_PBKBJCFCHMG_OFFSET UNITYSDK_OFFSET(0x137112E0)
#define PHBGAINMEEM_PFJGJKPPDGK_1_OFFSET UNITYSDK_OFFSET(0x137126A0)
#define PHBGAINMEEM_PFJGJKPPDGK_OFFSET UNITYSDK_OFFSET(0x13711600)
#define PHBGAINMEEM_PJGGFOEAFBP_OFFSET UNITYSDK_OFFSET(0x137116B0)
#define PHBGAINMEEM_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x137124C0)
#define PHBGAINMEEM_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x13710940)
#define PHBGAINMEEM_PLGMBGCNLLP_OFFSET UNITYSDK_OFFSET(0x137114A0)
#define PHBGAINMEEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13710B20)
#define PHBGAINMEEM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1370E7E0)
#define PHBGAINMEEM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1370E820)
#define PHBGAINMEEM__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1370E920)
#define PHBGAINMEEM__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1370E9B0)
#define PHBGAINMEEM__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1370EA00)
#define PHBGAINMEEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1370E7C0)

inline static constexpr unsigned int PHBGAINMEEM_TypeDefinitionIndex = 58757;

class PHBGAINMEEM : public ::OAJDNCOEIKE
{
public:
	static ::System::Int32* StaticGet_ACFKFBHOGBP()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PHBGAINMEEM_TypeDefinitionIndex)->GetStaticField(0x11EF0);
	}
	::MoleMole::UIAvatarLightSetting* AOCAGBENBBJ; // 0xF8
	::MoleMole::UIAvatarAnimator* KAINGCMACIJ; // 0x100
	::MoleMole::SecondaryCharacterShowSetting* CKDHEILGCHI; // 0x108
	::MoleMole::UIAvatarAnimator* MHEINGFEADB; // 0x110
	::System::String* BNHEADIIEJN; // 0x118
	::MoleMole::UIAvatarLightSetting* _DFFBGPIABEN_k__BackingField; // 0x120
	::MoleMole::UIAvatarAnimatorParamsSetting* ILEJLEPFOIN; // 0x128
	::UnityEngine::Vector2 NOCNOCEKBHN; // 0x130
	::System::Int32 APKLGPKBFJF; // 0x138
	::System::Int32 OBEPMBDAPIE; // 0x13C
	::UnityEngine::Vector3 HGGCBPFABPC; // 0x140
	::System::Boolean ADIAFFBNAIJ; // 0x14C
	::System::Boolean OKDIEAAHJHC; // 0x14D
	::System::Boolean JJMBNJJHLAD; // 0x14E
	::System::Byte _padding0[0x1];
	::System::Int32 GPAMOABDIML; // 0x150

	::System::Void _ctor(::System::UInt32 IMGBOOLGKEG, ::System::String* BAFOEALJEFJ, ::System::String* AOPKIEIEPJC, ::BCKKEJCOFAM BKOJFLEEIFH, ::System::Boolean PCIBEJOKLEL, ::UnityEngine::Experimental::Rendering::GraphicsFormat BFKMOMGOMDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::BCKKEJCOFAM, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_OFFSET))(this, IMGBOOLGKEG, BAFOEALJEFJ, AOPKIEIEPJC, BKOJFLEEIFH, PCIBEJOKLEL, BFKMOMGOMDE);
	}

	::System::Void _ctor_1(::System::UInt32 IMGBOOLGKEG, ::System::String* BAFOEALJEFJ, ::System::String* AOPKIEIEPJC, ::BCKKEJCOFAM BKOJFLEEIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::String*, ::BCKKEJCOFAM))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_1_OFFSET))(this, IMGBOOLGKEG, BAFOEALJEFJ, AOPKIEIEPJC, BKOJFLEEIFH);
	}

	::System::Void _ctor_2(::System::UInt32 IMGBOOLGKEG, ::System::String* BAFOEALJEFJ, ::UnityEngine::GameObject* OJJMNAIJGCH, ::UnityEngine::GameObject* KMIKKPDEFMN, ::System::String* AOPKIEIEPJC, ::System::Boolean DNPAHKFEJJD, ::BCKKEJCOFAM BKOJFLEEIFH, ::UnityEngine::Experimental::Rendering::GraphicsFormat BFKMOMGOMDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*, ::System::Boolean, ::BCKKEJCOFAM, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_2_OFFSET))(this, IMGBOOLGKEG, BAFOEALJEFJ, OJJMNAIJGCH, KMIKKPDEFMN, AOPKIEIEPJC, DNPAHKFEJJD, BKOJFLEEIFH, BFKMOMGOMDE);
	}

	::System::Void _ctor_3(::System::UInt32 IMGBOOLGKEG, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::String* BAFOEALJEFJ, ::UnityEngine::GameObject* OJJMNAIJGCH, ::UnityEngine::GameObject* KMIKKPDEFMN, ::System::Boolean ICJKLJNCFKE, ::System::String* AOPKIEIEPJC, ::System::Boolean DNPAHKFEJJD, ::BCKKEJCOFAM BKOJFLEEIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::String*, ::System::Boolean, ::BCKKEJCOFAM))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_3_OFFSET))(this, IMGBOOLGKEG, JBGLCAFPGHK, KKAMDFNMMJH, BAFOEALJEFJ, OJJMNAIJGCH, KMIKKPDEFMN, ICJKLJNCFKE, AOPKIEIEPJC, DNPAHKFEJJD, BKOJFLEEIFH);
	}

	::System::Void _ctor_4(::System::UInt32 IMGBOOLGKEG, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::String* BAFOEALJEFJ, ::System::String* AOPKIEIEPJC, ::BCKKEJCOFAM BKOJFLEEIFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::BCKKEJCOFAM))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_4_OFFSET))(this, IMGBOOLGKEG, JBGLCAFPGHK, KKAMDFNMMJH, BAFOEALJEFJ, AOPKIEIEPJC, BKOJFLEEIFH);
	}

	::System::Void _ctor_5(::System::UInt32 IMGBOOLGKEG, ::System::Single JBGLCAFPGHK, ::System::Single KKAMDFNMMJH, ::System::String* BAFOEALJEFJ, ::System::String* AOPKIEIEPJC, ::BCKKEJCOFAM BKOJFLEEIFH, ::System::Boolean PCIBEJOKLEL, ::UnityEngine::Experimental::Rendering::GraphicsFormat BFKMOMGOMDE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::BCKKEJCOFAM, ::System::Boolean, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + PHBGAINMEEM__CTOR_5_OFFSET))(this, IMGBOOLGKEG, JBGLCAFPGHK, KKAMDFNMMJH, BAFOEALJEFJ, AOPKIEIEPJC, BKOJFLEEIFH, PCIBEJOKLEL, BFKMOMGOMDE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHBGAINMEEM__CCTOR_OFFSET))();
	}

	::System::Boolean FIPAKDIOGFN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FIPAKDIOGFN_OFFSET))(this);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void JNKPGGKAIDO(::System::Single EAHBOAFHLIF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBGAINMEEM_JNKPGGKAIDO_OFFSET))(this, EAHBOAFHLIF);
	}

	::System::Void KLHKMEMGKCI(::Il2CppArray<::UnityEngine::Renderer*>* AEPONOJONAA, ::UnityEngine::Vector2 JJJHMKNCOIF)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PHBGAINMEEM_KLHKMEMGKCI_OFFSET))(this, AEPONOJONAA, JJJHMKNCOIF);
	}

	::MoleMole::UIAvatarLightSetting* PBKBJCFCHMG()
	{
		return ((::MoleMole::UIAvatarLightSetting*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PBKBJCFCHMG_OFFSET))(this);
	}

	::System::Boolean GJCHCLENMCL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_GJCHCLENMCL_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* OAMKHMEHMII()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_OAMKHMEHMII_OFFSET))(this);
	}

	::System::Void MNEJHDIKCGJ(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PHBGAINMEEM_MNEJHDIKCGJ_OFFSET))(this, MIALFKCCCPI);
	}

	::UnityEngine::RenderTexture* PLGMBGCNLLP(::Foundation::AssetPath DANPBAKPILL, ::UnityEngine::GameObject* NJOAJLDJCCJ, ::MoleMole::AvatarShowSetting* JEKJICOLOEG, ::System::String* ODLBMPBBIPI, ::System::Int32 HKHHHJHCGKL, ::System::Action* GJCDOGJKNHH, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PLGMBGCNLLP_OFFSET))(this, DANPBAKPILL, NJOAJLDJCCJ, JEKJICOLOEG, ODLBMPBBIPI, HKHHHJHCGKL, GJCDOGJKNHH, MKCOMJHINNJ);
	}

	::UnityEngine::RenderTexture* PFJGJKPPDGK(::System::String* DANPBAKPILL, ::MoleMole::AvatarShowSetting* JEKJICOLOEG, ::System::String* ODLBMPBBIPI, ::System::Int32 HKHHHJHCGKL, ::System::Action* GJCDOGJKNHH, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::String*, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PFJGJKPPDGK_OFFSET))(this, DANPBAKPILL, JEKJICOLOEG, ODLBMPBBIPI, HKHHHJHCGKL, GJCDOGJKNHH, MKCOMJHINNJ);
	}

	::System::Void PJGGFOEAFBP(::UnityEngine::Vector3 BOGPAHGJOJK, ::System::Boolean AFLAOPEOBEP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PJGGFOEAFBP_OFFSET))(this, BOGPAHGJOJK, AFLAOPEOBEP);
	}

	::System::Void FECDCIEFONF(::MoleMole::UIAvatarAnimator* ICAAMDMMDDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FECDCIEFONF_OFFSET))(this, ICAAMDMMDDJ);
	}

	::System::Void ABHFKNIFMOM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_ABHFKNIFMOM_OFFSET))(this);
	}

	::System::Void NLEAJLLPJFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_NLEAJLLPJFH_OFFSET))(this);
	}

	::MoleMole::UIAvatarAnimator* HNPHKKFLCJP()
	{
		return ((::MoleMole::UIAvatarAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_HNPHKKFLCJP_OFFSET))(this);
	}

	::System::Int32 LLLHAILGNED()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_LLLHAILGNED_OFFSET))(this);
	}

	::System::Int32 BEPMGELHJMG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_BEPMGELHJMG_OFFSET))(this);
	}

	::System::Void FKAOMABGJJM(::UnityEngine::Vector2 BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FKAOMABGJJM_OFFSET))(this, BOGPAHGJOJK);
	}

	::System::Void FHPMCBMNPCJ(::MoleMole::UIAvatarAnimator* NKHPKDOCHCJ, ::MoleMole::UIAvatarAnimatorParamsSetting* AOIBJAIMEAC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FHPMCBMNPCJ_OFFSET))(this, NKHPKDOCHCJ, AOIBJAIMEAC);
	}

	::System::Void KMOGBFDJNDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_KMOGBFDJNDM_OFFSET))(this);
	}

	::System::Void MLAJPEFMLBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_MLAJPEFMLBN_OFFSET))(this);
	}

	::System::Void BFFNFLGPBJA(::MoleMole::UIAvatarLightSetting* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_BFFNFLGPBJA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LGCNHALPHPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_LGCNHALPHPA_OFFSET))(this);
	}

	::System::Void FECDCIEFONF_1(::MoleMole::UIAvatarAnimator* ICAAMDMMDDJ, ::MoleMole::AnimatorRandomIntConfig* IBGLJOLOLLL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimator*, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FECDCIEFONF_1_OFFSET))(this, ICAAMDMMDDJ, IBGLJOLOLLL);
	}

	::System::Void KKONOHHPOIK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_KKONOHHPOIK_OFFSET))(this);
	}

	::System::Int32 ABHGCIDEAAI(::MoleMole::AnimatorRandomIntConfig* CFKJMEFKNNJ)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::AnimatorRandomIntConfig*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_ABHGCIDEAAI_OFFSET))(this, CFKJMEFKNNJ);
	}

	::System::Void MFCMJBEGGBK(::System::Boolean DLKOGGJPCLG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHBGAINMEEM_MFCMJBEGGBK_OFFSET))(this, DLKOGGJPCLG);
	}

	::UnityEngine::RenderTexture* PKOGNPKCHHE(::Foundation::AssetPath DANPBAKPILL, ::MoleMole::AvatarShowSetting* JEKJICOLOEG, ::System::String* ODLBMPBBIPI, ::System::Int32 HKHHHJHCGKL, ::System::Action* GJCDOGJKNHH, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PKOGNPKCHHE_OFFSET))(this, DANPBAKPILL, JEKJICOLOEG, ODLBMPBBIPI, HKHHHJHCGKL, GJCDOGJKNHH, MKCOMJHINNJ);
	}

	::System::Void FGLNJJBAODK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FGLNJJBAODK_OFFSET))(this);
	}

	::System::Void OBHGLHGEDCP(::MoleMole::UIAvatarLightSetting* AOIBJAIMEAC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_OBHGLHGEDCP_OFFSET))(this, AOIBJAIMEAC);
	}

	::System::Void FHPMCBMNPCJ_1(::MoleMole::UIAvatarAnimatorParamsSetting* AOIBJAIMEAC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FHPMCBMNPCJ_1_OFFSET))(this, AOIBJAIMEAC);
	}

	::System::Void JCPPACBLGFC(::MoleMole::UIAvatarSetting* HFALBGDOFFO, ::MoleMole::UIAvatarGraphics* EAOIBPOIGCD, ::UnityEngine::GameObject* IEEMAIKMHEL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarSetting*, ::MoleMole::UIAvatarGraphics*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_JCPPACBLGFC_OFFSET))(this, HFALBGDOFFO, EAOIBPOIGCD, IEEMAIKMHEL);
	}

	::System::Void FBDCEDGKANN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHBGAINMEEM_FBDCEDGKANN_OFFSET))(this);
	}

	::System::Void IDIEKAMENAC(::MoleMole::UIAvatarAnimatorParamsSetting* INLADDKDLIF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIAvatarAnimatorParamsSetting*))((::PBYTE)hIl2Cpp + PHBGAINMEEM_IDIEKAMENAC_OFFSET))(this, INLADDKDLIF);
	}

	::UnityEngine::RenderTexture* PFJGJKPPDGK_1(::Foundation::AssetPath DANPBAKPILL, ::MoleMole::AvatarShowSetting* JEKJICOLOEG, ::System::String* ODLBMPBBIPI, ::System::Int32 HKHHHJHCGKL, ::System::Action* GJCDOGJKNHH, ::MoleMole::Config::EntityType MKCOMJHINNJ, ::System::Int32 HCIJCOKLHEB, ::System::Boolean PJNGOCCHGAC)
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::AvatarShowSetting*, ::System::String*, ::System::Int32, ::System::Action*, ::MoleMole::Config::EntityType, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + PHBGAINMEEM_PFJGJKPPDGK_1_OFFSET))(this, DANPBAKPILL, JEKJICOLOEG, ODLBMPBBIPI, HKHHHJHCGKL, GJCDOGJKNHH, MKCOMJHINNJ, HCIJCOKLHEB, PJNGOCCHGAC);
	}
};
