#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class LittleGameRadialBlurEffect; }
namespace RPG::GameCore { class TaskContext; }

#define BJJFHIJKNGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A2670)
#define BJJFHIJKNGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB7A26A0)

inline static constexpr unsigned int BJJFHIJKNGK_TypeDefinitionIndex = 52972;

	class BJJFHIJKNGK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameRadialBlurEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameRadialBlurEffect*))((::PBYTE)hIl2Cpp + BJJFHIJKNGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJFHIJKNGK_ONTASKBEGIN_OFFSET))(this);
		}

	};
