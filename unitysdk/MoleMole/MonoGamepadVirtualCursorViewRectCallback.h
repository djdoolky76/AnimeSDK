#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_GET_ONMOVECONTENT_OFFSET UNITYSDK_OFFSET(0x135BB490)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_1_OFFSET UNITYSDK_OFFSET(0x135BB540)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_OFFSET UNITYSDK_OFFSET(0x135BB4B0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_SET_ONMOVECONTENT_OFFSET UNITYSDK_OFFSET(0x135BB4A0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x135BB5E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursorViewRectCallback_TypeDefinitionIndex = 51835;

	class MonoGamepadVirtualCursorViewRectCallback : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* _IKCKIBKEEIC_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK__CTOR_OFFSET))(this);
		}

		::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* get_OnMoveContent()
		{
			return ((::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_GET_ONMOVECONTENT_OFFSET))(this);
		}

		::System::Void set_OnMoveContent(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_SET_ONMOVECONTENT_OFFSET))(this, EGEGIMGMJHN);
		}

		::UnityEngine::Vector2 MoveContent(::UnityEngine::Vector2 MKEMGDKMLAN)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_OFFSET))(this, MKEMGDKMLAN);
		}

		::UnityEngine::Vector2 MoveContent_1(::UnityEngine::Vector2 MKEMGDKMLAN, ::System::Boolean BCCNHOLPJJA)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSORVIEWRECTCALLBACK_MOVECONTENT_1_OFFSET))(this, MKEMGDKMLAN, BCCNHOLPJJA);
		}
	};
}
