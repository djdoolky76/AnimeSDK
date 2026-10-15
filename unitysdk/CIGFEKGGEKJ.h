#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetCharacterFormation; }
namespace RPG::GameCore { class TaskContext; }

#define CIGFEKGGEKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF69150)
#define CIGFEKGGEKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF69160)
#define CIGFEKGGEKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF691A0)
#define CIGFEKGGEKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCF69810)
#define CIGFEKGGEKJ_TICK_OFFSET UNITYSDK_OFFSET(0xCF69860)

inline static constexpr unsigned int CIGFEKGGEKJ_TypeDefinitionIndex = 55371;

	class CIGFEKGGEKJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetCharacterFormation* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterFormation* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterFormation*))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIGFEKGGEKJ_TICK_OFFSET))(this, a1);
		}

	};
