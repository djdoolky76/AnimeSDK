#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CFGFNPDJOCG;
class OGFNMNGJPIC;
namespace RPG::GameCore { class GridFightManager; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LKJENIJEBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB74A600)
#define LKJENIJEBMJ_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0xB74A480)
#define LKJENIJEBMJ_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0xB74A040)
#define LKJENIJEBMJ_MFMJNBJJBGK_OFFSET UNITYSDK_OFFSET(0xB74A180)
#define LKJENIJEBMJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB74A0C0)
#define LKJENIJEBMJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xB749F80)

inline static constexpr unsigned int LKJENIJEBMJ_TypeDefinitionIndex = 72275;

	class LKJENIJEBMJ : public ::FMPCODLIOLG
	{
	public:
		::CFGFNPDJOCG* PJMNKNKJOGE; // 0x60
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x68
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
		::OGFNMNGJPIC* PMAIPJPNKMJ; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJENIJEBMJ_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJENIJEBMJ__ONBIND_OFFSET))(this);
		}

		::UnityEngine::GameObject* IGNKKEBEGPJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJENIJEBMJ_IGNKKEBEGPJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::OGFNMNGJPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGFNMNGJPIC*))((::PBYTE)hIl2Cpp + LKJENIJEBMJ_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MFMJNBJJBGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJENIJEBMJ_MFMJNBJJBGK_OFFSET))(this);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJENIJEBMJ_HFOKMLIJFDK_OFFSET))(this);
		}

	};
