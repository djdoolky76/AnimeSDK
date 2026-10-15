#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByMultiModifierValueSum; }
namespace RPG::GameCore { class TaskContext; }

#define PKNOBEPIMJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EA910)
#define PKNOBEPIMJN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2EA9E0)
#define PKNOBEPIMJN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2EAA20)
#define PKNOBEPIMJN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC2EB370)
#define PKNOBEPIMJN_TICK_OFFSET UNITYSDK_OFFSET(0xC2EB3C0)

inline static constexpr unsigned int PKNOBEPIMJN_TypeDefinitionIndex = 55456;

	class PKNOBEPIMJN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + PKNOBEPIMJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEPIMJN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEPIMJN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKNOBEPIMJN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKNOBEPIMJN_TICK_OFFSET))(this, a1);
		}

	};
