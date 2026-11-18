#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"

namespace RBDDestruction { class RBDAssetsConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_GETDEFAULTCOLOR_OFFSET UNITYSDK_OFFSET(0x1E8DD950)
#define RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_INITIALIZEGROUPS_OFFSET UNITYSDK_OFFSET(0x1E8DD710)
#define RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8DDA00)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDVolumeGroupManager_TypeDefinitionIndex = 26325;

	class RBDVolumeGroupManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* groups; // 0x18
		::System::Int32 assetIndex; // 0x20
		::System::Byte _padding0[0x4];
		::RBDDestruction::RBDAssetsConfig* rbdAssetsConfig; // 0x28
		::System::Boolean showFragmentBBox; // 0x30
		::System::Byte _padding1[0x7];
		::Il2CppArray<::System::Int32>* volumeIndexes; // 0x38
		::Il2CppArray<::System::Boolean>* brushOverride; // 0x40
		::System::Single explodeViewFactor; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void InitializeGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_INITIALIZEGROUPS_OFFSET))(this);
		}

		::UnityEngine::Color GetDefaultColor(::System::Int32 index)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDVOLUMEGROUPMANAGER_GETDEFAULTCOLOR_OFFSET))(this, index);
		}
	};
}
