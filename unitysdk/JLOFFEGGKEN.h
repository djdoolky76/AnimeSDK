#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace System { class Object; }

#define JLOFFEGGKEN_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x1A09AC30)
#define JLOFFEGGKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A09B6C0)
#define JLOFFEGGKEN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x1A09ABE0)
#define JLOFFEGGKEN_DEGINLLDBHD_OFFSET UNITYSDK_OFFSET(0x1A09B500)
#define JLOFFEGGKEN_EAMEKAMMNMD_OFFSET UNITYSDK_OFFSET(0x1A09AFE0)
#define JLOFFEGGKEN_EGHEIBPMMOH_OFFSET UNITYSDK_OFFSET(0x1A09B340)
#define JLOFFEGGKEN_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x1A09B290)
#define JLOFFEGGKEN_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x1A09AE70)
#define JLOFFEGGKEN_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x1A09B4B0)

inline static constexpr unsigned int JLOFFEGGKEN_TypeDefinitionIndex = 60987;

	class JLOFFEGGKEN : public ::LJKHPOHKIIF
	{
	public:
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x20
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x28
		::Il2CppArray<::RPG::GameCore::PreloadGroupType>* LGEOEOJLADI; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void EAMEKAMMNMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_EAMEKAMMNMD_OFFSET))(this);
		}

		::System::Void EGHEIBPMMOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_EGHEIBPMMOH_OFFSET))(this);
		}

		::System::Void DEGINLLDBHD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLOFFEGGKEN_DEGINLLDBHD_OFFSET))(this, a1);
		}

	};
