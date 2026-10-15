#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TEXTICONS_KMPBAAJEKPL_CTOR_OFFSET UNITYSDK_OFFSET(0xE206830)
#define RPG_CLIENT_TEXTICONS_KMPBAAJEKPL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xE202A20)

namespace RPG::Client
{
	inline static constexpr unsigned int TextIcons_KMPBAAJEKPL_TypeDefinitionIndex = 72680;

	class TextIcons_KMPBAAJEKPL : public ::System::Object
	{
	public:
		::UnityEngine::Texture* JKIJEJKCHKP; // 0x10
		::UnityEngine::CanvasRenderer* ONEFCLJPGLE; // 0x18
		::System::Int32 FGAFLJPGCNH; // 0x20
		::System::Void _ctor(::UnityEngine::Transform* a1, ::System::Int32 a2, ::UnityEngine::Texture* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_KMPBAAJEKPL_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTICONS_KMPBAAJEKPL_HADOHLNHHGB_OFFSET))(this);
		}

	};
}
