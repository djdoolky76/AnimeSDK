#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPGDJDKKHNE.h"
#include "unitysdk/RPG/Client/ETravelShipState.h"
#include "unitysdk/System/Nullable_1.h"
class MGJOAOHPFBO;
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }

#define JFFIOJBIEBM_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xB995840)
#define JFFIOJBIEBM_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0xB994E00)
#define JFFIOJBIEBM_CTOR_OFFSET UNITYSDK_OFFSET(0xB994710)
#define JFFIOJBIEBM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB994790)
#define JFFIOJBIEBM_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0xB9948D0)
#define JFFIOJBIEBM_MENMHDNIBLA_OFFSET UNITYSDK_OFFSET(0xB995800)
#define JFFIOJBIEBM_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0xB994FD0)

inline static constexpr unsigned int JFFIOJBIEBM_TypeDefinitionIndex = 70747;

	class JFFIOJBIEBM : public ::GPGDJDKKHNE
	{
	public:
		::System::Single HBDJCFFDGDD; // 0x48
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::MGJOAOHPFBO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MGJOAOHPFBO*))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KIGBILLGNOH(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_KIGBILLGNOH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL(::System::Nullable_1<::RPG::Client::ETravelShipState> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::ETravelShipState>))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void MENMHDNIBLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_MENMHDNIBLA_OFFSET))(this);
		}

		::RPG::Client::ETravelShipState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::ETravelShipState(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFIOJBIEBM_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
