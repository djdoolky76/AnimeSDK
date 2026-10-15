#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ModifyActivityElationPower; }
namespace RPG::GameCore { class TaskContext; }

#define CKBMOPLBAHN_CTOR_OFFSET UNITYSDK_OFFSET(0xD754930)
#define CKBMOPLBAHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD754960)

inline static constexpr unsigned int CKBMOPLBAHN_TypeDefinitionIndex = 54805;

	class CKBMOPLBAHN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyActivityElationPower* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyActivityElationPower*))((::PBYTE)hIl2Cpp + CKBMOPLBAHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKBMOPLBAHN_ONTASKBEGIN_OFFSET))(this);
		}

	};
