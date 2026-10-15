#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::GameCore { class SetDynamicValueByCountOfBaseType; }
namespace RPG::GameCore { class TaskContext; }

#define KIDDKACJDCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB415020)
#define KIDDKACJDCM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB415100)

inline static constexpr unsigned int KIDDKACJDCM_TypeDefinitionIndex = 55409;

	class KIDDKACJDCM
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*))((::PBYTE)hIl2Cpp + KIDDKACJDCM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDDKACJDCM_ONTASKBEGIN_OFFSET))(this);
		}

	};
