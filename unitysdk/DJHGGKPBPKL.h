#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerRogueSelectLimitedAvatar; }

#define DJHGGKPBPKL_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0xF22F840)
#define DJHGGKPBPKL_CTOR_OFFSET UNITYSDK_OFFSET(0xF22F660)
#define DJHGGKPBPKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF22F670)
#define DJHGGKPBPKL_OKNANLNIEGL_OFFSET UNITYSDK_OFFSET(0xF22FB50)
#define DJHGGKPBPKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF22F710)
#define DJHGGKPBPKL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF22FB00)
#define DJHGGKPBPKL_TICK_OFFSET UNITYSDK_OFFSET(0xF22F6B0)
#define DJHGGKPBPKL__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xF22FC70)

inline static constexpr unsigned int DJHGGKPBPKL_TypeDefinitionIndex = 58799;

	class DJHGGKPBPKL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TriggerRogueSelectLimitedAvatar* OFKGLJOAMLD; // 0x18
		::RPG::Client::UIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerRogueSelectLimitedAvatar*))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_ONTASKRESET_OFFSET))(this);
		}

		::RPG::Client::UIController* AIEGALJHOFE()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_AIEGALJHOFE_OFFSET))(this);
		}

		::RPG::GameCore::PropComponent* OKNANLNIEGL()
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL_OKNANLNIEGL_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__3_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHGGKPBPKL__ONTASKBEGIN_B__3_0_OFFSET))(this);
		}

	};
