#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class StageHarmonyBaseLinkSlot;
class StageHarmonyDemodulator;
namespace RPG::Client { class StageHarmonySignalDemodulatorMonoPlugin; }
namespace RPG::Client { class StageHarmonyWeatherController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }

#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_BPLBEDDKKEM_OFFSET UNITYSDK_OFFSET(0xE115890)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xE114050)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CJOKJDNPKAP_OFFSET UNITYSDK_OFFSET(0xE114D00)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE116F40)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_DIJJHMAHACC_OFFSET UNITYSDK_OFFSET(0xE116490)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_DKGIFHBNJOP_OFFSET UNITYSDK_OFFSET(0xE1135A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_ECNMIPFGOJH_OFFSET UNITYSDK_OFFSET(0xE116770)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_EJDAKAECODE_OFFSET UNITYSDK_OFFSET(0xE1146F0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_EJKFEGKBGLL_OFFSET UNITYSDK_OFFSET(0xE1149E0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GBBFHLGONOM_OFFSET UNITYSDK_OFFSET(0xE115520)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTFROMSTATE_OFFSET UNITYSDK_OFFSET(0xE1141E0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0xE1143A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTTOSTATE_OFFSET UNITYSDK_OFFSET(0xE1142C0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_STATES_OFFSET UNITYSDK_OFFSET(0xE114100)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xE112E80)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GGLDFEDKPOO_OFFSET UNITYSDK_OFFSET(0xE114E60)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_HFPAKKOOMIB_OFFSET UNITYSDK_OFFSET(0xE114BC0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_ICKFDCLGKBM_OFFSET UNITYSDK_OFFSET(0xE1146A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_IFNKEEOIALP_OFFSET UNITYSDK_OFFSET(0xE116AF0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_IPKBIPAEACH_OFFSET UNITYSDK_OFFSET(0xE1160A0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_JPOHIFJMANP_OFFSET UNITYSDK_OFFSET(0xE115B50)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0xE114550)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KKOJNKOJNBF_OFFSET UNITYSDK_OFFSET(0xE116A50)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KMHBPGIBPLG_OFFSET UNITYSDK_OFFSET(0xE115DE0)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE112F00)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xE113F20)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_NIEFPFACFFD_OFFSET UNITYSDK_OFFSET(0xE114400)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_OHDPJKFAJPB_OFFSET UNITYSDK_OFFSET(0xE116B60)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xE112F60)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PGLHAKGOHEM_OFFSET UNITYSDK_OFFSET(0xE116C00)
#define RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xE113B70)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyWeatherControllerBehavior_TypeDefinitionIndex = 71016;

	class StageHarmonyWeatherControllerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::StageHarmonySignalDemodulatorMonoPlugin* _signalHost; // 0x38
		::System::Collections::Generic::Dictionary_2<::StageHarmonyDemodulator*, ::System::Object*>* _originalSnapshots; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CTOR_OFFSET))(this);
		}

		::RPG::Client::StageHarmonyWeatherController* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::StageHarmonyWeatherController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* get_States()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_STATES_OFFSET))(this);
		}

		::System::String* get_CurrentFromState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTFROMSTATE_OFFSET))(this);
		}

		::System::String* get_CurrentToState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTTOSTATE_OFFSET))(this);
		}

		::System::Single get_CurrentProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Void NIEFPFACFFD(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_NIEFPFACFFD_OFFSET))(this, a1, a2);
		}

		::System::Void KEAFKKMLOKE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KEAFKKMLOKE_OFFSET))(this, a1);
		}

		::System::Void EJDAKAECODE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_EJDAKAECODE_OFFSET))(this, a1);
		}

		::System::Void ICKFDCLGKBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_ICKFDCLGKBM_OFFSET))(this);
		}

		::System::Void EJKFEGKBGLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_EJKFEGKBGLL_OFFSET))(this);
		}

		::System::Void HFPAKKOOMIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_HFPAKKOOMIB_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PKADDEPKJFN_OFFSET))(this);
		}

		::System::Void GGLDFEDKPOO(::StageHarmonyBaseLinkSlot* a1, ::System::String* a2, ::StageHarmonyDemodulator* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyBaseLinkSlot*, ::System::String*, ::StageHarmonyDemodulator*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GGLDFEDKPOO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Color BPLBEDDKKEM(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Color a4)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_BPLBEDDKKEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single JPOHIFJMANP(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_JPOHIFJMANP_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector4 KMHBPGIBPLG(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector4 a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KMHBPGIBPLG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IPKBIPAEACH(::System::String* a1, ::System::String* a2, ::System::String* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Quaternion a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Quaternion a8, ::UnityEngine::Vector3 a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_IPKBIPAEACH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::UnityEngine::AnimationCurve* DIJJHMAHACC(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::AnimationCurve* a5)
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_DIJJHMAHACC_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Gradient* ECNMIPFGOJH(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4, ::UnityEngine::Gradient* a5)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_ECNMIPFGOJH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void KKOJNKOJNBF(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_KKOJNKOJNBF_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void DKGIFHBNJOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_DKGIFHBNJOP_OFFSET))(this);
		}

		static ::System::String* IFNKEEOIALP()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_IFNKEEOIALP_OFFSET))();
		}

		::System::Void GBBFHLGONOM(::StageHarmonyDemodulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_GBBFHLGONOM_OFFSET))(this, a1);
		}

		::System::Void CJOKJDNPKAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_CJOKJDNPKAP_OFFSET))(this);
		}

		::System::Void PGLHAKGOHEM(::StageHarmonyDemodulator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::StageHarmonyDemodulator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_PGLHAKGOHEM_OFFSET))(this, a1);
		}

		static ::UnityEngine::Gradient* OHDPJKFAJPB(::UnityEngine::Gradient* a1)
		{
			return ((::UnityEngine::Gradient*(*)(::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYWEATHERCONTROLLERBEHAVIOR_OHDPJKFAJPB_OFFSET))(a1);
		}

	};
}
