#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLEEAOLJPNA.h"
#include "unitysdk/JKEGILKKADN.h"
#include "unitysdk/KFNPNPHCGJA.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace AstraFX::Fireworks { class AstraFX_FireworksMonoPlugin; }
namespace AstraFX::Fireworks { class FireworkType; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class AstraFXRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class TrailRenderer; }
namespace UnityEngine { class Transform; }

#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ACKNADKFAID_OFFSET UNITYSDK_OFFSET(0x15BC8320)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x15BC5E10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x15BC5D10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_BOPLJBMPFGB_OFFSET UNITYSDK_OFFSET(0x15BCA260)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CCTOR_OFFSET UNITYSDK_OFFSET(0x15BCA830)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x15BC7B40)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CHNLCFIIMJF_OFFSET UNITYSDK_OFFSET(0x15BC63C0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_COONDAMGDFM_OFFSET UNITYSDK_OFFSET(0x15BC8A40)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x15BCA5E0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_DDGABBGKNPC_OFFSET UNITYSDK_OFFSET(0x15BC76D0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_DMCACNKBBOO_OFFSET UNITYSDK_OFFSET(0x15BC6270)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GBNBOMMCBPP_OFFSET UNITYSDK_OFFSET(0x15BC7BB0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x15BC61F0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_HBLHBBPCLJH_OFFSET UNITYSDK_OFFSET(0x15BC8510)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_HNAGIIPMABB_OFFSET UNITYSDK_OFFSET(0x15BCA250)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_IHDHDPHDNJD_OFFSET UNITYSDK_OFFSET(0x15BC98A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_JDEJMMPBJFK_OFFSET UNITYSDK_OFFSET(0x15BC7840)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15BC5F10)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LCJIPDJGKCH_OFFSET UNITYSDK_OFFSET(0x15BC7570)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LCPKIEKJEOD_OFFSET UNITYSDK_OFFSET(0x15BC8A60)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LDFPDDGCGPL_OFFSET UNITYSDK_OFFSET(0x15BC7BF0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LGPKFEJMFFH_OFFSET UNITYSDK_OFFSET(0x15BC8A50)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x15BC7580)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MFILGMCIFOH_OFFSET UNITYSDK_OFFSET(0x15BC6F70)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MMAMOECNHME_OFFSET UNITYSDK_OFFSET(0x15BC98B0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NBOPBGLBANJ_OFFSET UNITYSDK_OFFSET(0x15BC8DB0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NGMINGEICJK_OFFSET UNITYSDK_OFFSET(0x15BCA240)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NMNHNEMPHOK_OFFSET UNITYSDK_OFFSET(0x15BC69A0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NNGKPJENCHN_OFFSET UNITYSDK_OFFSET(0x15BC9AC0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ODLHLHHGPME_OFFSET UNITYSDK_OFFSET(0x15BC6800)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_OLEDHMNNFAN_OFFSET UNITYSDK_OFFSET(0x15BC9580)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_OLMBMCEJJFB_OFFSET UNITYSDK_OFFSET(0x15BC7BC0)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x15BC6520)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_PLFMGNMJHAD_OFFSET UNITYSDK_OFFSET(0x15BC9990)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKEXPLODED_OFFSET UNITYSDK_OFFSET(0x15BC5E90)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKLAUNCHED_OFFSET UNITYSDK_OFFSET(0x15BC5D90)
#define ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15BC6750)

namespace AstraFX::Fireworks
{
	inline static constexpr unsigned int AstraFX_FireworksBehavior_TypeDefinitionIndex = 49021;

	class AstraFX_FireworksBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Action_1<::KFNPNPHCGJA>* OnFireworkLaunched; // 0x38
		::System::Action_1<::BLEEAOLJPNA>* OnFireworkExploded; // 0x40
		::UnityEngine::AstraFXRenderer* m_Renderer; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* m_ActiveRockets; // 0x50
		::System::Collections::Generic::Queue_1<::JKEGILKKADN>* m_PendingExplosions; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* m_ActiveExplosions; // 0x60
		::System::Int32 m_EstimatedAliveCount; // 0x68
		::System::Int32 m_SpawnPassIndex; // 0x6C
		::System::Int32 m_UpdatePassIndex; // 0x70
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture2D* m_GradientTexture; // 0x78
		::System::Boolean m_GradientDirty; // 0x80
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Single>* m_IntensityArray; // 0x88
		::Il2CppArray<::System::Single>* m_RibbonChannelArray; // 0x90
		::Il2CppArray<::System::Single>* m_HueShiftRangeArray; // 0x98
		::Il2CppArray<::System::Single>* m_RibbonWidthArray; // 0xA0
		::Il2CppArray<::System::Single>* m_RibbonTaperArray; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* m_RibbonUVSpeedArray; // 0xB0
		::Il2CppArray<::UnityEngine::Vector4>* m_RibbonUVScaleArray; // 0xB8
		::Il2CppArray<::System::Single>* m_DebrisHdrIntensityArray; // 0xC0
		::Il2CppArray<::System::Single>* m_RibbonHdrIntensityArray; // 0xC8
		::Il2CppArray<::System::Single>* m_RibbonLengthScaleArray; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::TrailRenderer*>* m_TrailPool; // 0xD8
		::System::Collections::Generic::Queue_1<::System::Int32>* m_FreeTrailIndices; // 0xE0
		::UnityEngine::Transform* m_TrailRoot; // 0xE8
		static ::System::Int32* StaticGet_s_TypeHueShiftRangesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DE0);
		}

		static ::System::Int32* StaticGet_s_TypeDebrisHDRIntensitiesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DE4);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonUVScalesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DE8);
		}

		static ::System::Int32* StaticGet_s_GradientTextureID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DEC);
		}

		static ::System::Int32* StaticGet_s_TypeIntensitiesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DF0);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonChannelsID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DF4);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonUVSpeedsID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DF8);
		}

		static ::System::Int32* StaticGet_s_TypeCountID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14DFC);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonTapersID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14E00);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonHDRIntensitiesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14E04);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonLengthScalesID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14E08);
		}

		static ::System::Int32* StaticGet_s_TypeRibbonWidthsID()
		{
			return (::System::Int32*)UnitySDK::FromName("AstraFX.Fireworks", "AstraFX_FireworksBehavior")->GetStaticField(0x14E0C);
		}

		// static const ::System::Object MAX_DEBRIS; // 0x0
		// static const ::System::Object THREAD_GROUP_SIZE; // 0x0
		// static const ::System::Object GRADIENT_RESOLUTION; // 0x0
		// static const ::System::Object ROWS_PER_TYPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CCTOR_OFFSET))();
		}

		::System::Void add_OnFireworkLaunched(::System::Action_1<::KFNPNPHCGJA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KFNPNPHCGJA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkLaunched(::System::Action_1<::KFNPNPHCGJA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::KFNPNPHCGJA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKLAUNCHED_OFFSET))(this, a1);
		}

		::System::Void add_OnFireworkExploded(::System::Action_1<::BLEEAOLJPNA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BLEEAOLJPNA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ADD_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void remove_OnFireworkExploded(::System::Action_1<::BLEEAOLJPNA>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::BLEEAOLJPNA>*))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_REMOVE_ONFIREWORKEXPLODED_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void GBNBOMMCBPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GBNBOMMCBPP_OFFSET))(this);
		}

		::System::Void OLMBMCEJJFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_OLMBMCEJJFB_OFFSET))(this);
		}

		::System::Void LGPKFEJMFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LGPKFEJMFFH_OFFSET))(this);
		}

		::System::Void LCPKIEKJEOD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::AstraFX::Fireworks::FireworkType* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::AstraFX::Fireworks::FireworkType*, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LCPKIEKJEOD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NMNHNEMPHOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NMNHNEMPHOK_OFFSET))(this, a1);
		}

		::System::Void MFILGMCIFOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MFILGMCIFOH_OFFSET))(this, a1);
		}

		::System::Void LCJIPDJGKCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LCJIPDJGKCH_OFFSET))(this);
		}

		::System::Void ODLHLHHGPME(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ODLHLHHGPME_OFFSET))(this, a1);
		}

		::System::Boolean IHDHDPHDNJD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_IHDHDPHDNJD_OFFSET))(this, a1);
		}

		::System::Void MMAMOECNHME(::JKEGILKKADN a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEGILKKADN))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_MMAMOECNHME_OFFSET))(this, a1);
		}

		::System::Void CHNLCFIIMJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_CHNLCFIIMJF_OFFSET))(this);
		}

		::System::Void ACKNADKFAID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_ACKNADKFAID_OFFSET))(this);
		}

		::System::Void HBLHBBPCLJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_HBLHBBPCLJH_OFFSET))(this);
		}

		::System::Void COONDAMGDFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_COONDAMGDFM_OFFSET))(this);
		}

		::System::Void LDFPDDGCGPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_LDFPDDGCGPL_OFFSET))(this);
		}

		::System::Void DDGABBGKNPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_DDGABBGKNPC_OFFSET))(this);
		}

		::System::Void NNGKPJENCHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NNGKPJENCHN_OFFSET))(this);
		}

		::System::Void NGMINGEICJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NGMINGEICJK_OFFSET))(this);
		}

		::UnityEngine::Texture2D* HNAGIIPMABB()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_HNAGIIPMABB_OFFSET))(this);
		}

		::System::Void DMCACNKBBOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_DMCACNKBBOO_OFFSET))(this);
		}

		::System::Int32 NBOPBGLBANJ(::UnityEngine::Color a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Color, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_NBOPBGLBANJ_OFFSET))(this, a1, a2);
		}

		::System::Void PLFMGNMJHAD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_PLFMGNMJHAD_OFFSET))(this, a1);
		}

		::System::Void JDEJMMPBJFK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_JDEJMMPBJFK_OFFSET))(this);
		}

		::System::Void BOPLJBMPFGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_BOPLJBMPFGB_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 OLEDHMNNFAN(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_OLEDHMNNFAN_OFFSET))(a1, a2);
		}

		::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::AstraFX::Fireworks::AstraFX_FireworksMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_FIREWORKS_ASTRAFX_FIREWORKSBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

	};
}
