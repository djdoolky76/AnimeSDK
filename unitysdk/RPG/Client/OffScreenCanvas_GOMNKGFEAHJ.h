#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD9D5DA0)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_DLFKFJOLDCF_OFFSET UNITYSDK_OFFSET(0xD9D6190)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_EABHINGMBDH_OFFSET UNITYSDK_OFFSET(0xD9D62F0)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_EKFKIPLFMCM_OFFSET UNITYSDK_OFFSET(0xD9D6350)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_HABJKLPECBB_OFFSET UNITYSDK_OFFSET(0xD9D60E0)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xD9D63E0)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_LEAEJLELMLM_OFFSET UNITYSDK_OFFSET(0xD9D6270)
#define RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_MHHIGEOPHOI_OFFSET UNITYSDK_OFFSET(0xD9D5390)

namespace RPG::Client
{
	inline static constexpr unsigned int OffScreenCanvas_GOMNKGFEAHJ_TypeDefinitionIndex = 72620;

	class OffScreenCanvas_GOMNKGFEAHJ : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OKAPOOKNFAD; // 0x10
		::UnityEngine::MeshFilter* CDBIPMEMHOI; // 0x18
		::UnityEngine::MeshRenderer* AEEANFPMKGM; // 0x20
		::UnityEngine::CanvasRenderer* DJCKHMEJAJM; // 0x28
		::UnityEngine::Canvas* GAAEMCFPMMD; // 0x30
		::System::Boolean JEKBNHEILCN; // 0x38
		::System::Void _ctor(::System::Boolean a1, ::UnityEngine::Transform* a2, ::UnityEngine::Camera* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Transform*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HABJKLPECBB(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_HABJKLPECBB_OFFSET))(this, a1);
		}

		::System::Void DLFKFJOLDCF(::UnityEngine::Texture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_DLFKFJOLDCF_OFFSET))(this, a1);
		}

		::System::Void LEAEJLELMLM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_LEAEJLELMLM_OFFSET))(this, a1);
		}

		::System::Void MHHIGEOPHOI(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_MHHIGEOPHOI_OFFSET))(this, a1);
		}

		::System::Void EABHINGMBDH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_EABHINGMBDH_OFFSET))(this, a1);
		}

		::System::Void EKFKIPLFMCM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_EKFKIPLFMCM_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GOMNKGFEAHJ_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
