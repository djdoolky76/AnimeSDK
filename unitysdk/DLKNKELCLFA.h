#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByAITag; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DLKNKELCLFA_COMPARE_OFFSET UNITYSDK_OFFSET(0xF8A5010)
#define DLKNKELCLFA_CTOR_OFFSET UNITYSDK_OFFSET(0xF8A4C60)
#define DLKNKELCLFA_GNHDPFKBDGD_OFFSET UNITYSDK_OFFSET(0xF8A5120)
#define DLKNKELCLFA_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xF8A4C70)
#define DLKNKELCLFA_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xF8A4CF0)

inline static constexpr unsigned int DLKNKELCLFA_TypeDefinitionIndex = 59179;

	class DLKNKELCLFA
	{
	public:
		::RPG::GameCore::FixPoint AMEGANPAIMK; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortByAITag* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByAITag*))((::PBYTE)hIl2Cpp + DLKNKELCLFA_CTOR_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + DLKNKELCLFA_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + DLKNKELCLFA_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLKNKELCLFA_COMPARE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint GNHDPFKBDGD(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DLKNKELCLFA_GNHDPFKBDGD_OFFSET))(this, a1);
		}

	};
