#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetHeadButtonEff; }
namespace RPG::GameCore { class TaskContext; }

#define NKILHNKDCNI_CTOR_OFFSET UNITYSDK_OFFSET(0xC51CBE0)
#define NKILHNKDCNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC51CC10)

inline static constexpr unsigned int NKILHNKDCNI_TypeDefinitionIndex = 56705;

	class NKILHNKDCNI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetHeadButtonEff* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetHeadButtonEff*))((::PBYTE)hIl2Cpp + NKILHNKDCNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKILHNKDCNI_ONTASKBEGIN_OFFSET))(this);
		}

	};
