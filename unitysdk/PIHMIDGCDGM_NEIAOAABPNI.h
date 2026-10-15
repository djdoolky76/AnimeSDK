#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMHPBKNKBGP_EHCHDILLGPK;
namespace RPG::GameCore { class BattleInstance; }

#define PIHMIDGCDGM_NEIAOAABPNI_CTOR_OFFSET UNITYSDK_OFFSET(0xC25BCF0)

inline static constexpr unsigned int PIHMIDGCDGM_NEIAOAABPNI_TypeDefinitionIndex = 71946;

	class PIHMIDGCDGM_NEIAOAABPNI : public ::System::Object
	{
	public:
		::RPG::GameCore::BattleInstance* DOLKMGHOGBM; // 0x10
		::MMHPBKNKBGP_EHCHDILLGPK* IAENPHEPKGD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHMIDGCDGM_NEIAOAABPNI_CTOR_OFFSET))(this);
		}

	};
