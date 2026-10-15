#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BattlePhaseNew; }

#define BJHICMCKBPE_BGFMEIACGEP_OFFSET UNITYSDK_OFFSET(0xB795A70)
#define BJHICMCKBPE_CBHLMMFMGIB_OFFSET UNITYSDK_OFFSET(0xB795D40)
#define BJHICMCKBPE_CTOR_OFFSET UNITYSDK_OFFSET(0xB7956D0)
#define BJHICMCKBPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB795DE0)
#define BJHICMCKBPE_GGOCOPIHDGK_OFFSET UNITYSDK_OFFSET(0xB7957F0)
#define BJHICMCKBPE_TICK_OFFSET UNITYSDK_OFFSET(0xB7956E0)

inline static constexpr unsigned int BJHICMCKBPE_TypeDefinitionIndex = 61311;

	class BJHICMCKBPE : public ::System::Object
	{
	public:
		::RPG::Client::BattlePhaseNew* HMJAAOLDOAE; // 0x10
		::System::Void _ctor(::RPG::Client::BattlePhaseNew* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseNew*))((::PBYTE)hIl2Cpp + BJHICMCKBPE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BJHICMCKBPE_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHICMCKBPE_DISPOSE_OFFSET))(this);
		}

		::System::Void GGOCOPIHDGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHICMCKBPE_GGOCOPIHDGK_OFFSET))(this);
		}

		::System::Void BGFMEIACGEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHICMCKBPE_BGFMEIACGEP_OFFSET))(this);
		}

		::System::Void CBHLMMFMGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJHICMCKBPE_CBHLMMFMGIB_OFFSET))(this);
		}

	};
