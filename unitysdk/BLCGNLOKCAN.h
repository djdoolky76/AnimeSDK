#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByFateContentCount; }
namespace RPG::GameCore { class TaskContext; }

#define BLCGNLOKCAN_CTOR_OFFSET UNITYSDK_OFFSET(0xBA62D60)
#define BLCGNLOKCAN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA62E40)

inline static constexpr unsigned int BLCGNLOKCAN_TypeDefinitionIndex = 55435;

	class BLCGNLOKCAN
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFateContentCount*))((::PBYTE)hIl2Cpp + BLCGNLOKCAN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCGNLOKCAN_ONTASKBEGIN_OFFSET))(this);
		}

	};
