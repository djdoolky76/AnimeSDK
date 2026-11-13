#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/FindChestMarkConfig.h"
#include "unitysdk/RPG/MVector3.h"
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class ICartographer; }
namespace RPG::GameCore { class LevelPropInfo; }

#define IMIIIFGHJAK_BJKMIPIOPNM_OFFSET UNITYSDK_OFFSET(0x1A5D8B10)
#define IMIIIFGHJAK_BOBBMNIMKCA_OFFSET UNITYSDK_OFFSET(0x1A5D89C0)
#define IMIIIFGHJAK_CHEMIHDIDMI_OFFSET UNITYSDK_OFFSET(0x1A5D8840)
#define IMIIIFGHJAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D8590)
#define IMIIIFGHJAK_HFCCEJKEPJM_OFFSET UNITYSDK_OFFSET(0x1A5D8770)
#define IMIIIFGHJAK_KCJBMAHMBCG_OFFSET UNITYSDK_OFFSET(0x1A5D87C0)
#define IMIIIFGHJAK_MGOGPIGEHOF_OFFSET UNITYSDK_OFFSET(0x1A5D84C0)
#define IMIIIFGHJAK_PPLOEFLAGIB_OFFSET UNITYSDK_OFFSET(0x1A5D8510)

inline static constexpr unsigned int IMIIIFGHJAK_TypeDefinitionIndex = 65650;

	class IMIIIFGHJAK : public ::System::Object
	{
	public:
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x10
		::RPG::GameCore::LevelPropInfo* JDHJLHKFKHN; // 0x18
		::RPG::Client::NavMap::ICartographer* ADFHICILFOA; // 0x20
		::System::UInt32 PEEFHNHDBMF; // 0x28
		::System::Void _ctor(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::RPG::GameCore::LevelPropInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 MGOGPIGEHOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_MGOGPIGEHOF_OFFSET))(this);
		}

		::System::UInt32 PPLOEFLAGIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_PPLOEFLAGIB_OFFSET))(this);
		}

		::System::UInt32 HFCCEJKEPJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_HFCCEJKEPJM_OFFSET))(this);
		}

		::RPG::MVector3 KCJBMAHMBCG()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_KCJBMAHMBCG_OFFSET))(this);
		}

		::System::Boolean CHEMIHDIDMI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_CHEMIHDIDMI_OFFSET))(this);
		}

		::RPG::Client::FindChestMarkConfig BOBBMNIMKCA()
		{
			return ((::RPG::Client::FindChestMarkConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_BOBBMNIMKCA_OFFSET))(this);
		}

		::RPG::Client::NavMap::ICartographer* BJKMIPIOPNM()
		{
			return ((::RPG::Client::NavMap::ICartographer*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMIIIFGHJAK_BJKMIPIOPNM_OFFSET))(this);
		}

	};
