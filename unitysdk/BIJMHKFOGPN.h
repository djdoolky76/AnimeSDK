#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByGridFightDropCount; }
namespace RPG::GameCore { class TaskContext; }

#define BIJMHKFOGPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB4AA290)
#define BIJMHKFOGPN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4AA360)
#define BIJMHKFOGPN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB4AA3A0)
#define BIJMHKFOGPN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB4AA780)
#define BIJMHKFOGPN_TICK_OFFSET UNITYSDK_OFFSET(0xB4AA7D0)

inline static constexpr unsigned int BIJMHKFOGPN_TypeDefinitionIndex = 55438;

	class BIJMHKFOGPN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetDynamicValueByGridFightDropCount* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByGridFightDropCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByGridFightDropCount*))((::PBYTE)hIl2Cpp + BIJMHKFOGPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJMHKFOGPN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJMHKFOGPN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJMHKFOGPN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIJMHKFOGPN_TICK_OFFSET))(this, a1);
		}

	};
