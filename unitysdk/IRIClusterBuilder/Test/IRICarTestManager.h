#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_ECarType.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_EPositionMode.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_HotReloadCommand.h"
#include "unitysdk/IRIClusterBuilder/Test/IRICarTestManager_LightType.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/ClusterIRIType.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class NNEDFJMPCCK;
namespace EnviromentSystem { class EnviromentProfile; }
namespace IRIClusterBuilder { class IRI2VolumeTemplate; }
namespace IRIClusterBuilder { class IRIClusterBuildConfig; }
namespace IRIClusterBuilder::Test { class IRICarTestManager; }
namespace IRIClusterBuilder::Test { class IRICarTestManager_PlatformInfoMessage; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Net::Sockets { class TcpClient; }
namespace System::Net::Sockets { class TcpListener; }
namespace System::Threading { class Thread; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RPGInstancedItemClusterVolumeManager; }

#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ACGDFNCIKBM_OFFSET UNITYSDK_OFFSET(0x1652D150)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_AFBCAPABFKF_OFFSET UNITYSDK_OFFSET(0x1652EED0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CAJIFMNGBMG_OFFSET UNITYSDK_OFFSET(0x1652D330)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x165308E0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x16532210)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_DMCHOPIDKNK_OFFSET UNITYSDK_OFFSET(0x165321B0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_EFCLFAGHJKH_OFFSET UNITYSDK_OFFSET(0x1652DF60)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENABLEIRISHADOW_OFFSET UNITYSDK_OFFSET(0x1652EE70)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENPJBKJMONP_OFFSET UNITYSDK_OFFSET(0x1652D240)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FKHEJECIJNH_OFFSET UNITYSDK_OFFSET(0x1652D990)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FLASHLIGHT_OFFSET UNITYSDK_OFFSET(0x165320C0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_GIFJEIAECGI_OFFSET UNITYSDK_OFFSET(0x1652E380)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1652E480)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INNOPMMMFDN_OFFSET UNITYSDK_OFFSET(0x1652ED50)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ISENABLEIRISHADOW_OFFSET UNITYSDK_OFFSET(0x1652EEA0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_KLOKEDEJPHE_OFFSET UNITYSDK_OFFSET(0x1652DBB0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_LOADENVPROFILE_OFFSET UNITYSDK_OFFSET(0x1652E9A0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_NHIELHDFMHC_OFFSET UNITYSDK_OFFSET(0x16530460)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_NPKJDONLNCP_OFFSET UNITYSDK_OFFSET(0x1652E170)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_OFEOJLNMAOM_OFFSET UNITYSDK_OFFSET(0x16531C70)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x165307A0)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STARTHOTRELOADSERVER_OFFSET UNITYSDK_OFFSET(0x1652D550)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_START_OFFSET UNITYSDK_OFFSET(0x1652E440)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STOPHOTRELOADSERVER_OFFSET UNITYSDK_OFFSET(0x1652D870)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_TURNLIGHT_OFFSET UNITYSDK_OFFSET(0x16531E70)
#define IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1652EA80)

namespace IRIClusterBuilder::Test
{
	class IRICarTestManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 HotReloadPort; // 0x18
		::System::Byte _padding0[0x4];
		::System::Net::Sockets::TcpListener* JDEKKKBJOCA; // 0x20
		::System::Threading::Thread* LLPGNGEDMOK; // 0x28
		::System::Boolean KIJBNJCHIKN; // 0x30
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::Queue_1<::System::Action*>* MNPCCJJDPBL; // 0x38
		::IRIClusterBuilder::Test::IRICarTestManager_PlatformInfoMessage* NPONIALPIDF; // 0x40
		::EnviromentSystem::EnviromentProfile* EnvProfile; // 0x48
		::System::Int32 CarCount; // 0x50
		::System::Boolean CarMove; // 0x54
		::System::Byte _padding2[0x3];
		::UnityEngine::Rect SpawnArea; // 0x58
		::IRIClusterBuilder::Test::IRICarTestManager_ECarType CarType; // 0x68
		::IRIClusterBuilder::Test::IRICarTestManager_EPositionMode PositionMode; // 0x6C
		::UnityEngine::Vector3 FixedPosition; // 0x70
		::System::Byte _padding3[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CarNPRResource; // 0x80
		::UnityEngine::RPGInstancedItemClusterVolumeManager* ENJCIOJDMOH; // 0x88
		::IRIClusterBuilder::IRIClusterBuildConfig* IRIClusterBuildConfig; // 0x90
		::UnityEngine::Material* IRI2CarClusterMaterial; // 0x98
		::System::Collections::Generic::List_1<::IRIClusterBuilder::IRI2VolumeTemplate*>* IRI2VolumeTemplate; // 0xA0
		::System::Collections::Generic::List_1<::System::ValueTuple>* FHNECFDCBEF; // 0xA8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::Unity::Collections::NativeArray_1<::UnityEngine::ClusterIRIType>>* EDAMOPOBBGJ; // 0xB0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* KKHONILOFEL; // 0xB8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::ClusterMeshLodInfo>>*>* MLAGMEBJKGJ; // 0xC0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::MeshClusterInfo>>*>* GDFJMOCMACM; // 0xC8
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::System::UInt32>>*>* CNKNIPBNKNE; // 0xD0
		::System::Collections::Generic::Dictionary_2<::IRIClusterBuilder::IRI2VolumeTemplate*, ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>>*>* OMHMBCFBEJH; // 0xD8
		::System::Collections::Generic::List_1<::NNEDFJMPCCK*>* FNDAIEEMIDE; // 0xE0
		::UnityEngine::Coroutine* DABGOHFBBDG; // 0xE8
		::UnityEngine::Color EmissionColor; // 0xF0
		::System::Single LightStrength; // 0x100
		::System::Int32 ID; // 0x104
		::System::Single FlashFrequency; // 0x108
		::System::Int32 HeadLightID; // 0x10C
		::System::Int32 RearLightID; // 0x110
		::System::Int32 TailLightID; // 0x114
		::System::Int32 TurnLightRightID; // 0x118
		::System::Int32 TurnLightLeftID; // 0x11C
		::System::Collections::Generic::List_1<::System::Int32>* JNLNDPPNHHL; // 0x120
		static ::IRIClusterBuilder::Test::IRICarTestManager** StaticGet_Instance()
		{
			return (::IRIClusterBuilder::Test::IRICarTestManager**)UnitySDK::FromName("IRIClusterBuilder.Test", "IRICarTestManager")->GetStaticField(0x6DCE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void ACGDFNCIKBM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ACGDFNCIKBM_OFFSET))(this, a1);
		}

		::System::Void ENPJBKJMONP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENPJBKJMONP_OFFSET))(this);
		}

		::System::Void CAJIFMNGBMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CAJIFMNGBMG_OFFSET))(this);
		}

		::System::Void StartHotReloadServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STARTHOTRELOADSERVER_OFFSET))(this);
		}

		::System::Void StopHotReloadServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_STOPHOTRELOADSERVER_OFFSET))(this);
		}

		::System::Void FKHEJECIJNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FKHEJECIJNH_OFFSET))(this);
		}

		::System::Void KLOKEDEJPHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_KLOKEDEJPHE_OFFSET))(this, a1);
		}

		::System::Void NPKJDONLNCP(::IRIClusterBuilder::Test::IRICarTestManager_HotReloadCommand a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::Test::IRICarTestManager_HotReloadCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_NPKJDONLNCP_OFFSET))(this, a1, a2);
		}

		::System::Void GIFJEIAECGI(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_GIFJEIAECGI_OFFSET))(this, a1);
		}

		::System::Void EFCLFAGHJKH(::System::Net::Sockets::TcpClient* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Sockets::TcpClient*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_EFCLFAGHJKH_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void INNOPMMMFDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INNOPMMMFDN_OFFSET))(this);
		}

		::System::Void LoadEnvProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_LOADENVPROFILE_OFFSET))(this);
		}

		::System::Void EnableIRIShadow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ENABLEIRISHADOW_OFFSET))(this, a1);
		}

		::System::Boolean IsEnableIRIShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ISENABLEIRISHADOW_OFFSET))(this);
		}

		::UnityEngine::IRIClusterVolumeInfo AFBCAPABFKF(::IRIClusterBuilder::IRI2VolumeTemplate* a1)
		{
			return ((::UnityEngine::IRIClusterVolumeInfo(*)(::PVOID, ::IRIClusterBuilder::IRI2VolumeTemplate*))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_AFBCAPABFKF_OFFSET))(this, a1);
		}

		::System::Void NHIELHDFMHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_NHIELHDFMHC_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void OFEOJLNMAOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_OFEOJLNMAOM_OFFSET))(this);
		}

		::System::Void TurnLight(::IRIClusterBuilder::Test::IRICarTestManager_LightType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::IRIClusterBuilder::Test::IRICarTestManager_LightType, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_TURNLIGHT_OFFSET))(this, a1, a2);
		}

		::System::Void FlashLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_FLASHLIGHT_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* DMCHOPIDKNK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_TEST_IRICARTESTMANAGER_DMCHOPIDKNK_OFFSET))(this);
		}

	};
}
