#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NECBOLFGIMA.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class FreeStyleComponent; }

#define CMPCKAGMFGF_DNGFMBGDHDB_CTOR_OFFSET UNITYSDK_OFFSET(0xED090)

inline static constexpr unsigned int CMPCKAGMFGF_DNGFMBGDHDB_TypeDefinitionIndex = 69199;

	struct alignas(8) CMPCKAGMFGF_DNGFMBGDHDB
	{
		::System::Nullable_1<::NECBOLFGIMA> BPAPBAFOMCH; // 0x10
		::System::Byte _padding0[0x10];
		::System::Int32 GDLKKJEMPON; // 0x28
		::System::Void _ctor(::RPG::GameCore::FreeStyleComponent* a1, ::RPG::Client::MockAnimator* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleComponent*, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CMPCKAGMFGF_DNGFMBGDHDB_CTOR_OFFSET))(this, a1, a2);
		}

	};
