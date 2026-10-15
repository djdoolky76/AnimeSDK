#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace System { class Nullable; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define AIBBDJBNBFP_ACBJBPDLFOI_OFFSET UNITYSDK_OFFSET(0xEB92C40)
#define AIBBDJBNBFP_AKBEOCEEHFC_OFFSET UNITYSDK_OFFSET(0xEB93470)
#define AIBBDJBNBFP_CTOR_OFFSET UNITYSDK_OFFSET(0xEB93650)
#define AIBBDJBNBFP_DGBOLLKHPJL_OFFSET UNITYSDK_OFFSET(0xEB932F0)
#define AIBBDJBNBFP_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xEB92E10)
#define AIBBDJBNBFP_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0xEB92FB0)
#define AIBBDJBNBFP_EAOPNHOGEMJ_OFFSET UNITYSDK_OFFSET(0xEB92CA0)
#define AIBBDJBNBFP_EIFPGEHJCCN_OFFSET UNITYSDK_OFFSET(0xEB92BF0)
#define AIBBDJBNBFP_FBAKJMJKONO_OFFSET UNITYSDK_OFFSET(0xEB92D50)
#define AIBBDJBNBFP_FDCLPOKMFJM_OFFSET UNITYSDK_OFFSET(0xEB92B80)
#define AIBBDJBNBFP_GGDHEIHGAFB_OFFSET UNITYSDK_OFFSET(0xEB924A0)
#define AIBBDJBNBFP_HMDNOFFJAHI_OFFSET UNITYSDK_OFFSET(0xEB92420)
#define AIBBDJBNBFP_HPEGLLPBLAP_OFFSET UNITYSDK_OFFSET(0xEB92D00)
#define AIBBDJBNBFP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xEB92300)
#define AIBBDJBNBFP_JPPMGDHDKBM_OFFSET UNITYSDK_OFFSET(0xEB925C0)
#define AIBBDJBNBFP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0xEB91F70)
#define AIBBDJBNBFP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xEB91F00)
#define AIBBDJBNBFP_KPPKLMKGJIN_OFFSET UNITYSDK_OFFSET(0xEB91FC0)
#define AIBBDJBNBFP_MKHLMILJDNM_OFFSET UNITYSDK_OFFSET(0xEB93590)
#define AIBBDJBNBFP_OKAOIJGPHDI_OFFSET UNITYSDK_OFFSET(0xEB92E70)
#define AIBBDJBNBFP_PKPLHGDGOEI_OFFSET UNITYSDK_OFFSET(0xEB92DB0)
#define AIBBDJBNBFP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0xEB922B0)

	class AIBBDJBNBFP : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::MonoEffectPluginFollow* CDIMAMFFGMM; // 0x18
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* GMIPMLJCGDL; // 0x20
		::RPG::Client::MonoEffectPluginSpeed* PPNEIMDNODI; // 0x28
		::UnityEngine::Transform* DEFLGFOEDKH; // 0x30
		::System::Nullable* PEHHBBNAMEH; // 0x38
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector3 PLFKKPELEOE; // 0x48
		::System::Single GDDJJEPKLEF; // 0x54
		::UnityEngine::Vector3 DFEMLLMOHMP; // 0x58
		::System::Single HPCHCEFOKJB; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_POPNLPIAOCM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void GGDHEIHGAFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_GGDHEIHGAFB_OFFSET))(this);
		}

		::System::Void JPPMGDHDKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_JPPMGDHDKBM_OFFSET))(this);
		}

		::System::Void EIFPGEHJCCN(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_EIFPGEHJCCN_OFFSET))(this, a1);
		}

		::System::Void ACBJBPDLFOI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_ACBJBPDLFOI_OFFSET))(this, a1);
		}

		::System::Void EAOPNHOGEMJ(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_EAOPNHOGEMJ_OFFSET))(this, a1);
		}

		::System::Void HPEGLLPBLAP(::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>*))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_HPEGLLPBLAP_OFFSET))(this, a1);
		}

		::System::Void FBAKJMJKONO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_FBAKJMJKONO_OFFSET))(this, a1);
		}

		::System::Void PKPLHGDGOEI(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_PKPLHGDGOEI_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_DLAILGNMFGI_OFFSET))(this);
		}

		::System::Void MKHLMILJDNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_MKHLMILJDNM_OFFSET))(this);
		}

		::System::Void KPPKLMKGJIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_KPPKLMKGJIN_OFFSET))(this);
		}

		::System::Void EAMEBOCOFDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_EAMEBOCOFDA_OFFSET))(this);
		}

		::System::Void OKAOIJGPHDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_OKAOIJGPHDI_OFFSET))(this);
		}

		::System::Void DGBOLLKHPJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_DGBOLLKHPJL_OFFSET))(this);
		}

		::System::Void AKBEOCEEHFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_AKBEOCEEHFC_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginMiniEmotion* FDCLPOKMFJM()
		{
			return ((::RPG::Client::MonoEffectPluginMiniEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_FDCLPOKMFJM_OFFSET))(this);
		}

		::RPG::Client::MonoEffect* HMDNOFFJAHI()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_HMDNOFFJAHI_OFFSET))(this);
		}

	};
