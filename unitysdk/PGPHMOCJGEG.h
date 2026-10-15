#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
class PGPHMOCJGEG;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelLittleGameInfo; }

#define PGPHMOCJGEG_BJKMIPIOPNM_OFFSET UNITYSDK_OFFSET(0xC22ED80)
#define PGPHMOCJGEG_BOBBMNIMKCA_OFFSET UNITYSDK_OFFSET(0xC22EBE0)
#define PGPHMOCJGEG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC22E4B0)
#define PGPHMOCJGEG_CHEMIHDIDMI_OFFSET UNITYSDK_OFFSET(0xC22EA50)
#define PGPHMOCJGEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC22E750)
#define PGPHMOCJGEG_HFCCEJKEPJM_OFFSET UNITYSDK_OFFSET(0xC22E990)
#define PGPHMOCJGEG_KCJBMAHMBCG_OFFSET UNITYSDK_OFFSET(0xC22E9D0)
#define PGPHMOCJGEG_PPDLMCEFPDC_OFFSET UNITYSDK_OFFSET(0xC22E3E0)
#define PGPHMOCJGEG_PPLOEFLAGIB_OFFSET UNITYSDK_OFFSET(0xC22E430)

inline static constexpr unsigned int PGPHMOCJGEG_TypeDefinitionIndex = 64206;

	class PGPHMOCJGEG : public ::System::Object
	{
	public:
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x10
		::RPG::GameCore::LevelLittleGameInfo* LBDDDIOPJFK; // 0x18
		::RPG::Client::NavMap::ICartographer* ADFHICILFOA; // 0x20
		::System::UInt32 EBPJMCPGNDA; // 0x28
		::System::UInt32 DLDFJHOLMED; // 0x2C
		::System::UInt32 HHOPLLMEGMP; // 0x30
		::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelLittleGameInfo* a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelLittleGameInfo*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 PPDLMCEFPDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_PPDLMCEFPDC_OFFSET))(this);
		}

		::System::UInt32 PPLOEFLAGIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_PPLOEFLAGIB_OFFSET))(this);
		}

		static ::PGPHMOCJGEG* BPLPBPMEODA(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::PGPHMOCJGEG*(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::UInt32 HFCCEJKEPJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_HFCCEJKEPJM_OFFSET))(this);
		}

		::RPG::MVector3 KCJBMAHMBCG()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_KCJBMAHMBCG_OFFSET))(this);
		}

		::System::Boolean CHEMIHDIDMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_CHEMIHDIDMI_OFFSET))(this);
		}

		::RPG::Client::FindChestMarkConfig BOBBMNIMKCA()
		{
			return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_BOBBMNIMKCA_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* BJKMIPIOPNM()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGPHMOCJGEG_BJKMIPIOPNM_OFFSET))(this);
		}

	};
