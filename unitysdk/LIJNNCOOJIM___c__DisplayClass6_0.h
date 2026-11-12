#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIJNNCOOJIM;
namespace RPG::Client { class GridFightPreparationEffectEvent; }

#define LIJNNCOOJIM___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBF6E6A0)
#define LIJNNCOOJIM___C__DISPLAYCLASS6_0__PREUPDATEDONE_B__0_OFFSET UNITYSDK_OFFSET(0xBF6E740)

inline static constexpr unsigned int LIJNNCOOJIM___c__DisplayClass6_0_TypeDefinitionIndex = 66723;

	class LIJNNCOOJIM___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::LIJNNCOOJIM* __4__this; // 0x10
		::RPG::Client::GridFightPreparationEffectEvent* evt; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Void _PreUpdateDone_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJNNCOOJIM___C__DISPLAYCLASS6_0__PREUPDATEDONE_B__0_OFFSET))(this);
		}

	};
