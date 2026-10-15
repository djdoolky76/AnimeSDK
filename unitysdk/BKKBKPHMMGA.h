#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
class BKKBKPHMMGA;
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class LevelNavNodeConditionInfo; }
namespace System { class String; }

#define BKKBKPHMMGA_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBA571F0)
#define BKKBKPHMMGA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA56D00)
#define BKKBKPHMMGA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA56DA0)
#define BKKBKPHMMGA_DGCFBHPFCHE_OFFSET UNITYSDK_OFFSET(0xBA57100)
#define BKKBKPHMMGA_DIAECFNOPBK_OFFSET UNITYSDK_OFFSET(0xBA57020)
#define BKKBKPHMMGA_GBIJDFPIDDK_OFFSET UNITYSDK_OFFSET(0xBA56DB0)
#define BKKBKPHMMGA_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xBA56E90)

inline static constexpr unsigned int BKKBKPHMMGA_TypeDefinitionIndex = 66368;

	class BKKBKPHMMGA : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* PBDGDLLLHMA; // 0x10
		::System::String* GIDAEFPOGHI; // 0x18
		::System::Int32 AIKAPJELHNK; // 0x20
		::RPG::GameCore::CompareType HALJJEPLFAE; // 0x24
		::System::Boolean JLJGEJHCLMP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_CTOR_OFFSET))(this);
		}

		static ::BKKBKPHMMGA* BPLPBPMEODA(::RPG::Client::NavMap::IMapDataSource* a1, ::RPG::GameCore::LevelNavNodeConditionInfo* a2)
		{
			return ((::BKKBKPHMMGA*(*)(::RPG::Client::NavMap::IMapDataSource*, ::RPG::GameCore::LevelNavNodeConditionInfo*))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_OKPLPEELPBC_OFFSET))(this);
		}

		::System::Void GBIJDFPIDDK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_GBIJDFPIDDK_OFFSET))(this);
		}

		::System::Void DIAECFNOPBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_DIAECFNOPBK_OFFSET))(this);
		}

		::System::Void DGCFBHPFCHE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_DGCFBHPFCHE_OFFSET))(this, a1);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKKBKPHMMGA_BJMNKLGEMPM_OFFSET))(this);
		}

	};
