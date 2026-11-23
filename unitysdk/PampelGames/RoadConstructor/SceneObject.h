#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B223EC95048EAAE0/A92CA8C5CE7ED303.h"
#include "unitysdk/B223EC95048EAAE0/B3CC6E5519497EE3.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class F77C0B948299CD47;
namespace PampelGames::RoadConstructor { class Road; }
namespace PampelGames::RoadConstructor { class SpawnedObject; }
namespace PampelGames::RoadConstructor { class Traffic; }
namespace PampelGames::RoadConstructor { class TrafficLane; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Splines { class SplineContainer; }

#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A5D477E9C0F16E27_OFFSET UNITYSDK_OFFSET(0x3DB1D10)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A788EA8D7C189191_OFFSET UNITYSDK_OFFSET(0x3DB1C40)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A99EAE1B9D53A956_OFFSET UNITYSDK_OFFSET(0x3DB2070)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_ADAD4EB7675BC687_OFFSET UNITYSDK_OFFSET(0x3DB1E30)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B3048F85AA63E125_OFFSET UNITYSDK_OFFSET(0x3DB1950)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_1_OFFSET UNITYSDK_OFFSET(0x3DB1A80)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_2_OFFSET UNITYSDK_OFFSET(0x3DB1990)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_OFFSET UNITYSDK_OFFSET(0x3DB1AA0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B892200A2CE6979D_OFFSET UNITYSDK_OFFSET(0x3DB20F0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_BFFE5A41F743E16A_OFFSET UNITYSDK_OFFSET(0x3DB15D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E0CCFD533CB0C462_OFFSET UNITYSDK_OFFSET(0x3DB1530)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E1CF7EE32E806831_OFFSET UNITYSDK_OFFSET(0x3DB17D0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E79BE4C6C0BCDA34_OFFSET UNITYSDK_OFFSET(0x3DB1F50)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_EC27F744EA5566B2_OFFSET UNITYSDK_OFFSET(0x3DB1890)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_EE0D547CFF7B7DF8_OFFSET UNITYSDK_OFFSET(0x3DB21F0)
#define PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x3DB22D0)

namespace PampelGames::RoadConstructor
{
	inline static constexpr unsigned int SceneObject_TypeDefinitionIndex = 18913;

	class SceneObject : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* iD; // 0x20
		::PampelGames::RoadConstructor::Road* road; // 0x28
		::UnityEngine::MeshFilter* meshFilter; // 0x30
		::UnityEngine::MeshRenderer* meshRenderer; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* meshFilterLODs; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* meshRendererLODs; // 0x48
		::UnityEngine::Splines::SplineContainer* splineContainer; // 0x50
		::System::Boolean elevated; // 0x58
		::System::Byte _padding0[0x7];
		::PampelGames::RoadConstructor::Traffic* traffic; // 0x60
		::F77C0B948299CD47* F59FC58964F6AEF2; // 0x68

		::System::Single BFFE5A41F743E16A(::UnityEngine::Vector3 FF9A37DE513AC35B)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_BFFE5A41F743E16A_OFFSET))(this, FF9A37DE513AC35B);
		}

		::Il2CppArray<::PampelGames::RoadConstructor::SpawnedObject*>* B3048F85AA63E125()
		{
			return ((::Il2CppArray<::PampelGames::RoadConstructor::SpawnedObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B3048F85AA63E125_OFFSET))(this);
		}

		::System::Boolean ADAD4EB7675BC687()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_ADAD4EB7675BC687_OFFSET))(this);
		}

		::System::Boolean EE0D547CFF7B7DF8()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_EE0D547CFF7B7DF8_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* B5E2D7D360A320C5(::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C, ::B223EC95048EAAE0::A92CA8C5CE7ED303 BB0DD9F3C08DCF88)
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*(*)(::PVOID, ::B223EC95048EAAE0::B3CC6E5519497EE3, ::B223EC95048EAAE0::A92CA8C5CE7ED303))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_OFFSET))(this, F04E814AC4A8897C, BB0DD9F3C08DCF88);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* B5E2D7D360A320C5_1()
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_1_OFFSET))(this);
		}

		::System::Boolean A99EAE1B9D53A956()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A99EAE1B9D53A956_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* E1CF7EE32E806831()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E1CF7EE32E806831_OFFSET))(this);
		}

		::System::Boolean A5D477E9C0F16E27()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A5D477E9C0F16E27_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void A788EA8D7C189191(::F77C0B948299CD47* EC442B0F96180C55, ::UnityEngine::MeshFilter* E4D9F1E6C2E2D895, ::UnityEngine::MeshRenderer* F61F2167BF0BD35D, ::UnityEngine::Splines::SplineContainer* EF7FDF97A4E149AB, ::System::Boolean E6015DA19BCC27A9)
		{
			return ((::System::Void(*)(::PVOID, ::F77C0B948299CD47*, ::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*, ::UnityEngine::Splines::SplineContainer*, ::System::Boolean))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_A788EA8D7C189191_OFFSET))(this, EC442B0F96180C55, E4D9F1E6C2E2D895, F61F2167BF0BD35D, EF7FDF97A4E149AB, E6015DA19BCC27A9);
		}

		::System::Boolean E79BE4C6C0BCDA34()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E79BE4C6C0BCDA34_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* EC27F744EA5566B2()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_EC27F744EA5566B2_OFFSET))(this);
		}

		::System::Boolean B892200A2CE6979D()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B892200A2CE6979D_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>* B5E2D7D360A320C5_2(::B223EC95048EAAE0::B3CC6E5519497EE3 F04E814AC4A8897C)
		{
			return ((::System::Collections::Generic::List_1<::PampelGames::RoadConstructor::TrafficLane*>*(*)(::PVOID, ::B223EC95048EAAE0::B3CC6E5519497EE3))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_B5E2D7D360A320C5_2_OFFSET))(this, F04E814AC4A8897C);
		}

		::System::Void E0CCFD533CB0C462()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAMPELGAMES_ROADCONSTRUCTOR_SCENEOBJECT_E0CCFD533CB0C462_OFFSET))(this);
		}
	};
}
