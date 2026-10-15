#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace RPG::Client { class OffScreenCanvas; }
namespace RPG::Client { class OffScreenCanvas_GOMNKGFEAHJ; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class RenderTexture; }

#define RPG_CLIENT_OFFSCREENCANVAS_CGAMMFHOLPG_OFFSET UNITYSDK_OFFSET(0xD9DEED0)
#define RPG_CLIENT_OFFSCREENCANVAS_CPGODLFKMEN_OFFSET UNITYSDK_OFFSET(0xD9DD640)
#define RPG_CLIENT_OFFSCREENCANVAS_CTOR_OFFSET UNITYSDK_OFFSET(0xD9DFF90)
#define RPG_CLIENT_OFFSCREENCANVAS_FBCONDMMADF_OFFSET UNITYSDK_OFFSET(0xD9DFF20)
#define RPG_CLIENT_OFFSCREENCANVAS_GFOGDDEMDKB_OFFSET UNITYSDK_OFFSET(0xD9DF800)
#define RPG_CLIENT_OFFSCREENCANVAS_JAEHPFHLHAB_OFFSET UNITYSDK_OFFSET(0xD9DDB40)
#define RPG_CLIENT_OFFSCREENCANVAS_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD9DE000)
#define RPG_CLIENT_OFFSCREENCANVAS_NFHFHKNICAI_OFFSET UNITYSDK_OFFSET(0xD9DF690)
#define RPG_CLIENT_OFFSCREENCANVAS_OMLBBKOLODP_OFFSET UNITYSDK_OFFSET(0xD9DD820)
#define RPG_CLIENT_OFFSCREENCANVAS_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD9DF4A0)
#define RPG_CLIENT_OFFSCREENCANVAS_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD9DD180)
#define RPG_CLIENT_OFFSCREENCANVAS_UPDATERENDERINGLAYERMASK_OFFSET UNITYSDK_OFFSET(0xD9DD6F0)

namespace RPG::Client
{
	inline static constexpr unsigned int OffScreenCanvas_TypeDefinitionIndex = 72620;

	class OffScreenCanvas : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Mesh* sharedMesh; // 0x18
		::System::Int32 sortingOrder; // 0x20
		::System::Boolean m_UI3D; // 0x24
		::System::Byte _padding0[0x3];
		::System::Single FOV; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Material* m_3DMaterial; // 0x30
		::UnityEngine::Canvas* IOBMLODJAJG; // 0x38
		::UnityEngine::Camera* KGNCLFHCPBM; // 0x40
		::UnityEngine::RenderTexture* GMBNAHJNIHN; // 0x48
		::System::Int32 LHLHPIKIDLJ; // 0x50
		::System::Byte _padding2[0x4];
		::UnityEngine::Camera* JGNJKCFMFAN; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* HJBIJPKAJNG; // 0x60
		::RPG::Client::OffScreenCanvas_GOMNKGFEAHJ* GCBMHAAOANI; // 0x68
		static ::Il2CppArray<::RPG::Client::OffScreenCanvas*>** StaticGet_IPGKOOHKCEG()
		{
			return (::Il2CppArray<::RPG::Client::OffScreenCanvas*>**)UnitySDK::FromName("RPG.Client", "OffScreenCanvas")->GetStaticField(0x2770);
		}

		static ::UnityEngine::Material** StaticGet_AGOJJMCKENP()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("RPG.Client", "OffScreenCanvas")->GetStaticField(0x2778);
		}

		static ::System::Int32* StaticGet_GJOLBPEADDF()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "OffScreenCanvas")->GetStaticField(0x1FA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_ONENABLE_OFFSET))(this);
		}

		::System::Void JAEHPFHLHAB(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_JAEHPFHLHAB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateRenderingLayerMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_UPDATERENDERINGLAYERMASK_OFFSET))(this);
		}

		::System::Void CPGODLFKMEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CPGODLFKMEN_OFFSET))(this);
		}

		::System::Void GFOGDDEMDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_GFOGDDEMDKB_OFFSET))(this);
		}

		::System::Void OMLBBKOLODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_OMLBBKOLODP_OFFSET))(this);
		}

		::System::Void CGAMMFHOLPG(::UnityEngine::RectTransform* a1, ::UnityEngine::Rect a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Rect, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_CGAMMFHOLPG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NFHFHKNICAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_NFHFHKNICAI_OFFSET))(this);
		}

		::UnityEngine::Camera* FBCONDMMADF()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFSCREENCANVAS_FBCONDMMADF_OFFSET))(this);
		}

	};
}
