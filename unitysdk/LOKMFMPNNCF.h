#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByVariateType; }
namespace RPG::GameCore { class TaskContext; }

#define LOKMFMPNNCF_CTOR_OFFSET UNITYSDK_OFFSET(0xB800E10)
#define LOKMFMPNNCF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB800EF0)

inline static constexpr unsigned int LOKMFMPNNCF_TypeDefinitionIndex = 55478;

	class LOKMFMPNNCF
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByVariateType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByVariateType*))((::PBYTE)hIl2Cpp + LOKMFMPNNCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKMFMPNNCF_ONTASKBEGIN_OFFSET))(this);
		}

	};
