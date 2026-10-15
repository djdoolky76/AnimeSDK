#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetSortByMultiModifierValueSum; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPDDNFJGOBL_COMPARE_OFFSET UNITYSDK_OFFSET(0xDCD0B00)
#define CPDDNFJGOBL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0980)
#define CPDDNFJGOBL_FKGHPPHGDNP_OFFSET UNITYSDK_OFFSET(0xDCD09A0)
#define CPDDNFJGOBL_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xDCD0C10)
#define CPDDNFJGOBL_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xDCD0C60)

inline static constexpr unsigned int CPDDNFJGOBL_TypeDefinitionIndex = 59172;

	class CPDDNFJGOBL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetSortByMultiModifierValueSum* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetSortByMultiModifierValueSum*))((::PBYTE)hIl2Cpp + CPDDNFJGOBL_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint FKGHPPHGDNP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CPDDNFJGOBL_FKGHPPHGDNP_OFFSET))(this, a1);
		}

		::System::Int32 Compare(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CPDDNFJGOBL_COMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void JIGJDOFEJMI(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CPDDNFJGOBL_JIGJDOFEJMI_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CPDDNFJGOBL_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
