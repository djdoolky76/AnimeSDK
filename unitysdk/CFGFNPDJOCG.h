#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class BJHCEHANJOK;
class FFLFKJJLJEJ;
class FJBPDJBJLFI;
class JDNDFEHHDEM;
class OGFNMNGJPIC;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CFGFNPDJOCG_ABAJEOOBKGJ_OFFSET UNITYSDK_OFFSET(0xCA1A810)
#define CFGFNPDJOCG_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xCA1AF50)
#define CFGFNPDJOCG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC445E0)
#define CFGFNPDJOCG_EGJBBLAKFII_OFFSET UNITYSDK_OFFSET(0xCA1ACC0)
#define CFGFNPDJOCG_EKDPIMDHNKG_OFFSET UNITYSDK_OFFSET(0xCA1AAC0)
#define CFGFNPDJOCG_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0xCC44460)
#define CFGFNPDJOCG_MFMJNBJJBGK_OFFSET UNITYSDK_OFFSET(0xCA1AE20)
#define CFGFNPDJOCG_NCFEKDJIIEC_OFFSET UNITYSDK_OFFSET(0xCA1A8D0)
#define CFGFNPDJOCG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCA1A860)
#define CFGFNPDJOCG__ONBIND_OFFSET UNITYSDK_OFFSET(0xCA1A600)

inline static constexpr unsigned int CFGFNPDJOCG_TypeDefinitionIndex = 72276;

	class CFGFNPDJOCG : public ::FMPCODLIOLG
	{
	public:
		::FFLFKJJLJEJ* AKEKCBLCBEK; // 0x60
		::OGFNMNGJPIC* PMAIPJPNKMJ; // 0x68
		::FJBPDJBJLFI* PDMFHIOOPPC; // 0x70
		::JDNDFEHHDEM* KKLCOJIEDOB; // 0x78
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x80
		::RPG::GameCore::BattleGridFightTeamTraitData* ENFAMOIAMGL; // 0x88
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x90
		::BJHCEHANJOK* EMKMNPJDEPI; // 0x98
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG__ONBIND_OFFSET))(this);
		}

		::UnityEngine::GameObject* ABAJEOOBKGJ()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_ABAJEOOBKGJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::OGFNMNGJPIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGFNMNGJPIC*))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void NCFEKDJIIEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_NCFEKDJIIEC_OFFSET))(this);
		}

		::System::Void EKDPIMDHNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_EKDPIMDHNKG_OFFSET))(this);
		}

		::System::Void EGJBBLAKFII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_EGJBBLAKFII_OFFSET))(this);
		}

		::System::Void MFMJNBJJBGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_MFMJNBJJBGK_OFFSET))(this);
		}

		::System::Void CBDJKPPNMDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_CBDJKPPNMDC_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightManager* HFOKMLIJFDK()
		{
			return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGFNPDJOCG_HFOKMLIJFDK_OFFSET))(this);
		}

	};
