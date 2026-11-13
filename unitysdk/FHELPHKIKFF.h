#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowAvatarHUDSpecialEffect; }
namespace RPG::GameCore { class TaskContext; }

#define FHELPHKIKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x18AA1CF0)
#define FHELPHKIKFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AA1D00)
#define FHELPHKIKFF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AA1D40)
#define FHELPHKIKFF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AA2400)
#define FHELPHKIKFF_TICK_OFFSET UNITYSDK_OFFSET(0x18AA2450)

inline static constexpr unsigned int FHELPHKIKFF_TypeDefinitionIndex = 57658;

	class FHELPHKIKFF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowAvatarHUDSpecialEffect* OFKGLJOAMLD; // 0x20
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
