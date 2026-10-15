#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class FloorCustomStringConfig; }
namespace System { class String; }

#define ECCCMPOJNJE_CTOR_OFFSET UNITYSDK_OFFSET(0x12D08490)
#define ECCCMPOJNJE_ISVALUEEQUALSTO_OFFSET UNITYSDK_OFFSET(0x12D084C0)

	class ECCCMPOJNJE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::FloorCustomStringConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomStringConfig*))((::PBYTE)hIl2Cpp + ECCCMPOJNJE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsValueEqualsTo(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECCCMPOJNJE_ISVALUEEQUALSTO_OFFSET))(this, a1);
		}

	};
