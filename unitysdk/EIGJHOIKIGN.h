#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGDJDKKHNE.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
class MGJOAOHPFBO;
namespace RPG::Client { class MonoTravelShipChannel; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define EIGJHOIKIGN_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x154BA440)
#define EIGJHOIKIGN_BINNHFKCJHN_OFFSET UNITYSDK_OFFSET(0x154BA450)
#define EIGJHOIKIGN_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x154B9390)
#define EIGJHOIKIGN_CTOR_OFFSET UNITYSDK_OFFSET(0x154B8DF0)
#define EIGJHOIKIGN_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x154BA1C0)
#define EIGJHOIKIGN_FGONKMBCKCI_OFFSET UNITYSDK_OFFSET(0x154B9550)
#define EIGJHOIKIGN_HKDEHAIHGPJ_OFFSET UNITYSDK_OFFSET(0x154B9A60)
#define EIGJHOIKIGN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x154B94C0)
#define EIGJHOIKIGN_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x154B8E70)
#define EIGJHOIKIGN_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x154B95E0)
#define EIGJHOIKIGN_OALBJEMILBF_OFFSET UNITYSDK_OFFSET(0x154BA3E0)

inline static constexpr unsigned int EIGJHOIKIGN_TypeDefinitionIndex = 68797;

	class EIGJHOIKIGN : public ::GPGDJDKKHNE
	{
	public:
		::RPG::Client::MonoTravelShipChannel* JGFOEDIHPPN; // 0x48
		::System::Single HBDJCFFDGDD; // 0x50
		::UnityEngine::Vector3 FANDINJMNOA; // 0x54
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKDEHAIHGPJ(::RPG::Client::MonoTravelShipChannel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_HKDEHAIHGPJ_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::MonoTravelShipChannel* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoTravelShipChannel*, ::System::Boolean))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Void OALBJEMILBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_OALBJEMILBF_OFFSET))(this, a1);
		}

		::RPG::Client::ETravelShipState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_BGDKFHEBDFJ_OFFSET))(this);
		}

		::RPG::Client::MonoTravelShipChannel* BINNHFKCJHN()
		{
			return ((::RPG::Client::MonoTravelShipChannel*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_BINNHFKCJHN_OFFSET))(this);
		}

		::System::Void FGONKMBCKCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGJHOIKIGN_FGONKMBCKCI_OFFSET))(this);
		}

	};
