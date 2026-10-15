#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"
#include "unitysdk/UnityEngine/ReceiveGI.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }

#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE965F20)
#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_KPOJIFDIFNJ_OFFSET UNITYSDK_OFFSET(0xE966240)
#define SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_NDDGIDFGMIG_OFFSET UNITYSDK_OFFSET(0xE965FA0)

namespace ScenenLightManager
{
	inline static constexpr unsigned int MeshRenderExportData_TypeDefinitionIndex = 49146;

	class MeshRenderExportData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* mts; // 0x10
		::System::UInt32 renderFlag; // 0x18
		::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode; // 0x1C
		::UnityEngine::ReceiveGI receiveGI; // 0x20
		::System::Boolean receiveShadows; // 0x24
		::System::Boolean allowOcclusionWhenDynamic; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt32 renderingLayerMask; // 0x28
		::System::UInt32 viewMask; // 0x2C
		::System::Void _ctor(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void NDDGIDFGMIG(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_NDDGIDFGMIG_OFFSET))(this, a1, a2);
		}

		static ::System::Void KPOJIFDIFNJ(::UnityEngine::MeshRenderer* a1)
		{
			return ((::System::Void(*)(::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_MESHRENDEREXPORTDATA_KPOJIFDIFNJ_OFFSET))(a1);
		}

	};
}
