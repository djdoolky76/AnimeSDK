#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByHPSharedGroup; }
namespace RPG::GameCore { class TaskContext; }

#define ANPEFPOPHJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15898870)
#define ANPEFPOPHJL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15898950)

inline static constexpr unsigned int ANPEFPOPHJL_TypeDefinitionIndex = 55446;

	class ANPEFPOPHJL
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByHPSharedGroup* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByHPSharedGroup*))((::PBYTE)hIl2Cpp + ANPEFPOPHJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPEFPOPHJL_ONTASKBEGIN_OFFSET))(this);
		}

	};
