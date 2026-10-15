#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_CMMMBHIGGJP_OFFSET UNITYSDK_OFFSET(0xE14C580)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE14ECD0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_DDCDEFNPBNB_OFFSET UNITYSDK_OFFSET(0xE14E3B0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_EENGGACDAIG_OFFSET UNITYSDK_OFFSET(0xE14C3C0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_FALIKDPHDIG_OFFSET UNITYSDK_OFFSET(0xE14C500)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_GAEACJPAMEA_OFFSET UNITYSDK_OFFSET(0xE14E790)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_HABLGNJLPAG_OFFSET UNITYSDK_OFFSET(0xE14E260)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_KFKOBNICBKH_OFFSET UNITYSDK_OFFSET(0xE14E180)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_MEMKNOPJGDD_OFFSET UNITYSDK_OFFSET(0xE14E0A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_MFMDOGELIMI_OFFSET UNITYSDK_OFFSET(0xE14D4E0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_OMCBBCPMLNN_OFFSET UNITYSDK_OFFSET(0xE14D730)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE14E5E0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE14E5A0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xE14E620)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_PHGKMCLFKOK_OFFSET UNITYSDK_OFFSET(0xE14DBB0)
#define RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_PLKHPKOMIKB_OFFSET UNITYSDK_OFFSET(0xE14DC90)

namespace RPG::Client::Subway
{
	class AirshipSubwayCarriage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* MemberAttachPointName; // 0x18
		::Il2CppArray<::System::Object*>* AnchorsAnimGroupMaps; // 0x20
		::Il2CppArray<::System::Single>* MemberQualityPercents; // 0x28
		::Il2CppArray<::UnityEngine::Transform*>* IncludeAreas; // 0x30
		::Il2CppArray<::UnityEngine::Transform*>* ExcludeAreas; // 0x38
		::UnityEngine::GameObject* SpawnPrefab; // 0x40
		::System::Int32 SpawnCount; // 0x48
		::System::Single MinDistanceBetweenPoints; // 0x4C
		::System::Int32 AttemptsPerFrame; // 0x50
		::System::Int32 WarningAfterFailures; // 0x54
		::UnityEngine::Coroutine* JCCMFKNPCHF; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_CTOR_OFFSET))(this);
		}

		::System::Void EENGGACDAIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_EENGGACDAIG_OFFSET))(this);
		}

		::System::Void CMMMBHIGGJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_CMMMBHIGGJP_OFFSET))(this);
		}

		::System::Void MFMDOGELIMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_MFMDOGELIMI_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FALIKDPHDIG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_FALIKDPHDIG_OFFSET))(this);
		}

		::UnityEngine::Transform* PHGKMCLFKOK(::Il2CppArray<::UnityEngine::Transform*>* a1, ::Il2CppArray<::System::Single>* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_PHGKMCLFKOK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 PLKHPKOMIKB(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_PLKHPKOMIKB_OFFSET))(this, a1);
		}

		::System::Boolean MEMKNOPJGDD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_MEMKNOPJGDD_OFFSET))(this, a1);
		}

		::System::Boolean KFKOBNICBKH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_KFKOBNICBKH_OFFSET))(this, a1);
		}

		::System::Boolean OMCBBCPMLNN(::UnityEngine::Vector3 a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_OMCBBCPMLNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HABLGNJLPAG(::UnityEngine::Vector3 a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_HABLGNJLPAG_OFFSET))(this, a1, a2);
		}

		::System::Void DDCDEFNPBNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_DDCDEFNPBNB_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Void GAEACJPAMEA(::UnityEngine::Transform* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUBWAY_AIRSHIPSUBWAYCARRIAGE_GAEACJPAMEA_OFFSET))(this, a1, a2);
		}

	};
}
