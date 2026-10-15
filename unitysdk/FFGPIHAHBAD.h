#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHAEANMEFLE;
namespace RPG::Client { class TimeRewindContainerAndSeedTarget; }
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleBoard; }
namespace RPG::GameCore { class EntityTimeRewindComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FFGPIHAHBAD_COAEMMEJAIM_OFFSET UNITYSDK_OFFSET(0x15731690)
#define FFGPIHAHBAD_COGELOEIOOO_OFFSET UNITYSDK_OFFSET(0x15731560)
#define FFGPIHAHBAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15730D80)
#define FFGPIHAHBAD_DDCFCGPIDFL_OFFSET UNITYSDK_OFFSET(0x15730F70)
#define FFGPIHAHBAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15731370)
#define FFGPIHAHBAD_DKCKCGPAEHK_OFFSET UNITYSDK_OFFSET(0x15731320)
#define FFGPIHAHBAD_FBNIPFMJHKD_OFFSET UNITYSDK_OFFSET(0x15730FC0)
#define FFGPIHAHBAD_GCDCKFOMLIK_OFFSET UNITYSDK_OFFSET(0x15731140)
#define FFGPIHAHBAD_HHHJELHJNEA_OFFSET UNITYSDK_OFFSET(0x15731410)
#define FFGPIHAHBAD_LDKABPKGHDG_OFFSET UNITYSDK_OFFSET(0x15731610)

inline static constexpr unsigned int FFGPIHAHBAD_TypeDefinitionIndex = 78909;

	class FFGPIHAHBAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* MAIMBGHPIIJ; // 0x10
		::RPG::Client::TimeRewindContainerAndSeedTarget* GFKOKFOHJBI; // 0x18
		::RPG::GameCore::GameEntity* BJIIHGMHHBE; // 0x20
		::DHAEANMEFLE* PCGKMHCKMDL; // 0x28
		::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* COAMCKILKPH; // 0x30
		::System::Void _ctor(::RPG::GameCore::EntityTimeRewindComponent* a1, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityTimeRewindComponent*, ::RPG::Client::Prop::TimeRewindParterrePuzzleBoard*))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_CTOR_OFFSET))(this, a1, a2);
		}

		::DHAEANMEFLE* DDCFCGPIDFL()
		{
			return ((::DHAEANMEFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_DDCFCGPIDFL_OFFSET))(this);
		}

		::System::Void FBNIPFMJHKD(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_FBNIPFMJHKD_OFFSET))(this, a1, a2);
		}

		::System::Void GCDCKFOMLIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_GCDCKFOMLIK_OFFSET))(this, a1);
		}

		::System::Void DKCKCGPAEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_DKCKCGPAEHK_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::EntityTimeRewindComponent* HHHJELHJNEA(::System::Int32 a1)
		{
			return ((::RPG::GameCore::EntityTimeRewindComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_HHHJELHJNEA_OFFSET))(this, a1);
		}

		::System::Boolean COGELOEIOOO(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_COGELOEIOOO_OFFSET))(this, a1, a2);
		}

		::System::Boolean LDKABPKGHDG(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_LDKABPKGHDG_OFFSET))(this, a1, a2);
		}

		::System::Void COAEMMEJAIM(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FFGPIHAHBAD_COAEMMEJAIM_OFFSET))(this, a1, a2);
		}

	};
