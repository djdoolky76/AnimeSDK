#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DamageTypeRow; }
namespace System { class String; }

#define NGLDKIHKGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAD860)
#define NGLDKIHKGKJ_JLKHLIGLGMN_OFFSET UNITYSDK_OFFSET(0xBBAD780)
#define NGLDKIHKGKJ_PHJMDGLMDCG_OFFSET UNITYSDK_OFFSET(0xBBAD710)

	class NGLDKIHKGKJ : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLDKIHKGKJ_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DamageTypeRow* PHJMDGLMDCG(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::RPG::GameCore::DamageTypeRow*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + NGLDKIHKGKJ_PHJMDGLMDCG_OFFSET))(this, a1);
		}

		::System::String* JLKHLIGLGMN(::RPG::GameCore::AttackDamageType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + NGLDKIHKGKJ_JLKHLIGLGMN_OFFSET))(this, a1);
		}

	};
