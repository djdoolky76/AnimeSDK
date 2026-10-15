#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGDJDKKHNE.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
class MGJOAOHPFBO;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Nullable; }

#define DKEBOFCEAAK_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xF877870)
#define DKEBOFCEAAK_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xF877270)
#define DKEBOFCEAAK_CTOR_OFFSET UNITYSDK_OFFSET(0xF8770E0)
#define DKEBOFCEAAK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xF877160)
#define DKEBOFCEAAK_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0xF877820)
#define DKEBOFCEAAK_MENMHDNIBLA_OFFSET UNITYSDK_OFFSET(0xF877480)

inline static constexpr unsigned int DKEBOFCEAAK_TypeDefinitionIndex = 68796;

	class DKEBOFCEAAK : public ::GPGDJDKKHNE
	{
	public:
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x48
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void KIGBILLGNOH(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void MENMHDNIBLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_MENMHDNIBLA_OFFSET))(this);
		}

		::System::Void LPFBANCOMPE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_LPFBANCOMPE_OFFSET))(this, a1);
		}

		::RPG::Client::ETravelShipState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + DKEBOFCEAAK_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
