#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class CFGFNPDJOCG;
class OGFNMNGJPIC;
namespace RPG::GameCore { class GridFightManager; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define LKJENIJEBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEF300)
#define LKJENIJEBMJ_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0xBFEF180)
#define LKJENIJEBMJ_IGNKKEBEGPJ_OFFSET UNITYSDK_OFFSET(0xBFEED40)
#define LKJENIJEBMJ_MFMJNBJJBGK_OFFSET UNITYSDK_OFFSET(0xBFEEE80)
#define LKJENIJEBMJ_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xBFEEDC0)
#define LKJENIJEBMJ__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFEEBB0)

inline static constexpr unsigned int LKJENIJEBMJ_TypeDefinitionIndex = 74352;

	class LKJENIJEBMJ : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x60
		::OGFNMNGJPIC* PMAIPJPNKMJ; // 0x68
		::UnityEngine::UI::Text* KPICPMEANJJ; // 0x70
		::CFGFNPDJOCG* PJMNKNKJOGE; // 0x78
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
