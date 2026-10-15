#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByChangeValue; }
namespace RPG::GameCore { class TaskContext; }

#define HLEGFJKLMBF_CTOR_OFFSET UNITYSDK_OFFSET(0x15D50980)
#define HLEGFJKLMBF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D50A60)

inline static constexpr unsigned int HLEGFJKLMBF_TypeDefinitionIndex = 55419;

	class HLEGFJKLMBF
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByChangeValue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByChangeValue*))((::PBYTE)hIl2Cpp + HLEGFJKLMBF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLEGFJKLMBF_ONTASKBEGIN_OFFSET))(this);
		}

	};
