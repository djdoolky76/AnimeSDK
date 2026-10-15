#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class MonoAttackHitBox; }

#define APLLEHCKBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5F30)
#define APLLEHCKBLJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15BA5D90)
#define APLLEHCKBLJ_DPLKIELHPJC_OFFSET UNITYSDK_OFFSET(0x15BA5EF0)
#define APLLEHCKBLJ_GFGBJINKOGA_OFFSET UNITYSDK_OFFSET(0x15BA5E60)
#define APLLEHCKBLJ_ICPDOKLLINI_OFFSET UNITYSDK_OFFSET(0x15BA5E10)
#define APLLEHCKBLJ_LCFJCCKJJJI_OFFSET UNITYSDK_OFFSET(0x15BA5EB0)
#define APLLEHCKBLJ_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x15BA5DD0)

inline static constexpr unsigned int APLLEHCKBLJ_TypeDefinitionIndex = 57083;

	class APLLEHCKBLJ : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::MonoAttackHitBox* LANPAGMEFJH; // 0x18
		::RPG::Client::MonoAttackHitBox* MHMAEHOHLNN; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_DISPOSE_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void ICPDOKLLINI(::RPG::Client::MonoAttackHitBox* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_ICPDOKLLINI_OFFSET))(this, a1);
		}

		::System::Void GFGBJINKOGA(::RPG::Client::MonoAttackHitBox* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoAttackHitBox*))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_GFGBJINKOGA_OFFSET))(this, a1);
		}

		::RPG::Client::MonoAttackHitBox* LCFJCCKJJJI()
		{
			return ((::RPG::Client::MonoAttackHitBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_LCFJCCKJJJI_OFFSET))(this);
		}

		::RPG::Client::MonoAttackHitBox* DPLKIELHPJC()
		{
			return ((::RPG::Client::MonoAttackHitBox*(*)(::PVOID))((::PBYTE)hIl2Cpp + APLLEHCKBLJ_DPLKIELHPJC_OFFSET))(this);
		}

	};
