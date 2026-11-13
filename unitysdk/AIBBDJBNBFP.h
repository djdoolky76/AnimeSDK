#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define AIBBDJBNBFP_ACBJBPDLFOI_OFFSET UNITYSDK_OFFSET(0x19B335E0)
#define AIBBDJBNBFP_AKBEOCEEHFC_OFFSET UNITYSDK_OFFSET(0x19B33E90)
#define AIBBDJBNBFP_CTOR_OFFSET UNITYSDK_OFFSET(0x19B34070)
#define AIBBDJBNBFP_DGBOLLKHPJL_OFFSET UNITYSDK_OFFSET(0x19B33D10)
#define AIBBDJBNBFP_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x19B337B0)
#define AIBBDJBNBFP_EAMEBOCOFDA_OFFSET UNITYSDK_OFFSET(0x19B339D0)
#define AIBBDJBNBFP_EAOPNHOGEMJ_OFFSET UNITYSDK_OFFSET(0x19B33640)
#define AIBBDJBNBFP_EIFPGEHJCCN_OFFSET UNITYSDK_OFFSET(0x19B33590)
#define AIBBDJBNBFP_FBAKJMJKONO_OFFSET UNITYSDK_OFFSET(0x19B336F0)
#define AIBBDJBNBFP_FDCLPOKMFJM_OFFSET UNITYSDK_OFFSET(0x19B33520)
#define AIBBDJBNBFP_GGDHEIHGAFB_OFFSET UNITYSDK_OFFSET(0x19B32E40)
#define AIBBDJBNBFP_HMDNOFFJAHI_OFFSET UNITYSDK_OFFSET(0x19B32DC0)
#define AIBBDJBNBFP_HPEGLLPBLAP_OFFSET UNITYSDK_OFFSET(0x19B336A0)
#define AIBBDJBNBFP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19B32CA0)
#define AIBBDJBNBFP_JPPMGDHDKBM_OFFSET UNITYSDK_OFFSET(0x19B32F60)
#define AIBBDJBNBFP_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x19B32910)
#define AIBBDJBNBFP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x19B328A0)
#define AIBBDJBNBFP_KPPKLMKGJIN_OFFSET UNITYSDK_OFFSET(0x19B32960)
#define AIBBDJBNBFP_MKHLMILJDNM_OFFSET UNITYSDK_OFFSET(0x19B33FB0)
#define AIBBDJBNBFP_OKAOIJGPHDI_OFFSET UNITYSDK_OFFSET(0x19B33810)
#define AIBBDJBNBFP_PKPLHGDGOEI_OFFSET UNITYSDK_OFFSET(0x19B33750)
#define AIBBDJBNBFP_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x19B32C50)

inline static constexpr unsigned int AIBBDJBNBFP_TypeDefinitionIndex = 71843;

	class AIBBDJBNBFP : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::MonoEffectPluginSpeed* PPNEIMDNODI; // 0x18
		::UnityEngine::Transform* DEFLGFOEDKH; // 0x20
		::RPG::Client::MonoEffectPluginFollow* CDIMAMFFGMM; // 0x28
		::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* GMIPMLJCGDL; // 0x30
		::System::Nullable_1<::UnityEngine::Vector3> PEHHBBNAMEH; // 0x38
		::System::Byte _padding0[0x8];
		::System::Single GDDJJEPKLEF; // 0x48
		::UnityEngine::Vector3 PLFKKPELEOE; // 0x4C
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

		::System::Void PKPLHGDGOEI(::System::Nullable_1<::UnityEngine::Vector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + AIBBDJBNBFP_PKPLHGDGOEI_OFFSET))(this, a1);
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
