#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGrowUpEffect; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDAB6F70)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_1__PLAYTRAILENHANCEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0xDAB6F80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass53_1_TypeDefinitionIndex = 65984;

	template <typename T>
	class GridFightEffectController___c__DisplayClass53_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::RPG::Client::GridFightGrowUpEffect* effect; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_1_CTOR_OFFSET))(this);
		}

		::System::Void _PlayTrailEnhanceEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS53_1__PLAYTRAILENHANCEEFFECT_B__0_OFFSET))(this);
		}

	};
}
