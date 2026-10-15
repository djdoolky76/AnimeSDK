#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvNpcHeadLookAtPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define NKGIBAHPOPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2E6D0)
#define NKGIBAHPOPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC2E700)

inline static constexpr unsigned int NKGIBAHPOPP_TypeDefinitionIndex = 52450;

	class NKGIBAHPOPP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcHeadLookAtPlayer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcHeadLookAtPlayer*))((::PBYTE)hIl2Cpp + NKGIBAHPOPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKGIBAHPOPP_ONTASKBEGIN_OFFSET))(this);
		}

	};
