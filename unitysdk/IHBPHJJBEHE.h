#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class AAHPFGHKBOJ;
class GNMCMJDIMAA;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define IHBPHJJBEHE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1640B4B0)
#define IHBPHJJBEHE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1640B580)
#define IHBPHJJBEHE_BBJKIDBLHKJ_OFFSET UNITYSDK_OFFSET(0x1640B330)
#define IHBPHJJBEHE_BMKEIONMBBI_OFFSET UNITYSDK_OFFSET(0x1640B0B0)
#define IHBPHJJBEHE_BNGHCKPDHMG_OFFSET UNITYSDK_OFFSET(0x1640AFD0)
#define IHBPHJJBEHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1640B620)
#define IHBPHJJBEHE_DPDOCIHLBOB_OFFSET UNITYSDK_OFFSET(0x1640B250)
#define IHBPHJJBEHE_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x1640A8F0)
#define IHBPHJJBEHE_EGIGFIFGFPG_OFFSET UNITYSDK_OFFSET(0x1640ADA0)
#define IHBPHJJBEHE_IJFAILDIANC_OFFSET UNITYSDK_OFFSET(0x1640AF00)
#define IHBPHJJBEHE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1640ABF0)
#define IHBPHJJBEHE_LLFMMFPFAKB_OFFSET UNITYSDK_OFFSET(0x1640B060)
#define IHBPHJJBEHE_MBCOPAFBENH_OFFSET UNITYSDK_OFFSET(0x1640B1D0)
#define IHBPHJJBEHE_NCEFAJHFKKG_OFFSET UNITYSDK_OFFSET(0x1640B100)
#define IHBPHJJBEHE_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0x1640B2C0)
#define IHBPHJJBEHE_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x1640AD30)
#define IHBPHJJBEHE__ONBIND_OFFSET UNITYSDK_OFFSET(0x1640A810)
#define IHBPHJJBEHE__ONTICK_OFFSET UNITYSDK_OFFSET(0x1640AA70)

inline static constexpr unsigned int IHBPHJJBEHE_TypeDefinitionIndex = 71796;

	class IHBPHJJBEHE : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x60
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x68
		::RPG::Client::LocalizedText* AGNIJEOAICD; // 0x70
		::UnityEngine::UI::Button* KJIOINOOIHP; // 0x78
		::GNMCMJDIMAA* JCMPJLEDFAA; // 0x80
		::RPG::GameCore::CharacterDataComponent* HFKMDPCLJJB; // 0x88
		::System::Boolean HJJLBHOOCJK; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IHBPHJJBEHE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_LJBCDJNNBJH_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void IJFAILDIANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_IJFAILDIANC_OFFSET))(this);
		}

		::System::Void BNGHCKPDHMG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_BNGHCKPDHMG_OFFSET))(this, a1);
		}

		::System::Void LLFMMFPFAKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_LLFMMFPFAKB_OFFSET))(this, a1);
		}

		::System::Void BMKEIONMBBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_BMKEIONMBBI_OFFSET))(this, a1);
		}

		::System::Void NCEFAJHFKKG(::AAHPFGHKBOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAHPFGHKBOJ*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_NCEFAJHFKKG_OFFSET))(this, a1);
		}

		::System::Void EGIGFIFGFPG(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_EGIGFIFGFPG_OFFSET))(this, a1);
		}

		::System::Void DPDOCIHLBOB(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_DPDOCIHLBOB_OFFSET))(this, a1);
		}

		::System::Void MBCOPAFBENH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_MBCOPAFBENH_OFFSET))(this);
		}

		::System::Void NEOFNEBLKKL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_NEOFNEBLKKL_OFFSET))(this, a1);
		}

		::System::Void BBJKIDBLHKJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_BBJKIDBLHKJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBPHJJBEHE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
