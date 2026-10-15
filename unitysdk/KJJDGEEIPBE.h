#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetMapAllTeamMember; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KJJDGEEIPBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB45A010)
#define KJJDGEEIPBE_TRANSFORM_OFFSET UNITYSDK_OFFSET(0xB45A030)

	class KJJDGEEIPBE
	{
	public:
		static ::System::Boolean* StaticGet_NKNKCFCLHGE()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "KJJDGEEIPBE")->GetStaticField(0x12C50);
		}

		::System::Void _ctor(::RPG::GameCore::TargetMapAllTeamMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetMapAllTeamMember*))((::PBYTE)hIl2Cpp + KJJDGEEIPBE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Transform(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KJJDGEEIPBE_TRANSFORM_OFFSET))(this, a1, a2);
		}

	};
