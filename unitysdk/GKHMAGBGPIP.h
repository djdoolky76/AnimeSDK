#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class InitActivityTelevisionBuffInfo; }
namespace RPG::GameCore { class TaskContext; }

#define GKHMAGBGPIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D3190)
#define GKHMAGBGPIP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8D31C0)

inline static constexpr unsigned int GKHMAGBGPIP_TypeDefinitionIndex = 48630;

	class GKHMAGBGPIP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitActivityTelevisionBuffInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitActivityTelevisionBuffInfo*))((::PBYTE)hIl2Cpp + GKHMAGBGPIP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHMAGBGPIP_ONTASKBEGIN_OFFSET))(this);
		}

	};
