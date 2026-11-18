#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ADD_1_OFFSET UNITYSDK_OFFSET(0x1F190580)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETCOMPONENTLISTHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F190AF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F190A40)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HASSUBCLASSOF_OFFSET UNITYSDK_OFFSET(0x1F1908F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HAS_1_OFFSET UNITYSDK_OFFSET(0x1F190680)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1F190470)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1F1907C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_RESET_OFFSET UNITYSDK_OFFSET(0x1F190570)
#define UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x1F190BD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeProfile_NativeSRP_TypeDefinitionIndex = 6085;

	class VolumeProfile_NativeSRP : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* components; // 0x18
		::System::Boolean debugMode; // 0x20
		::System::Boolean isDirty; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_RESET_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::VolumeComponent* Add_1(::System::Type* type, ::System::Boolean overrides)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VolumeComponent*(*)(::PVOID, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_ADD_1_OFFSET))(this, type, overrides);
		}

		::System::Void Remove_1(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_REMOVE_1_OFFSET))(this, type);
		}

		::System::Boolean Has_1(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HAS_1_OFFSET))(this, type);
		}

		::System::Boolean HasSubclassOf(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_HASSUBCLASSOF_OFFSET))(this, type);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 GetComponentListHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VOLUMEPROFILE_NATIVESRP_GETCOMPONENTLISTHASHCODE_OFFSET))(this);
		}
	};
}
