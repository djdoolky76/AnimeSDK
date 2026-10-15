#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ChimeraDuelShopGuideDragUpgrade; }
namespace RPG::GameCore { class TaskContext; }

#define MAKOKEMJAFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB852480)
#define MAKOKEMJAFD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8524B0)

inline static constexpr unsigned int MAKOKEMJAFD_TypeDefinitionIndex = 53170;

	class MAKOKEMJAFD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + MAKOKEMJAFD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKOKEMJAFD_ONTASKBEGIN_OFFSET))(this);
		}

	};
