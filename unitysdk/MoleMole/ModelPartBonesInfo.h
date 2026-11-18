#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MODELPARTBONESINFO_ANIMATORREBIND_OFFSET UNITYSDK_OFFSET(0x14AF67A0)
#define MOLEMOLE_MODELPARTBONESINFO_BEBMLJIEDKK_OFFSET UNITYSDK_OFFSET(0x14AF6560)
#define MOLEMOLE_MODELPARTBONESINFO_EXPORTSKINNEDMESHRENDERERBONESINFO_OFFSET UNITYSDK_OFFSET(0x14AF56C0)
#define MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_1_OFFSET UNITYSDK_OFFSET(0x14AF6080)
#define MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_OFFSET UNITYSDK_OFFSET(0x14AF5B80)
#define MOLEMOLE_MODELPARTBONESINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF6980)

namespace MoleMole
{
	inline static constexpr unsigned int ModelPartBonesInfo_TypeDefinitionIndex = 65318;

	class ModelPartBonesInfo : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* rootBoneName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* boneNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO__CTOR_OFFSET))(this);
		}

		::System::Void ExportSkinnedMeshRendererBonesInfo(::UnityEngine::SkinnedMeshRenderer* DDCKPCOODAM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_EXPORTSKINNEDMESHRENDERERBONESINFO_OFFSET))(this, DDCKPCOODAM);
		}

		::System::Void RebindBones(::UnityEngine::SkinnedMeshRenderer* DDCKPCOODAM, ::UnityEngine::Transform* FECLBPANOFP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_OFFSET))(this, DDCKPCOODAM, FECLBPANOFP);
		}

		::System::Void RebindBones_1(::UnityEngine::SkinnedMeshRenderer* DDCKPCOODAM, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* CBPNILENKEO)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinnedMeshRenderer*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_REBINDBONES_1_OFFSET))(this, DDCKPCOODAM, CBPNILENKEO);
		}

		::System::Void AnimatorRebind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_ANIMATORREBIND_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Transform*>* BEBMLJIEDKK(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* CBPNILENKEO, ::System::Collections::Generic::List_1<::System::String*>* ILHELKHDKMB)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MODELPARTBONESINFO_BEBMLJIEDKK_OFFSET))(this, CBPNILENKEO, ILHELKHDKMB);
		}
	};
}
