#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMemberFromFirstEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBODPEIGJDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1569FC30)
#define FBODPEIGJDI_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x1569FC50)

inline static constexpr unsigned int FBODPEIGJDI_TypeDefinitionIndex = 59239;

	class FBODPEIGJDI
	{
	public:
		static ::System::Boolean* StaticGet_NKNKCFCLHGE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "FBODPEIGJDI")->GetStaticField(0x12B90);
		}

		::System::Void _ctor(::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllTeamMemberFromFirstEntity*))((::PBYTE)hIl2Cpp + FBODPEIGJDI_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + FBODPEIGJDI_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
