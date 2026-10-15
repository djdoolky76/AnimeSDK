#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByCopying; }
namespace RPG::GameCore { class TaskContext; }

#define EFLAAAAOPHM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A567A0)
#define EFLAAAAOPHM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A567D0)

inline static constexpr unsigned int EFLAAAAOPHM_TypeDefinitionIndex = 55423;

	class EFLAAAAOPHM
	{
	public:
		::RPG::GameCore::StringHash FIOAJCGJGMP; // 0x28
		::RPG::GameCore::StringHash FMGJOFHFJHI; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCopying* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCopying*))((::PBYTE)hIl2Cpp + EFLAAAAOPHM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFLAAAAOPHM_ONTASKBEGIN_OFFSET))(this);
		}

	};
