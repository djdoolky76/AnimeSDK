#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class OpenHipplenMainPage; }
namespace RPG::GameCore { class TaskContext; }

#define LBIJHGOMGGE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5FBE90)
#define LBIJHGOMGGE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5FBEC0)

inline static constexpr unsigned int LBIJHGOMGGE_TypeDefinitionIndex = 52282;

	class LBIJHGOMGGE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenHipplenMainPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenHipplenMainPage*))((::PBYTE)hIl2Cpp + LBIJHGOMGGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBIJHGOMGGE_ONTASKBEGIN_OFFSET))(this);
		}

	};
