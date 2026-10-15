#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_CCTOR_OFFSET UNITYSDK_OFFSET(0xE34F3D0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_CTOR_OFFSET UNITYSDK_OFFSET(0xE34EDB0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE34F380)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xE34F120)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleNPCView_EBAFJPCINHG_TypeDefinitionIndex = 75773;

	class ChimeraBattleNPCView_EBAFJPCINHG : public ::System::Object
	{
	public:
		::UnityEngine::Transform* EONPIKNFCDF; // 0x10
		::UnityEngine::Animator* APPGGMLEPLN; // 0x18
		::UnityEngine::Vector3 DEIMGIGLHLK; // 0x20
		static ::System::Int32* StaticGet_HEOKJKOGNBK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.UI3DGame", "EBAFJPCINHG")->GetStaticField(0x93A0);
		}

		::System::Void _ctor(::UnityEngine::Transform* a1, ::UnityEngine::Animator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLENPCVIEW_EBAFJPCINHG_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
