#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvAddGlobalWeakness; }
namespace RPG::GameCore { class TaskContext; }

#define FEOOGOBALAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1572D8F0)
#define FEOOGOBALAI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1572D920)
#define FEOOGOBALAI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1572D960)

	class FEOOGOBALAI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvAddGlobalWeakness* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvAddGlobalWeakness*))((::PBYTE)hIl2Cpp + FEOOGOBALAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOOGOBALAI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEOOGOBALAI_ONTASKBEGIN_OFFSET))(this);
		}

	};
