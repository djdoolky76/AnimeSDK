#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphComponent.h"
class MJNGFEGNCOA;

#define LKJFMIEMLAB_CTOR_OFFSET UNITYSDK_OFFSET(0x18CF48E0)
#define LKJFMIEMLAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18CF4740)
#define LKJFMIEMLAB_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x18CF4820)
#define LKJFMIEMLAB_TICK_OFFSET UNITYSDK_OFFSET(0x18CF47C0)
#define LKJFMIEMLAB__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x18CF4630)

inline static constexpr unsigned int LKJFMIEMLAB_TypeDefinitionIndex = 55198;

	class LKJFMIEMLAB : public ::RPG::GameCore::LevelGraphComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFMIEMLAB_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitOwnerRef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFMIEMLAB__ONINITOWNERREF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKJFMIEMLAB_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LKJFMIEMLAB_TICK_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + LKJFMIEMLAB_KCKGCEBBCIE_OFFSET))(this, a1);
		}

	};
