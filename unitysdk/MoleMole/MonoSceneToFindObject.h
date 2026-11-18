#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/MonoSceneObjectBase.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOREALRESET_OFFSET UNITYSDK_OFFSET(0x12B809F0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOSHOW_OFFSET UNITYSDK_OFFSET(0x12B7F190)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOSTARTRESET_OFFSET UNITYSDK_OFFSET(0x12B807A0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_DOUPDATE_OFFSET UNITYSDK_OFFSET(0x12B80270)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B80B30)
#define MOLEMOLE_MONOSCENETOFINDOBJECT_SETMAT_OFFSET UNITYSDK_OFFSET(0x12B7F1F0)
#define MOLEMOLE_MONOSCENETOFINDOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12B80D30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSceneToFindObject_TypeDefinitionIndex = 75959;

	class MonoSceneToFindObject : public ::MoleMole::MonoSceneObjectBase
	{
	public:
		::System::Int32 wayGroupID; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* matKey; // 0x40
		::Foundation::AssetRequestHandle DBBCPKDFAMH; // 0x48
		::System::Single fadeInTime; // 0x68
		::System::Single fadeOutTime; // 0x6C
		::System::String* FadeInCurveKey; // 0x70
		::System::String* FadeOutCurveKey; // 0x78
		::System::Boolean showOutline; // 0x80
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* NCMIEMAFBEA; // 0x88
		::UnityEngine::AnimationCurve* KNMLMBHEMJA; // 0x90
		::System::Single LPBFDMMMKAH; // 0x98
		::System::Single ALOCBAAPNCD; // 0x9C
		::System::Single FBBLGDICHOE; // 0xA0
		::System::Boolean MBHCDOGGJLG; // 0xA4
		::System::Boolean OCNGKILBDGA; // 0xA5
		::System::Byte _padding2[0x2];
		::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* COIHPIODHDL; // 0xA8
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* AEPONOJONAA; // 0xB0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* HGBELKMBPJO; // 0xB8
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* MEAOMAMKOEP; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void DoShow(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOSHOW_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Void SetMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_SETMAT_OFFSET))(this);
		}

		::System::Void DoStartReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOSTARTRESET_OFFSET))(this);
		}

		::System::Void DoRealReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOREALRESET_OFFSET))(this);
		}

		::System::Void DoUpdate(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_DOUPDATE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCENETOFINDOBJECT_ONDESTROY_OFFSET))(this);
		}
	};
}
