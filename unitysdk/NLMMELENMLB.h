#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/BEABFKCFPNC.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class CreateBattleCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define NLMMELENMLB_AJABCNCOMOH_OFFSET UNITYSDK_OFFSET(0xBC6CC00)
#define NLMMELENMLB_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6C0F0)
#define NLMMELENMLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC6C190)
#define NLMMELENMLB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC6C1E0)
#define NLMMELENMLB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC6CEF0)
#define NLMMELENMLB_TICK_OFFSET UNITYSDK_OFFSET(0xBC6CF40)

inline static constexpr unsigned int NLMMELENMLB_TypeDefinitionIndex = 54977;

	class NLMMELENMLB : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* KLCAHFOFIHC; // 0x18
		::RPG::GameCore::CreateBattleCharacter* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleCharacter*))((::PBYTE)hIl2Cpp + NLMMELENMLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMELENMLB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMELENMLB_ONTASKBEGIN_OFFSET))(this);
		}

		::BEABFKCFPNC AJABCNCOMOH()
		{
			return ((::BEABFKCFPNC(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMELENMLB_AJABCNCOMOH_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLMMELENMLB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLMMELENMLB_TICK_OFFSET))(this, a1);
		}

	};
