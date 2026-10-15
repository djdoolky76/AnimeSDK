#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class DynamicValueRoundToInt; }
namespace RPG::GameCore { class TaskContext; }

#define EBMMNOKNFJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFEB90)
#define EBMMNOKNFJJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CFEC70)

inline static constexpr unsigned int EBMMNOKNFJJ_TypeDefinitionIndex = 56355;

	class EBMMNOKNFJJ
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DynamicValueRoundToInt* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DynamicValueRoundToInt*))((::PBYTE)hIl2Cpp + EBMMNOKNFJJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMMNOKNFJJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
