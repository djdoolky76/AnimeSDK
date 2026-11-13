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

#define CFGFNPDJOCG_ABAJEOOBKGJ_OFFSET UNITYSDK_OFFSET(0x188631C0)
#define CFGFNPDJOCG_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0x18863980)
#define CFGFNPDJOCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1781D3A0)
#define CFGFNPDJOCG_EGJBBLAKFII_OFFSET UNITYSDK_OFFSET(0x188636E0)
#define CFGFNPDJOCG_EKDPIMDHNKG_OFFSET UNITYSDK_OFFSET(0x188634F0)
#define CFGFNPDJOCG_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0x18863A80)
#define CFGFNPDJOCG_MFMJNBJJBGK_OFFSET UNITYSDK_OFFSET(0x18863850)
#define CFGFNPDJOCG_NCFEKDJIIEC_OFFSET UNITYSDK_OFFSET(0x18863280)
#define CFGFNPDJOCG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x18863210)
#define CFGFNPDJOCG__ONBIND_OFFSET UNITYSDK_OFFSET(0x18862EF0)

inline static constexpr unsigned int CFGFNPDJOCG_TypeDefinitionIndex = 74352;

	class CFGFNPDJOCG : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::BattleGridFightTeamTraitData* ENFAMOIAMGL; // 0x60
		::FFLFKJJLJEJ* AKEKCBLCBEK; // 0x68
		::BJHCEHANJOK* EMKMNPJDEPI; // 0x70
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x78
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x80
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x88
		::FJBPDJBJLFI* PDMFHIOOPPC; // 0x90
		::JDNDFEHHDEM* KKLCOJIEDOB; // 0x98
		::OGFNMNGJPIC* PMAIPJPNKMJ; // 0xA0
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
