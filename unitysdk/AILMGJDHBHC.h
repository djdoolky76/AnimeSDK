#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define AILMGJDHBHC_AKBIKLJIBHO_OFFSET UNITYSDK_OFFSET(0xEBB3370)
#define AILMGJDHBHC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xEBB3730)
#define AILMGJDHBHC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xEBB3970)
#define AILMGJDHBHC_CTOR_OFFSET UNITYSDK_OFFSET(0xEBB3B70)
#define AILMGJDHBHC_DOFNOIEDPFN_OFFSET UNITYSDK_OFFSET(0xEBB31F0)
#define AILMGJDHBHC_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xEBB3060)
#define AILMGJDHBHC_KGDIPFNECJH_OFFSET UNITYSDK_OFFSET(0xEBB3270)
#define AILMGJDHBHC_LJDOJCKMMDD_OFFSET UNITYSDK_OFFSET(0xEBB3620)
#define AILMGJDHBHC_NECEALBHFAB_OFFSET UNITYSDK_OFFSET(0xEBB35E0)
#define AILMGJDHBHC_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0xEBB3320)
#define AILMGJDHBHC__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBB2FB0)

inline static constexpr unsigned int AILMGJDHBHC_TypeDefinitionIndex = 71843;

	class AILMGJDHBHC : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::UnityEngine::UI::Button* FIOKDNAFFBF; // 0x68
		::UnityEngine::UI::Text* HNKGKMAIIJC; // 0x70
		::System::Boolean AKBPNMEFGAO; // 0x78
		// static const ::System::String* KDODNCFEJFD; // 0x0
		// static const ::System::String* NMHICHPNEHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void DOFNOIEDPFN(::RPG::GameCore::LevelGameModeStateChanged* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + AILMGJDHBHC_DOFNOIEDPFN_OFFSET))(this, a1);
		}

		::System::Void KGDIPFNECJH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AILMGJDHBHC_KGDIPFNECJH_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AILMGJDHBHC_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void AKBIKLJIBHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_AKBIKLJIBHO_OFFSET))(this);
		}

		::System::Boolean NECEALBHFAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_NECEALBHFAB_OFFSET))(this);
		}

		::System::Void LJDOJCKMMDD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AILMGJDHBHC_LJDOJCKMMDD_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AILMGJDHBHC_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
