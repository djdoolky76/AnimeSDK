#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMFMODIMICL.h"
namespace RPG::GameCore { class ChangeCharacterConfigParamClientOnly; }
namespace RPG::GameCore { class TaskContext; }

#define MHCPMOCBBGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB92A030)
#define MHCPMOCBBGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB92A060)

inline static constexpr unsigned int MHCPMOCBBGG_TypeDefinitionIndex = 54915;

	class MHCPMOCBBGG : public ::IMFMODIMICL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeCharacterConfigParamClientOnly*))((::PBYTE)hIl2Cpp + MHCPMOCBBGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCPMOCBBGG_ONTASKBEGIN_OFFSET))(this);
		}

	};
