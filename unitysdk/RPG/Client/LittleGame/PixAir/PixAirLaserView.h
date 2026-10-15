#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/BasePixAirView.h"
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CBELJEOKIEF_OFFSET UNITYSDK_OFFSET(0xD4836B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CGOGDKMDEEE_OFFSET UNITYSDK_OFFSET(0xD483900)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD483F50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_DESTROYVIEWONLY_OFFSET UNITYSDK_OFFSET(0xD483D60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_EGBOKHNBIOK_OFFSET UNITYSDK_OFFSET(0xD483720)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_FIRE_OFFSET UNITYSDK_OFFSET(0xD483060)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_HKAJGDGNONB_OFFSET UNITYSDK_OFFSET(0xD4834B0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_HKLMOFPIFFO_OFFSET UNITYSDK_OFFSET(0xD483E00)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IAJMOBEIGPH_OFFSET UNITYSDK_OFFSET(0xD483560)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xD483220)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IONDKDPCMIH_OFFSET UNITYSDK_OFFSET(0xD483B40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_JBFHIKIKCMF_OFFSET UNITYSDK_OFFSET(0xD483C00)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_KCMHLOOPBBN_OFFSET UNITYSDK_OFFSET(0xD4838A0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_KMJEBLICEIC_OFFSET UNITYSDK_OFFSET(0xD4835C0)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD483420)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xD483BA0)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirLaserView_TypeDefinitionIndex = 77321;

	class PixAirLaserView : public ::RPG::Client::LittleGame::PixAir::BasePixAirView
	{
	public:
		::System::UInt32 FKKBIEPNBOP; // 0x38
		::System::UInt32 PNJLBAIMMJL; // 0x3C
		::System::UInt32 OKKPJEBLCHG; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::MonoEffect* LHMKLIOGKHA; // 0x48
		::RPG::Client::MonoEffect* JOCLKJEGBJN; // 0x50
		::RPG::Client::MonoEffect* GAMBIINNKJO; // 0x58
		::UnityEngine::Transform* HKJLKMCDMGB; // 0x60
		::UnityEngine::Transform* IBLBKLNHKLL; // 0x68
		::System::Boolean CNCIPGOEIHC; // 0x70
		::System::Boolean INFLIMBKKNC; // 0x71
		::System::Boolean ANLODIJJPEP; // 0x72
		::System::Boolean FNOPENPBAFC; // 0x73
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Fire(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::System::String* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_FIRE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 IJEPAJIMDPA(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Action* a3, ::System::Boolean a4)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IJEPAJIMDPA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void IAJMOBEIGPH(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IAJMOBEIGPH_OFFSET))(this, a1);
		}

		::System::Void CBELJEOKIEF(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CBELJEOKIEF_OFFSET))(this, a1);
		}

		::System::Void KCMHLOOPBBN(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_KCMHLOOPBBN_OFFSET))(this, a1);
		}

		::System::Boolean KMJEBLICEIC(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_KMJEBLICEIC_OFFSET))(this, a1);
		}

		::System::Void EGBOKHNBIOK(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_EGBOKHNBIOK_OFFSET))(this, a1);
		}

		::System::Boolean IONDKDPCMIH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_IONDKDPCMIH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void CGOGDKMDEEE(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_CGOGDKMDEEE_OFFSET))(this, a1);
		}

		::System::Void JBFHIKIKCMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_JBFHIKIKCMF_OFFSET))(this);
		}

		::System::Void DestroyViewOnly()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_DESTROYVIEWONLY_OFFSET))(this);
		}

		::System::Void HKAJGDGNONB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_HKAJGDGNONB_OFFSET))(this);
		}

		::System::Void HKLMOFPIFFO(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRLASERVIEW_HKLMOFPIFFO_OFFSET))(this, a1, a2, a3);
		}

	};
}
