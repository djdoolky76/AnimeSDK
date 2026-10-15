#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAvatarByID; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMPPHDOGCAM_CTOR_OFFSET UNITYSDK_OFFSET(0x15ADE2F0)
#define GMPPHDOGCAM_EVALUATE_OFFSET UNITYSDK_OFFSET(0x15ADE360)

	class GMPPHDOGCAM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TargetFetchAvatarByID* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAvatarByID*))((::PBYTE)hIl2Cpp + GMPPHDOGCAM_CTOR_OFFSET))(this, a1);
		}

		::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + GMPPHDOGCAM_EVALUATE_OFFSET))(this, a1, a2);
		}

	};
