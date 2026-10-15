#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class FloorCustomFloatConfig; }

#define PKPMCCCJHED_CTOR_OFFSET UNITYSDK_OFFSET(0xC2EC4D0)
#define PKPMCCCJHED_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0xC2EC5C0)

	class PKPMCCCJHED
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FloorCustomFloatConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomFloatConfig*))((::PBYTE)hIl2Cpp + PKPMCCCJHED_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PKPMCCCJHED_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
