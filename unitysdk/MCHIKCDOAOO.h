#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }
namespace RPG::GameCore { class LevelNPCInfoOverride; }

#define MCHIKCDOAOO_ALJMMMPJABO_OFFSET UNITYSDK_OFFSET(0xC0E6180)
#define MCHIKCDOAOO_BDFFIOOCKJG_OFFSET UNITYSDK_OFFSET(0xC0E6280)
#define MCHIKCDOAOO_DIIFDCFLBND_OFFSET UNITYSDK_OFFSET(0xC0E6310)
#define MCHIKCDOAOO_IGKEIFOPGIE_OFFSET UNITYSDK_OFFSET(0xC0E5B50)
#define MCHIKCDOAOO_JFIEPNEJBEO_OFFSET UNITYSDK_OFFSET(0xC0E6210)
#define MCHIKCDOAOO_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0xC0E5980)

inline static constexpr unsigned int MCHIKCDOAOO_TypeDefinitionIndex = 57715;

	class MCHIKCDOAOO : public ::System::Object
	{
	public:
		static ::System::Void KDPEDNKCMEB(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_KDPEDNKCMEB_OFFSET))(a1, a2);
		}

		static ::System::Void IGKEIFOPGIE(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_IGKEIFOPGIE_OFFSET))(a1, a2);
		}

		static ::System::Void ALJMMMPJABO(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_ALJMMMPJABO_OFFSET))(a1, a2);
		}

		static ::System::Void JFIEPNEJBEO(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_JFIEPNEJBEO_OFFSET))(a1, a2);
		}

		static ::System::Void BDFFIOOCKJG(::RPG::GameCore::LevelNPCInfoOverride* a1, ::RPG::Client::MapNpcDef* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::LevelNPCInfoOverride*, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_BDFFIOOCKJG_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LevelNPCInfoOverride* DIIFDCFLBND(::RPG::Client::MapNpcDef* a1)
		{
			return ((::RPG::GameCore::LevelNPCInfoOverride*(*)(::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + MCHIKCDOAOO_DIIFDCFLBND_OFFSET))(a1);
		}

	};
