#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class PropFastDeliverSetSimplifiedMode; }
namespace RPG::GameCore { class TaskContext; }

#define KFGAEHKPCKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB392C50)
#define KFGAEHKPCKJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB392D40)
#define KFGAEHKPCKJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB392C80)
#define KFGAEHKPCKJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB392CF0)

inline static constexpr unsigned int KFGAEHKPCKJ_TypeDefinitionIndex = 58325;

	class KFGAEHKPCKJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*))((::PBYTE)hIl2Cpp + KFGAEHKPCKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGAEHKPCKJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGAEHKPCKJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGAEHKPCKJ_DISPOSE_OFFSET))(this);
		}

	};
