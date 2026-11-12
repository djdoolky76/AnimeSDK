#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BNIEAMHOKJE;
class KLEFGGIHGMI;
class SceneLightVolume;
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }

#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_AFHGEEMLPLC_OFFSET UNITYSDK_OFFSET(0x164FD3F0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_AIEFPGLIJLF_OFFSET UNITYSDK_OFFSET(0x164FE680)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_BGJILFOOLFC_OFFSET UNITYSDK_OFFSET(0x164FEC60)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCCMOCIELFO_1_OFFSET UNITYSDK_OFFSET(0x164FB8A0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCCMOCIELFO_OFFSET UNITYSDK_OFFSET(0x164FB7F0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0x164FEF90)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CEBOBIFBHPD_OFFSET UNITYSDK_OFFSET(0x164FE970)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CLMBJABNGFP_OFFSET UNITYSDK_OFFSET(0x164FAC10)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x164F9C70)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x164FC170)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_DNJIAAJGNMJ_OFFSET UNITYSDK_OFFSET(0x164FC9B0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_EDFJNHAMKBL_OFFSET UNITYSDK_OFFSET(0x164FB040)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_EJJLKAPINAE_OFFSET UNITYSDK_OFFSET(0x164FB330)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GCFOCKMBMIB_OFFSET UNITYSDK_OFFSET(0x164F9810)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GCICAABIGKP_OFFSET UNITYSDK_OFFSET(0x164FB670)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET_USEDMANAGERID_OFFSET UNITYSDK_OFFSET(0x164F9870)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x164F9860)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET__BATTLEDYNAMICBLOCKCACHE_OFFSET UNITYSDK_OFFSET(0x164FB230)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_IBHGMCLPPMH_OFFSET UNITYSDK_OFFSET(0x164FA710)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0x164FD5A0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_JICMDCJFOAL_OFFSET UNITYSDK_OFFSET(0x164FA640)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_KDHHNOMGJJP_OFFSET UNITYSDK_OFFSET(0x164FB4D0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LEEMOELNLID_OFFSET UNITYSDK_OFFSET(0x164F9880)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LGNNAOLPNIP_OFFSET UNITYSDK_OFFSET(0x164FCCD0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LHMAFPGNGMM_OFFSET UNITYSDK_OFFSET(0x164FC060)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_NILEILJFKIO_OFFSET UNITYSDK_OFFSET(0x164F98D0)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_NKINAAPKLFP_OFFSET UNITYSDK_OFFSET(0x164FE460)
#define ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_ODPCOAJLFNK_OFFSET UNITYSDK_OFFSET(0x164FE570)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroBlockDataTransProperty_TypeDefinitionIndex = 50668;

	class EnviroBlockDataTransProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Int32 usedVersion; // 0x48
		::System::Byte _padding0[0x4];
		::System::String* _CurrentProfileName; // 0x50
		::System::Int32 usedManagerId; // 0x58
		::UnityEngine::Vector3 LastCameraPos; // 0x5C
		::System::Collections::Generic::List_1<::BNIEAMHOKJE*>* _BlockDatas; // 0x68
		::System::Int32 _CurrentMainLightGroup; // 0x70
		::System::Byte _padding1[0x4];
		::Il2CppArray<::SceneLightVolume*>* _sceneLightVolumes; // 0x78
		::EnviromentSystem::EnviromentProfile* _ActiveProfile; // 0x80
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x88
		static ::System::Collections::Generic::List_1<::SceneLightVolume*>** StaticGet_intersectVolumes()
		{
			return (::System::Collections::Generic::List_1<::SceneLightVolume*>**)UnitySDK::FromName("EnviromentSystem", "EnviroBlockDataTransProperty")->GetStaticField(0x35D60);
		}

		static ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>** StaticGet___BattleDynamicBlockCache()
		{
			return (::System::Collections::Generic::List_1<::KLEFGGIHGMI*>**)UnitySDK::FromName("EnviromentSystem", "EnviroBlockDataTransProperty")->GetStaticField(0x35D68);
		}

		static ::System::Collections::Generic::List_1<::SceneLightVolume*>** StaticGet_intersectParamVolumes()
		{
			return (::System::Collections::Generic::List_1<::SceneLightVolume*>**)UnitySDK::FromName("EnviromentSystem", "EnviroBlockDataTransProperty")->GetStaticField(0x35D70);
		}

		static ::System::Boolean* StaticGet_DisableAllSceneLight()
		{
			return (::System::Boolean*)UnitySDK::FromName("EnviromentSystem", "EnviroBlockDataTransProperty")->GetStaticField(0xB7A0);
		}

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCTOR_OFFSET))();
		}

		::System::Void GCFOCKMBMIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GCFOCKMBMIB_OFFSET))(this, a1);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET_VERSION_OFFSET))(this);
		}

		::System::Int32 get_UsedManagerId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET_USEDMANAGERID_OFFSET))(this);
		}

		::System::Void LEEMOELNLID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LEEMOELNLID_OFFSET))(this, a1);
		}

		::System::Void NILEILJFKIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_NILEILJFKIO_OFFSET))(this);
		}

		::System::Void CLMBJABNGFP(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CLMBJABNGFP_OFFSET))(this, a1);
		}

		::System::Void EDFJNHAMKBL(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_EDFJNHAMKBL_OFFSET))(this, a1);
		}

		static ::System::Void IBHGMCLPPMH(::System::String* a1, ::BNIEAMHOKJE* a2, ::System::Int32 a3, ::RPG::GameCore::BlockNodeConfig* a4)
		{
			return ((::System::Void(*)(::System::String*, ::BNIEAMHOKJE*, ::System::Int32, ::RPG::GameCore::BlockNodeConfig*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_IBHGMCLPPMH_OFFSET))(a1, a2, a3, a4);
		}

		::BNIEAMHOKJE* JICMDCJFOAL(::System::Int32 a1)
		{
			return ((::BNIEAMHOKJE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_JICMDCJFOAL_OFFSET))(this, a1);
		}

		static ::System::Collections::Generic::List_1<::KLEFGGIHGMI*>* get__BattleDynamicBlockCache()
		{
			return ((::System::Collections::Generic::List_1<::KLEFGGIHGMI*>*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GET__BATTLEDYNAMICBLOCKCACHE_OFFSET))();
		}

		static ::System::Void EJJLKAPINAE(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_EJJLKAPINAE_OFFSET))(a1);
		}

		static ::System::Void KDHHNOMGJJP(::KLEFGGIHGMI* a1)
		{
			return ((::System::Void(*)(::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_KDHHNOMGJJP_OFFSET))(a1);
		}

		::System::Void GCICAABIGKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_GCICAABIGKP_OFFSET))(this);
		}

		::SceneLightVolume* CCCMOCIELFO()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCCMOCIELFO_OFFSET))(this);
		}

		static ::SceneLightVolume* CCCMOCIELFO_1(::Il2CppArray<::SceneLightVolume*>* a1, ::SceneLightVolume* a2, ::System::Int32 a3)
		{
			return ((::SceneLightVolume*(*)(::Il2CppArray<::SceneLightVolume*>*, ::SceneLightVolume*, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CCCMOCIELFO_1_OFFSET))(a1, a2, a3);
		}

		::System::Void LHMAFPGNGMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LHMAFPGNGMM_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void DNJIAAJGNMJ(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_DNJIAAJGNMJ_OFFSET))(this, a1);
		}

		::System::Void LGNNAOLPNIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_LGNNAOLPNIP_OFFSET))(this, a1);
		}

		::System::Void AFHGEEMLPLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_AFHGEEMLPLC_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_IKOHLHDGFKH_OFFSET))(this, a1);
		}

		::UnityEngine::Light* NKINAAPKLFP(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_NKINAAPKLFP_OFFSET))(this, a1);
		}

		::UnityEngine::Light* ODPCOAJLFNK(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_ODPCOAJLFNK_OFFSET))(this, a1);
		}

		::UnityEngine::Light* AIEFPGLIJLF(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_AIEFPGLIJLF_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* CEBOBIFBHPD(::System::String* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_CEBOBIFBHPD_OFFSET))(this, a1, a2);
		}

		::System::Void BGJILFOOLFC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROBLOCKDATATRANSPROPERTY_BGJILFOOLFC_OFFSET))(this, a1, a2);
		}

	};
}
