#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGLCCLCLNHC;
class GOIKJCHFIIO;
class OCHKLGBDMLP;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole::MiniGame::TartarusHounds::View { class ViewEntityPlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x14AF3F70)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x14AF3B90)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_OPEN_OFFSET UNITYSDK_OFFSET(0x14AF3E20)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_SETTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x14AF4230)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14AF40C0)
#define MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF43E0)

namespace MoleMole::MiniGame::TartarusHounds::View
{
	inline static constexpr unsigned int ViewPlayerShadowManager_TypeDefinitionIndex = 47946;

	class ViewPlayerShadowManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::OCHKLGBDMLP*>* ctrls; // 0x10
		::System::Int32 maxShadow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer* parentCtrl, ::UnityEngine::Transform* oriTrans, ::GOIKJCHFIIO* resourceProxy, ::DGLCCLCLNHC* logicGame, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* gos, ::System::Int32 startIndex)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::View::ViewEntityPlayer*, ::UnityEngine::Transform*, ::GOIKJCHFIIO*, ::DGLCCLCLNHC*, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_INIT_OFFSET))(this, parentCtrl, oriTrans, resourceProxy, logicGame, gos, startIndex);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void Update(::System::Single dt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_UPDATE_OFFSET))(this, dt);
		}

		::System::Void SetTextureSheetData(::MoleMole::TextureSheetData* data)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*))((::PBYTE)hIl2Cpp + MOLEMOLE_MINIGAME_TARTARUSHOUNDS_VIEW_VIEWPLAYERSHADOWMANAGER_SETTEXTURESHEETDATA_OFFSET))(this, data);
		}
	};
}
