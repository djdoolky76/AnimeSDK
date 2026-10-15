#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class IIMKPMNCFFI;
class JPHCGLNOHHL;
class MGJOAOHPFBO;
namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class MonoTravelShipController; }
namespace RPG::Client { class TravelShipPuzzleBoard; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define GPGDJDKKHNE_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x15B4D140)
#define GPGDJDKKHNE_CCKJJOCLPHI_OFFSET UNITYSDK_OFFSET(0x15B4D150)
#define GPGDJDKKHNE_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15B4C740)
#define GPGDJDKKHNE_CINOHIMAPDC_OFFSET UNITYSDK_OFFSET(0x15B4C8A0)
#define GPGDJDKKHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B4C590)
#define GPGDJDKKHNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B4C610)
#define GPGDJDKKHNE_DMAIHDDADBH_OFFSET UNITYSDK_OFFSET(0x15B4C920)
#define GPGDJDKKHNE_GFGONBPODFK_OFFSET UNITYSDK_OFFSET(0x15B4D1A0)
#define GPGDJDKKHNE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15B4C7A0)
#define GPGDJDKKHNE_JMOALKAOPBJ_OFFSET UNITYSDK_OFFSET(0x15B4D220)
#define GPGDJDKKHNE_KEMMKAEGNAD_OFFSET UNITYSDK_OFFSET(0x15B4CC20)
#define GPGDJDKKHNE_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15B4C660)
#define GPGDJDKKHNE_LFAAEANCCFM_OFFSET UNITYSDK_OFFSET(0x15B4C8E0)
#define GPGDJDKKHNE_MENMHDNIBLA_OFFSET UNITYSDK_OFFSET(0x15B4C860)
#define GPGDJDKKHNE_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x15B4C800)
#define GPGDJDKKHNE_OOOBKMCDGCE_OFFSET UNITYSDK_OFFSET(0x15B4CB90)

inline static constexpr unsigned int GPGDJDKKHNE_TypeDefinitionIndex = 68793;

	class GPGDJDKKHNE : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JCCHOIPFHHD; // 0x10
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x18
		::UnityEngine::Transform* PDJGEDNLBKJ; // 0x20
		::RPG::Client::MonoTravelShipController* CEODOONOFBM; // 0x28
		::MGJOAOHPFBO* EFGGDNKIPNM; // 0x30
		::UnityEngine::Vector3 OPGACHANGIN; // 0x38
		// static const ::System::String* ADODJJMPFLG; // 0x0
		// static const ::System::String* KIDLMBBKDII; // 0x0
		// static const ::System::String* MCMACMIKAOE; // 0x0
		// static const ::System::String* OMNBAJKBGOI; // 0x0
		// static const ::System::String* IDJMLNDKLHP; // 0x0
		// static const ::System::String* BFBIPGEBDEH; // 0x0
		// static const ::System::String* PBMMBEMINGB; // 0x0
		// static const ::System::String* NAHNKMGJPMH; // 0x0
		// static const ::System::String* PHOFBPNENLG; // 0x0
		// static const ::System::String* CJLJIOGMLEC; // 0x0
		// static const ::System::String* MNIPJCGDPLC; // 0x0
		// static const ::System::String* EGHLFPNFBBJ; // 0x0
		// static const ::System::String* AEPNBKKNMGO; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void MENMHDNIBLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_MENMHDNIBLA_OFFSET))(this);
		}

		::System::Void CINOHIMAPDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_CINOHIMAPDC_OFFSET))(this);
		}

		::System::Void LFAAEANCCFM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_LFAAEANCCFM_OFFSET))(this);
		}

		::System::Void DMAIHDDADBH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_DMAIHDDADBH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 OOOBKMCDGCE(::RPG::Client::ClientInputData* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::ClientInputData*))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_OOOBKMCDGCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 KEMMKAEGNAD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_KEMMKAEGNAD_OFFSET))(this, a1);
		}

		::RPG::Client::ETravelShipState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_BGDKFHEBDFJ_OFFSET))(this);
		}

		::RPG::Client::TravelShipPuzzleBoard* CCKJJOCLPHI()
		{
			return ((::RPG::Client::TravelShipPuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_CCKJJOCLPHI_OFFSET))(this);
		}

		::JPHCGLNOHHL* GFGONBPODFK()
		{
			return ((::JPHCGLNOHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_GFGONBPODFK_OFFSET))(this);
		}

		::IIMKPMNCFFI* JMOALKAOPBJ()
		{
			return ((::IIMKPMNCFFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGDJDKKHNE_JMOALKAOPBJ_OFFSET))(this);
		}

	};
