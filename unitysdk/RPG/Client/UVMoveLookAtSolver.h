#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UVMOVELOOKATSOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE40D260)
#define RPG_CLIENT_UVMOVELOOKATSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xE40D220)
#define RPG_CLIENT_UVMOVELOOKATSOLVER_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xE40D140)
#define RPG_CLIENT_UVMOVELOOKATSOLVER_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE40CDD0)

namespace RPG::Client
{
	class UVMoveLookAtSolver : public ::System::Object
	{
	public:
		::UnityEngine::Transform* ProxyNode; // 0x10
		::UnityEngine::Renderer* RendererNode; // 0x18
		::System::Single Radius; // 0x20
		::UnityEngine::Vector2 Range; // 0x24
		::UnityEngine::Vector2 Offset; // 0x2C
		::UnityEngine::Vector4 _UVPos; // 0x34
		::UnityEngine::Vector3 _ObjPos; // 0x44
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x50
		static ::System::Int32* StaticGet__MainTexSTShaderProperty()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "UVMoveLookAtSolver")->GetStaticField(0x10000);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_CCTOR_OFFSET))();
		}

		::System::Void PAGKOAEOLKA(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UVMOVELOOKATSOLVER_KHGIKBFDLFB_OFFSET))(this);
		}

	};
}
