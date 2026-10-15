#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowWorldShop4ThUpgradeHint; }
namespace RPG::GameCore { class TaskContext; }

#define LOOEFPBMCPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB80AEE0)
#define LOOEFPBMCPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB80AEF0)
#define LOOEFPBMCPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB80AF30)
#define LOOEFPBMCPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB80B080)
#define LOOEFPBMCPJ_TICK_OFFSET UNITYSDK_OFFSET(0xB80B0D0)

inline static constexpr unsigned int LOOEFPBMCPJ_TypeDefinitionIndex = 53288;

	class LOOEFPBMCPJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowWorldShop4ThUpgradeHint* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWorldShop4ThUpgradeHint*))((::PBYTE)hIl2Cpp + LOOEFPBMCPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEFPBMCPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEFPBMCPJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOOEFPBMCPJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LOOEFPBMCPJ_TICK_OFFSET))(this, a1);
		}

	};
