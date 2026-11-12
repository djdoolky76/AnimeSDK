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

#define CFGFNPDJOCG_ABAJEOOBKGJ_OFFSET UNITYSDK_OFFSET(0xD38BF10)
#define CFGFNPDJOCG_CBDJKPPNMDC_OFFSET UNITYSDK_OFFSET(0xD5F6E30)
#define CFGFNPDJOCG_CTOR_OFFSET UNITYSDK_OFFSET(0xD5F70B0)
#define CFGFNPDJOCG_EGJBBLAKFII_OFFSET UNITYSDK_OFFSET(0xD5F6B90)
#define CFGFNPDJOCG_EKDPIMDHNKG_OFFSET UNITYSDK_OFFSET(0xD5F6990)
#define CFGFNPDJOCG_HFOKMLIJFDK_OFFSET UNITYSDK_OFFSET(0xD5F6F30)
#define CFGFNPDJOCG_MFMJNBJJBGK_OFFSET UNITYSDK_OFFSET(0xD5F6D00)
#define CFGFNPDJOCG_NCFEKDJIIEC_OFFSET UNITYSDK_OFFSET(0xD5F6720)
#define CFGFNPDJOCG_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xD38BF60)
#define CFGFNPDJOCG__ONBIND_OFFSET UNITYSDK_OFFSET(0xD38BC40)

inline static constexpr unsigned int CFGFNPDJOCG_TypeDefinitionIndex = 74353;

	class CFGFNPDJOCG : public ::FMPCODLIOLG
	{
	public:
		::FJBPDJBJLFI* PDMFHIOOPPC; // 0x60
		::UnityEngine::UI::Image* LKAOENJHMHA; // 0x68
		::FFLFKJJLJEJ* AKEKCBLCBEK; // 0x70
		::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x78
		::OGFNMNGJPIC* PMAIPJPNKMJ; // 0x80
		::JDNDFEHHDEM* KKLCOJIEDOB; // 0x88
		::BJHCEHANJOK* EMKMNPJDEPI; // 0x90
		::RPG::GameCore::BattleGridFightTeamTraitData* ENFAMOIAMGL; // 0x98
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
