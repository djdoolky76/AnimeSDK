#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGDJDKKHNE.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
class MGJOAOHPFBO;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define AGGOHNMJOAF_ADBJNBFNEFC_OFFSET UNITYSDK_OFFSET(0xCF2A5D0)
#define AGGOHNMJOAF_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xCF29400)
#define AGGOHNMJOAF_CTOR_OFFSET UNITYSDK_OFFSET(0xCF289E0)
#define AGGOHNMJOAF_GKAPFAHCGME_OFFSET UNITYSDK_OFFSET(0xCF2A410)
#define AGGOHNMJOAF_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCF2A2C0)
#define AGGOHNMJOAF_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xCF28A60)
#define AGGOHNMJOAF_MBGDNJKLBBL_OFFSET UNITYSDK_OFFSET(0xCF28F90)
#define AGGOHNMJOAF_MENMHDNIBLA_OFFSET UNITYSDK_OFFSET(0xCF2A120)
#define AGGOHNMJOAF_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xCF29600)

inline static constexpr unsigned int AGGOHNMJOAF_TypeDefinitionIndex = 68794;

	class AGGOHNMJOAF : public ::GPGDJDKKHNE
	{
	public:
		::System::Nullable_1<::System::Single> IAEABGOCFCM; // 0x48
		::System::Boolean EKJHPKKDKPI; // 0x50
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void MENMHDNIBLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_MENMHDNIBLA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void MBGDNJKLBBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_MBGDNJKLBBL_OFFSET))(this, a1);
		}

		::System::Single GKAPFAHCGME()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_GKAPFAHCGME_OFFSET))(this);
		}

		::System::Single ADBJNBFNEFC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGGOHNMJOAF_ADBJNBFNEFC_OFFSET))(this, a1);
		}

	};
