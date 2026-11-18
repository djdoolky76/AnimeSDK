#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MatAnimationData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::UI { class MaskableGraphic; }

#define MOLEMOLE_UIMATERIALANIMATION_EEJMPIFGAPK_OFFSET UNITYSDK_OFFSET(0x18818740)
#define MOLEMOLE_UIMATERIALANIMATION_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x188177F0)
#define MOLEMOLE_UIMATERIALANIMATION_GHODDJPFIDL_OFFSET UNITYSDK_OFFSET(0x18817CE0)
#define MOLEMOLE_UIMATERIALANIMATION_HOCIPPOJOPJ_OFFSET UNITYSDK_OFFSET(0x188180D0)
#define MOLEMOLE_UIMATERIALANIMATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18817DE0)
#define MOLEMOLE_UIMATERIALANIMATION_MBHJJNFNGPE_OFFSET UNITYSDK_OFFSET(0x18818310)
#define MOLEMOLE_UIMATERIALANIMATION_PLAYDEFAULTBYLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x188173D0)
#define MOLEMOLE_UIMATERIALANIMATION_PLAYUIMATANIBYLOAD_OFFSET UNITYSDK_OFFSET(0x18817440)
#define MOLEMOLE_UIMATERIALANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18818600)

namespace MoleMole
{
	inline static constexpr unsigned int UIMaterialAnimation_TypeDefinitionIndex = 74314;

	class UIMaterialAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::MatAnimationData*>* Property; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::MatAnimationData*>* ApplyProperty; // 0x20
		::System::String* animationName; // 0x28
		::UnityEngine::UI::MaskableGraphic* AAGKJDGBJHI; // 0x30
		::UnityEngine::Material* HFPHHEMPFDL; // 0x38
		::Foundation::AssetRequestHandle HOAIDAHPKEC; // 0x40
		::UnityEngine::MeshRenderer* EGEPFJKNFAA; // 0x60
		::UnityEngine::MaterialPropertyBlock* HGDFLAEBCGA; // 0x68
		::UnityEngine::Animation* EEFOCCNFJCO; // 0x70
		::System::Boolean FILEKDINJHN; // 0x78
		::System::Byte _padding0[0x3];
		::System::Single PPGBCKJGDGP; // 0x7C
		::System::Single FFGCNMOODNC; // 0x80
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* CLHOMDMIACO; // 0x88
		::UnityEngine::Color JEJOGJNBEOL; // 0x90
		::System::Boolean FOBHALIGGIK; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION__CTOR_OFFSET))(this);
		}

		::System::Single PlayDefaultByLoadMaterial(::System::String* CJBJONJDOLI)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_PLAYDEFAULTBYLOADMATERIAL_OFFSET))(this, CJBJONJDOLI);
		}

		::System::Single PlayUIMatAniByLoad(::System::String* LIPIPGHBHFH, ::System::String* DPMDHOFOMIE)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_PLAYUIMATANIBYLOAD_OFFSET))(this, LIPIPGHBHFH, DPMDHOFOMIE);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HOCIPPOJOPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_HOCIPPOJOPJ_OFFSET))(this);
		}

		::System::Void GHODDJPFIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_GHODDJPFIDL_OFFSET))(this);
		}

		::System::Void MBHJJNFNGPE(::System::String* HIAIKHDFCLN, ::System::String* OBNIAHNMHPF)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_MBHJJNFNGPE_OFFSET))(this, HIAIKHDFCLN, OBNIAHNMHPF);
		}

		::System::Void GALGFCPKMGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_GALGFCPKMGC_OFFSET))(this);
		}

		::System::Void EEJMPIFGAPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMATERIALANIMATION_EEJMPIFGAPK_OFFSET))(this);
		}
	};
}
