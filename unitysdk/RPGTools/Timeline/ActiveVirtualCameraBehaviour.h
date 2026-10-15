#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::GameCore { class VCameraBlend; }
namespace RPGTools::Timeline { class ActiveVirtualCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_BOBNJFKAJDC_OFFSET UNITYSDK_OFFSET(0xE8A97E0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xE8A9190)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8AA570)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_DIJDNJPMIFF_OFFSET UNITYSDK_OFFSET(0xE8A9D90)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_EFLNDNGCCGN_OFFSET UNITYSDK_OFFSET(0xE8A95B0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_EPLAMACOAKJ_OFFSET UNITYSDK_OFFSET(0xE8A9E10)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_FOILLOKMKPG_OFFSET UNITYSDK_OFFSET(0xE8AA260)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_GET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xE8A9170)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_JHDMCEEOBPJ_OFFSET UNITYSDK_OFFSET(0xE8A9BC0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_KFDIOGHHHLK_OFFSET UNITYSDK_OFFSET(0xE8A9B10)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_LFGNAPBBOGK_OFFSET UNITYSDK_OFFSET(0xE8AA4D0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_MNHBGJMJLPM_OFFSET UNITYSDK_OFFSET(0xE8AA1E0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_PDOOLECJLHI_OFFSET UNITYSDK_OFFSET(0xE8A9930)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_SET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0xE8A9180)

namespace RPGTools::Timeline
{
	class ActiveVirtualCameraBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::RPGTools::Timeline::ActiveVirtualCameraConfig* CameraConfig; // 0x20
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x28
		::System::Int32 _StreamingSourceIndex_k__BackingField; // 0x30
		// static const ::System::Object NEAR_PLANE; // 0x0
		// static const ::System::Object FAR_PLANE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Int32 get_StreamingSourceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_GET_STREAMINGSOURCEINDEX_OFFSET))(this);
		}

		::System::Void set_StreamingSourceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_SET_STREAMINGSOURCEINDEX_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_CLJEBKODGHK_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* BOBNJFKAJDC()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_BOBNJFKAJDC_OFFSET))(this);
		}

		::System::Void MNHBGJMJLPM(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_MNHBGJMJLPM_OFFSET))(this, a1);
		}

		::System::Void FOILLOKMKPG(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_FOILLOKMKPG_OFFSET))(this, a1);
		}

		::System::Void EPLAMACOAKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_EPLAMACOAKJ_OFFSET))(this);
		}

		::System::Void PDOOLECJLHI(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_PDOOLECJLHI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>* LFGNAPBBOGK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CameraBlendCurve*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_LFGNAPBBOGK_OFFSET))(this);
		}

		::UnityEngine::GameObject* EFLNDNGCCGN(::System::String* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_EFLNDNGCCGN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Camera* DIJDNJPMIFF()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_DIJDNJPMIFF_OFFSET))(this);
		}

		::System::Void KFDIOGHHHLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_KFDIOGHHHLK_OFFSET))(this);
		}

		::System::Void JHDMCEEOBPJ(::System::String* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::GameObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERABEHAVIOUR_JHDMCEEOBPJ_OFFSET))(this, a1, a2, a3);
		}

	};
}
