#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class OIEMBOLFCBK;
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_CLEAREFFECTS_OFFSET UNITYSDK_OFFSET(0xD642570)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_CTOR_OFFSET UNITYSDK_OFFSET(0xD642A30)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_LOADMESH_OFFSET UNITYSDK_OFFSET(0xD641DC0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD6429E0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER__GETMONOEFFECTSERVICE_OFFSET UNITYSDK_OFFSET(0xD641D00)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER__PLAYEFFECTS_OFFSET UNITYSDK_OFFSET(0xD642790)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftObtainMechAdapter_TypeDefinitionIndex = 79970;

	class MechCraftObtainMechAdapter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Playables::PlayableDirector* _PlayableDirector; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* _ShowingEffects; // 0x20
		::OIEMBOLFCBK* _MonoEffectService; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_CTOR_OFFSET))(this);
		}

		::OIEMBOLFCBK* _GetMonoEffectService()
		{
			return ((::OIEMBOLFCBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER__GETMONOEFFECTSERVICE_OFFSET))(this);
		}

		::System::Void LoadMesh(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Collections::Generic::List_1<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_LOADMESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ClearEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_CLEAREFFECTS_OFFSET))(this);
		}

		::System::Void _PlayEffects(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER__PLAYEFFECTS_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTOBTAINMECHADAPTER_ONDESTROY_OFFSET))(this);
		}

	};
}
