#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetCharacterEffectMaterialBlock; }
namespace RPG::GameCore { class TaskContext; }

#define GLDOCBPPCFG_CTOR_OFFSET UNITYSDK_OFFSET(0x15AA3410)
#define GLDOCBPPCFG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AA3440)

inline static constexpr unsigned int GLDOCBPPCFG_TypeDefinitionIndex = 58532;

	class GLDOCBPPCFG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetCharacterEffectMaterialBlock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetCharacterEffectMaterialBlock*))((::PBYTE)hIl2Cpp + GLDOCBPPCFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDOCBPPCFG_ONTASKBEGIN_OFFSET))(this);
		}

	};
