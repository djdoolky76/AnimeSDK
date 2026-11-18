#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DigitalOpus::MB::Core { class MB3_KMeansClustering_DataPoint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ANYAREEMPTY_OFFSET UNITYSDK_OFFSET(0x1FBBB420)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_CLUSTER_OFFSET UNITYSDK_OFFSET(0x1FBBBDD0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ELUCIDANDISTANCE_OFFSET UNITYSDK_OFFSET(0x1FBBB920)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_GETCLUSTER_OFFSET UNITYSDK_OFFSET(0x1FBBBA40)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_INITIALIZECENTROIDS_OFFSET UNITYSDK_OFFSET(0x1FBBB0C0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_MININDEX_OFFSET UNITYSDK_OFFSET(0x1FBBB980)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATECLUSTERMEMBERSHIP_OFFSET UNITYSDK_OFFSET(0x1FBBB560)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATEDATAPOINTMEANS_OFFSET UNITYSDK_OFFSET(0x1FBBB1A0)
#define DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBBAD40)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_KMeansClustering_TypeDefinitionIndex = 96239;

	class MB3_KMeansClustering : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* _clusters; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* _normalizedDataToCluster; // 0x18
		::System::Int32 _numberOfClusters; // 0x20

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, ::System::Int32 numClusters)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING__CTOR_OFFSET))(this, gos, numClusters);
		}

		::System::Void InitializeCentroids()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_INITIALIZECENTROIDS_OFFSET))(this);
		}

		::System::Boolean UpdateDataPointMeans(::System::Boolean force)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATEDATAPOINTMEANS_OFFSET))(this, force);
		}

		::System::Boolean AnyAreEmpty(::System::Collections::Generic::List_1<::System::Object*>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ANYAREEMPTY_OFFSET))(this, data);
		}

		::System::Boolean UpdateClusterMembership()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_UPDATECLUSTERMEMBERSHIP_OFFSET))(this);
		}

		::System::Single ElucidanDistance(::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint* dataPoint, ::UnityEngine::Vector3 mean)
		{
			return ((::System::Single(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_KMeansClustering_DataPoint*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_ELUCIDANDISTANCE_OFFSET))(this, dataPoint, mean);
		}

		::System::Int32 MinIndex(::Il2CppArray<::System::Single>* distances)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_MININDEX_OFFSET))(this, distances);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* GetCluster(::System::Int32 idx, ::UnityEngine::Vector3& mean, ::System::Single& size)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_GETCLUSTER_OFFSET))(this, idx, mean, size);
		}

		::System::Void Cluster()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_KMEANSCLUSTERING_CLUSTER_OFFSET))(this);
		}
	};
}
