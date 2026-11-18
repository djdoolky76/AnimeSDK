#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class IPNENGFKFFI;
namespace MoleMole { class AnimationTriggerVolumeAudioConfig; }
namespace MoleMole { class AnimationTriggerVolume_AnimationSegment; }
namespace MoleMole { class AnimationTriggerVolume_EFKEDEDCOMG; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_AFHJNIODOAG_OFFSET UNITYSDK_OFFSET(0x11E56F10)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_APFMFPDDNPE_OFFSET UNITYSDK_OFFSET(0x11E56F90)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_BGEADBELEJJ_OFFSET UNITYSDK_OFFSET(0x11E554B0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_BHCFCGMCJDB_OFFSET UNITYSDK_OFFSET(0x11E53D00)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_CLIHOALIGNE_OFFSET UNITYSDK_OFFSET(0x11E542A0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_DILOBLADHLO_OFFSET UNITYSDK_OFFSET(0x11E566B0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_DMMJBMKAHDC_OFFSET UNITYSDK_OFFSET(0x11E571E0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_EFCHPODGCCI_OFFSET UNITYSDK_OFFSET(0x11E56090)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_EKICLFBKOID_OFFSET UNITYSDK_OFFSET(0x11E56D20)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ELNADCLOEGL_OFFSET UNITYSDK_OFFSET(0x11E54F80)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_EOOPCCLFFFC_OFFSET UNITYSDK_OFFSET(0x11E55E90)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_GELPBJHPAIH_OFFSET UNITYSDK_OFFSET(0x11E54EB0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_GET_PREVIEWALL_OFFSET UNITYSDK_OFFSET(0x11E53230)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_HAFCPCGEPIF_OFFSET UNITYSDK_OFFSET(0x11E53780)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_HKGJJJMOOIJ_OFFSET UNITYSDK_OFFSET(0x11E551D0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_JBDPFOOJPDC_OFFSET UNITYSDK_OFFSET(0x11E55420)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_JEFPNOKJJCP_OFFSET UNITYSDK_OFFSET(0x11E55580)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_JFKPLNHKKGM_OFFSET UNITYSDK_OFFSET(0x11E53410)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_KDMGAGFGDCA_OFFSET UNITYSDK_OFFSET(0x11E55D70)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_KJMBLBFEFEF_OFFSET UNITYSDK_OFFSET(0x11E55C70)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_LBCKEDHMDND_OFFSET UNITYSDK_OFFSET(0x11E548D0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_LLJGMKKBMKM_OFFSET UNITYSDK_OFFSET(0x11E55FF0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_MGKPPKMINEF_OFFSET UNITYSDK_OFFSET(0x11E56ED0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_MKDJOMDIBKI_OFFSET UNITYSDK_OFFSET(0x11E54580)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_MPGBAHEJFNB_OFFSET UNITYSDK_OFFSET(0x11E56D70)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_OAHLNGBFMBE_OFFSET UNITYSDK_OFFSET(0x11E54080)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_OHGIIPNMJAJ_OFFSET UNITYSDK_OFFSET(0x11E56370)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_OIJGAOIHCMN_OFFSET UNITYSDK_OFFSET(0x11E53CA0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_OKJBKKAOFIA_OFFSET UNITYSDK_OFFSET(0x11E561C0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11E53950)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11E537C0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11E53250)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11E53A00)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_REBUILD_OFFSET UNITYSDK_OFFSET(0x11E536B0)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME_SET_PREVIEWALL_OFFSET UNITYSDK_OFFSET(0x11E53240)
#define MOLEMOLE_ANIMATIONTRIGGERVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x11E55020)

namespace MoleMole
{
	inline static constexpr unsigned int AnimationTriggerVolume_TypeDefinitionIndex = 63096;

	class AnimationTriggerVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single detectDistance; // 0x18
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* volumes; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* segments; // 0x28
		::System::Boolean useCameraInRuntime; // 0x30
		::System::Boolean bakeLastFrame; // 0x31
		::System::Byte _padding1[0x2];
		::System::Int32 bakeSegmentIndex; // 0x34
		::MoleMole::AnimationTriggerVolumeAudioConfig* audioConfig; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _initialPoses; // 0x40
		::UnityEngine::Camera* CEGKFLHNIMN; // 0x48
		::UnityEngine::Vector3 BHDEHEBEEHP; // 0x50
		::System::Boolean JKDIIBGKCIP; // 0x5C
		::System::Boolean IIDMGEBENBG; // 0x5D
		::System::Boolean preview; // 0x5E
		::System::Boolean NHPKCNGOFLA; // 0x5F
		::Il2CppArray<::UnityEngine::Matrix4x4>* NAALPIKDOLA; // 0x60
		::Il2CppArray<::System::Boolean>* AKNOMEOPOFH; // 0x68
		::System::Boolean JKNPGKIFPLM; // 0x70
		::System::Boolean EIDJHJPDEAI; // 0x71
		::System::Boolean KDNBMPFHHOM; // 0x72
		::System::Byte _padding2[0x1];
		::UnityEngine::Vector3 PNBGLHBOKEO; // 0x74
		::UnityEngine::Quaternion DBIDGDFIKLK; // 0x80
		::UnityEngine::Vector3 FFGGLPNCJJC; // 0x90
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::System::Int32>* NGJBDGBANDF; // 0xA0
		::Il2CppArray<::System::Boolean>* CADBMDKJIDN; // 0xA8
		::Il2CppArray<::System::Boolean>* IAKEBBOINNN; // 0xB0
		::Il2CppArray<::System::Boolean>* ILECBBKDGOK; // 0xB8
		::System::Boolean LPMNDACCLNA; // 0xC0
		::System::Boolean GFLGLDFBLNH; // 0xC1
		::System::Byte _padding4[0x6];
		::System::Collections::Generic::List_1<::System::Object*>* NBPNCJHIHHC; // 0xC8
		::System::Boolean FBEOLJDLFFL; // 0xD0
		::System::Boolean HOKKDOJHKMO; // 0xD1
		::System::Byte _padding5[0x6];
		::System::Double LFGFJBGNFLB; // 0xD8
		::IPNENGFKFFI* ICCOMMMHKCI; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_previewAll()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_GET_PREVIEWALL_OFFSET))();
		}

		static ::System::Void set_previewAll(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_SET_PREVIEWALL_OFFSET))(EGEGIMGMJHN);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ONUPDATE_OFFSET))(this);
		}

		::System::Void Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_REBUILD_OFFSET))(this);
		}

		::System::Void JFKPLNHKKGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_JFKPLNHKKGM_OFFSET))(this);
		}

		::System::Double HAFCPCGEPIF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_HAFCPCGEPIF_OFFSET))(this);
		}

		::System::Single OIJGAOIHCMN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_OIJGAOIHCMN_OFFSET))(this);
		}

		::System::Void GELPBJHPAIH(::System::Int32 KBNHAJHPKPO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_GELPBJHPAIH_OFFSET))(this, KBNHAJHPKPO);
		}

		::System::Void HKGJJJMOOIJ(::System::Int32 GKOJLEOMPBD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_HKGJJJMOOIJ_OFFSET))(this, GKOJLEOMPBD);
		}

		::System::Void CLIHOALIGNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_CLIHOALIGNE_OFFSET))(this);
		}

		::System::Void JEFPNOKJJCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_JEFPNOKJJCP_OFFSET))(this);
		}

		::System::Int32 KJMBLBFEFEF(::System::Int32 HAONHKDHCOP)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_KJMBLBFEFEF_OFFSET))(this, HAONHKDHCOP);
		}

		::System::Void KDMGAGFGDCA(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_KDMGAGFGDCA_OFFSET))(this, KPNIHKEKDOC);
		}

		::System::Boolean BGEADBELEJJ(::System::Int32 HAONHKDHCOP)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_BGEADBELEJJ_OFFSET))(this, HAONHKDHCOP);
		}

		::System::Boolean JBDPFOOJPDC(::System::Int32 FACAAKONPJK)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_JBDPFOOJPDC_OFFSET))(this, FACAAKONPJK);
		}

		static ::System::Boolean EOOPCCLFFFC(::UnityEngine::Matrix4x4 AGFKEJDOOOH, ::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Vector3 BEPMDFENBMH)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_EOOPCCLFFFC_OFFSET))(AGFKEJDOOOH, BAECLPHLLHO, BEPMDFENBMH);
		}

		::System::Void LBCKEDHMDND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_LBCKEDHMDND_OFFSET))(this);
		}

		::System::Void ELNADCLOEGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_ELNADCLOEGL_OFFSET))(this);
		}

		::System::String* LLJGMKKBMKM(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_LLJGMKKBMKM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 EFCHPODGCCI(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_EFCHPODGCCI_OFFSET))(this, KPNIHKEKDOC);
		}

		::System::Void OAHLNGBFMBE(::UnityEngine::Vector3 BAECLPHLLHO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_OAHLNGBFMBE_OFFSET))(this, BAECLPHLLHO);
		}

		::System::Boolean OKJBKKAOFIA(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC, ::System::Single PBCAAADNEPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_OKJBKKAOFIA_OFFSET))(this, KPNIHKEKDOC, PBCAAADNEPK);
		}

		::System::Void OHGIIPNMJAJ(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC, ::MoleMole::AnimationTriggerVolume_AnimationSegment* AAAANCGELDI, ::System::Boolean NPPMJEIPMFC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*, ::MoleMole::AnimationTriggerVolume_AnimationSegment*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_OHGIIPNMJAJ_OFFSET))(this, KPNIHKEKDOC, AAAANCGELDI, NPPMJEIPMFC);
		}

		::System::Boolean BHCFCGMCJDB(::UnityEngine::Vector3& CKPGOKHECCH)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_BHCFCGMCJDB_OFFSET))(this, CKPGOKHECCH);
		}

		::System::Void DILOBLADHLO(::System::Boolean OPPJBNNCKLO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_DILOBLADHLO_OFFSET))(this, OPPJBNNCKLO);
		}

		::System::Int32 EKICLFBKOID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_EKICLFBKOID_OFFSET))(this);
		}

		::System::Void MPGBAHEJFNB(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC, ::System::Int32 HAONHKDHCOP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_MPGBAHEJFNB_OFFSET))(this, KPNIHKEKDOC, HAONHKDHCOP);
		}

		::MoleMole::AnimationTriggerVolumeAudioConfig* MGKPPKMINEF()
		{
			return ((::MoleMole::AnimationTriggerVolumeAudioConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_MGKPPKMINEF_OFFSET))(this);
		}

		::System::Void AFHJNIODOAG(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_AFHJNIODOAG_OFFSET))(this, KPNIHKEKDOC);
		}

		::System::Void MKDJOMDIBKI(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC, ::System::Single PBCAAADNEPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_MKDJOMDIBKI_OFFSET))(this, KPNIHKEKDOC, PBCAAADNEPK);
		}

		::System::Boolean APFMFPDDNPE(::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG* KPNIHKEKDOC, ::System::Single PBCAAADNEPK)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::AnimationTriggerVolume_EFKEDEDCOMG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_APFMFPDDNPE_OFFSET))(this, KPNIHKEKDOC, PBCAAADNEPK);
		}

		::UnityEngine::Transform* DMMJBMKAHDC(::System::Int32 ABHBKFJKINO)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_ANIMATIONTRIGGERVOLUME_DMMJBMKAHDC_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
