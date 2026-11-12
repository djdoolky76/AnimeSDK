#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ShowFiveDimBillboardChestIcon; }
namespace RPG::GameCore { class TaskContext; }

#define MGIIBGNFGGH_CTOR_OFFSET UNITYSDK_OFFSET(0xC1D3E40)
#define MGIIBGNFGGH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC1D3E70)

inline static constexpr unsigned int MGIIBGNFGGH_TypeDefinitionIndex = 54047;

	class MGIIBGNFGGH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*))((::PBYTE)hIl2Cpp + MGIIBGNFGGH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGIIBGNFGGH_ONTASKBEGIN_OFFSET))(this);
		}

	};
