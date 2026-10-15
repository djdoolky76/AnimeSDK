#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowAvatarHUDSpecialEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FHELPHKIKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1576C400)
#define FHELPHKIKFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1576C410)
#define FHELPHKIKFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1576C450)
#define FHELPHKIKFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1576CB10)
#define FHELPHKIKFF_TICK_OFFSET UNITYSDK_OFFSET(0x1576CB60)

inline static constexpr unsigned int FHELPHKIKFF_TypeDefinitionIndex = 56440;

	class FHELPHKIKFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowAvatarHUDSpecialEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*))((::PBYTE)hIl2Cpp + FHELPHKIKFF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELPHKIKFF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELPHKIKFF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHELPHKIKFF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHELPHKIKFF_TICK_OFFSET))(this, a1);
		}

	};
