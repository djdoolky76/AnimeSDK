#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class MonoWolfBroCustomData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroPuzzleGameDataListener; }

#define JIFOOGNNDAJ_CEMMNJFEOJN_OFFSET UNITYSDK_OFFSET(0xB1EA610)
#define JIFOOGNNDAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB1E9CF0)
#define JIFOOGNNDAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1EA370)
#define JIFOOGNNDAJ_IFDJLBCOBNC_OFFSET UNITYSDK_OFFSET(0xB1EA690)
#define JIFOOGNNDAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1E9DD0)
#define JIFOOGNNDAJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1EA010)
#define JIFOOGNNDAJ_TICK_OFFSET UNITYSDK_OFFSET(0xB1EA4F0)

inline static constexpr unsigned int JIFOOGNNDAJ_TypeDefinitionIndex = 58962;

	class JIFOOGNNDAJ : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FOHLNOOAIFK; // 0x18
		::RPG::Client::MonoWolfBroCustomData* HIJOAMLICNE; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::KFELGAIGHAP* GOOKJDJGMGD; // 0x30
		::RPG::GameCore::WolfBroPuzzleGameDataListener* IGHAHBNLIJA; // 0x38
		::System::Boolean CPLCHJNPGJK; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroPuzzleGameDataListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroPuzzleGameDataListener*))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_TICK_OFFSET))(this, a1);
		}

		::System::Void IFDJLBCOBNC(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_IFDJLBCOBNC_OFFSET))(this, a1);
		}

		::System::Void CEMMNJFEOJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIFOOGNNDAJ_CEMMNJFEOJN_OFFSET))(this);
		}

	};
