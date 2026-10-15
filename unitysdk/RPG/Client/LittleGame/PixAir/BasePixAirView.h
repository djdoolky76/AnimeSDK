#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class BCLKDMAHONE;
class NJKFCOIBIOK;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::PixAir { class BasePixAirView; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ADD_DESTROYED_OFFSET UNITYSDK_OFFSET(0xD470F40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BINDMESSAGE_OFFSET UNITYSDK_OFFSET(0xD4711D0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BIND_OFFSET UNITYSDK_OFFSET(0xD471220)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD471340)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xD471260)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_GETROOT_OFFSET UNITYSDK_OFFSET(0xD471040)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xD471090)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_LHJBPEBMKDN_OFFSET UNITYSDK_OFFSET(0xD471190)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4712E0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_REMOVE_DESTROYED_OFFSET UNITYSDK_OFFSET(0xD470FC0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int BasePixAirView_TypeDefinitionIndex = 77316;

	class BasePixAirView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* Destroyed; // 0x18
		::BCLKDMAHONE* CFKHNPGEAJA; // 0x20
		::System::Boolean LINNHMPNCJG; // 0x28
		::System::Byte _padding0[0x7];
		::NJKFCOIBIOK* JDILNDANFCO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_CTOR_OFFSET))(this);
		}

		::System::Void add_Destroyed(::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ADD_DESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_Destroyed(::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::PixAir::BasePixAirView*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_REMOVE_DESTROYED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_GETROOT_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void LHJBPEBMKDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_LHJBPEBMKDN_OFFSET))(this);
		}

		::System::Void BindMessage(::NJKFCOIBIOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJKFCOIBIOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BINDMESSAGE_OFFSET))(this, a1);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_BIND_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_BASEPIXAIRVIEW_ONDESTROY_OFFSET))(this);
		}

	};
}
