#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GravityBallPuzzleLastFinishCondition; }
namespace RPG::GameCore { class TaskContext; }

#define EBHOLFALEDL_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF8940)
#define EBHOLFALEDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CF8970)

inline static constexpr unsigned int EBHOLFALEDL_TypeDefinitionIndex = 52913;

	class EBHOLFALEDL
	{
	public:
		static ::System::Int16* StaticGet_NBDIGJLGOFA()
		{
			return (::System::Int16*)UnitySDK::FromName("", "EBHOLFALEDL")->GetStaticField(0x10030);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GravityBallPuzzleLastFinishCondition*))((::PBYTE)hIl2Cpp + EBHOLFALEDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHOLFALEDL_ONTASKBEGIN_OFFSET))(this);
		}

	};
