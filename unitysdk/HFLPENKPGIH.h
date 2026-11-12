#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::GameCore { class AdventureCharacterController; }

#define HFLPENKPGIH_CTOR_OFFSET UNITYSDK_OFFSET(0x16BD31A0)
#define HFLPENKPGIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BD31B0)
#define HFLPENKPGIH_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x16BD3310)
#define HFLPENKPGIH_INDABEHEBNK_OFFSET UNITYSDK_OFFSET(0x16BD33B0)
#define HFLPENKPGIH_MJDPOMNFANL_OFFSET UNITYSDK_OFFSET(0x16BD3360)
#define HFLPENKPGIH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x16BD3260)
#define HFLPENKPGIH_OFIHKDMLIIP_OFFSET UNITYSDK_OFFSET(0x16BD3430)
#define HFLPENKPGIH_TICK_OFFSET UNITYSDK_OFFSET(0x16BD3200)

inline static constexpr unsigned int HFLPENKPGIH_TypeDefinitionIndex = 58582;

	class HFLPENKPGIH : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::AdventureCharacterController* HFHBNEOLCJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFLPENKPGIH_TICK_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Boolean MJDPOMNFANL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_MJDPOMNFANL_OFFSET))(this);
		}

		::System::Boolean INDABEHEBNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_INDABEHEBNK_OFFSET))(this);
		}

		::System::Boolean OFIHKDMLIIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLPENKPGIH_OFIHKDMLIIP_OFFSET))(this);
		}

	};
