#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABKOPPMAKPH.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define MOLEMOLE_UIMINIUIGAMECONTEXT_GET_SHOWMOVEHINT_OFFSET UNITYSDK_OFFSET(0x186D6210)
#define MOLEMOLE_UIMINIUIGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x186D6220)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniUIGameContext_TypeDefinitionIndex = 59867;

	class UIMiniUIGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_3<::System::Boolean, ::System::Int32, ::System::Action*>* OnGameEnd; // 0x28
		::System::Action* OnUIClose; // 0x30
		::Il2CppArray<::System::String*>* LightKey; // 0x38
		::System::Int32 GroupID; // 0x40
		::ABKOPPMAKPH GameType; // 0x44
		::System::Boolean TriggerGameEndCallbackOnGameWin; // 0x48
		::System::Boolean IsGroup; // 0x49
		::System::Boolean needNewbie; // 0x4A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector3 LightPos; // 0x4C
		::UnityEngine::Quaternion LightRot; // 0x58
		::System::Int32 LevelID; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_showMoveHint()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINIUIGAMECONTEXT_GET_SHOWMOVEHINT_OFFSET))(this);
		}
	};
}
