#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByActionOrder; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKFLDOPIDJF_COMPARE_OFFSET UNITYSDK_OFFSET(0x16488480)
#define IKFLDOPIDJF_CTOR_OFFSET UNITYSDK_OFFSET(0x16487FA0)
#define IKFLDOPIDJF_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x16487FC0)
#define IKFLDOPIDJF_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16488010)

inline static constexpr unsigned int IKFLDOPIDJF_TypeDefinitionIndex = 59173;

	class IKFLDOPIDJF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByActionOrder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + IKFLDOPIDJF_CTOR_OFFSET))(this, a1);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + IKFLDOPIDJF_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IKFLDOPIDJF_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IKFLDOPIDJF_COMPARE_OFFSET))(this, a1, a2);
		}

	};
