#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAddAIHangUpInfo; }
namespace RPG::GameCore { class TaskContext; }

#define CFNONEHHLAE_CTOR_OFFSET UNITYSDK_OFFSET(0xCC591C0)
#define CFNONEHHLAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC591F0)

inline static constexpr unsigned int CFNONEHHLAE_TypeDefinitionIndex = 52332;

	class CFNONEHHLAE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddAIHangUpInfo* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddAIHangUpInfo*))((::PBYTE)hIl2Cpp + CFNONEHHLAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNONEHHLAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
