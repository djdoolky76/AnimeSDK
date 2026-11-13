#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMHPBKNKBGP_EHCHDILLGPK;
namespace RPG::GameCore { class BattleInstance; }

#define PIHMIDGCDGM_NEIAOAABPNI_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9C8470)

inline static constexpr unsigned int PIHMIDGCDGM_NEIAOAABPNI_TypeDefinitionIndex = 73970;

	class PIHMIDGCDGM_NEIAOAABPNI : public ::System::Object
	{
	public:
		::MMHPBKNKBGP_EHCHDILLGPK* IAENPHEPKGD; // 0x10
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_NEIAOAABPNI_CTOR_OFFSET))(this);
		}

	};
