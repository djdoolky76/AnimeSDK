#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::VFX { class VisualEffectAsset; }

#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2006A130)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x2006A0A0)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_DESTROY_OFFSET UNITYSDK_OFFSET(0x2006A090)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE_RELEASE_OFFSET UNITYSDK_OFFSET(0x2006A050)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2006A030)
#define UNITYENGINE_VFX_VFXEVENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x2006A020)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXEventAttribute_TypeDefinitionIndex = 95429;

	class VFXEventAttribute : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10
		::System::Boolean m_Owner; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::VFX::VisualEffectAsset* m_VfxAsset; // 0x20

		::System::Void _ctor(::System::IntPtr ptr, ::System::Boolean owner, ::UnityEngine::VFX::VisualEffectAsset* vfxAsset)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean, ::UnityEngine::VFX::VisualEffectAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE__CTOR_OFFSET))(this, ptr, owner, vfxAsset);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_RELEASE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_DISPOSE_OFFSET))(this);
		}

		static ::System::Void Internal_Destroy(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEVENTATTRIBUTE_INTERNAL_DESTROY_OFFSET))(ptr);
		}
	};
}
