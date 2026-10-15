#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJMCJECLENI.h"
namespace RPG::GameCore { class GameEntity; }

#define EFIHIKAHOJO_CTOR_OFFSET UNITYSDK_OFFSET(0x13A4D3E0)
#define EFIHIKAHOJO_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x13A4D4B0)

	class EFIHIKAHOJO : public ::EJMCJECLENI
	{
	public:
		::System::Int32 _AreaID_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + EFIHIKAHOJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFIHIKAHOJO_GET_AREAID_OFFSET))(this);
		}

	};
