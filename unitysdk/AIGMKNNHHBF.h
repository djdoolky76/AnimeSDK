#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ReviveCharacter; }
namespace RPG::GameCore { class TaskContext; }

#define AIGMKNNHHBF_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA3960)
#define AIGMKNNHHBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBA3970)
#define AIGMKNNHHBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEBA3A10)
#define AIGMKNNHHBF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEBA3D90)
#define AIGMKNNHHBF_TICK_OFFSET UNITYSDK_OFFSET(0xEBA39B0)

inline static constexpr unsigned int AIGMKNNHHBF_TypeDefinitionIndex = 55326;

	class AIGMKNNHHBF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ReviveCharacter* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ReviveCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ReviveCharacter*))((::PBYTE)hIl2Cpp + AIGMKNNHHBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGMKNNHHBF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AIGMKNNHHBF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGMKNNHHBF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIGMKNNHHBF_ONTASKRESET_OFFSET))(this);
		}

	};
