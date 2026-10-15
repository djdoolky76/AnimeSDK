#pragma once
#include "unitysdk/unitysdk.h"
class OGFNMNGJPIC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByGridFightRoleTotalDamage; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JFBHAFJNFIJ_COMPARE_OFFSET UNITYSDK_OFFSET(0x16631CC0)
#define JFBHAFJNFIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x166318E0)
#define JFBHAFJNFIJ_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x16631BC0)
#define JFBHAFJNFIJ_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x16631900)

inline static constexpr unsigned int JFBHAFJNFIJ_TypeDefinitionIndex = 59177;

	class JFBHAFJNFIJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OGFNMNGJPIC*>* JNJPCGJJGGD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TargetSortByGridFightRoleTotalDamage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByGridFightRoleTotalDamage*))((::PBYTE)hIl2Cpp + JFBHAFJNFIJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + JFBHAFJNFIJ_TRANSFORM_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JFBHAFJNFIJ_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JFBHAFJNFIJ_COMPARE_OFFSET))(this, a1, a2);
		}

	};
