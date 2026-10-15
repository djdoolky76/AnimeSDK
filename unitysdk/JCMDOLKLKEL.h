#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class HGKJLOMFCAG;
class LAELJHAMFOF;

#define JCMDOLKLKEL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x165A7660)
#define JCMDOLKLKEL_CTOR_OFFSET UNITYSDK_OFFSET(0x165A76E0)
#define JCMDOLKLKEL_GET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x165A7640)
#define JCMDOLKLKEL_SET_BATTLEAVATARSERVICE_OFFSET UNITYSDK_OFFSET(0x165A7650)

	class JCMDOLKLKEL : public ::System::Object
	{
	public:
		::LAELJHAMFOF* _BattleAvatarService_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMDOLKLKEL_CTOR_OFFSET))(this);
		}

		::LAELJHAMFOF* get_BattleAvatarService()
		{
			return ((::LAELJHAMFOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMDOLKLKEL_GET_BATTLEAVATARSERVICE_OFFSET))(this);
		}

		::System::Void set_BattleAvatarService(::LAELJHAMFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAELJHAMFOF*))((::PBYTE)hIl2Cpp + JCMDOLKLKEL_SET_BATTLEAVATARSERVICE_OFFSET))(this, a1);
		}

		::HGKJLOMFCAG* BPLPBPMEODA(::AHHNGJGLOKA a1, ::RPG::GameCore::BattleExtraPropertyAddition a2)
		{
			return ((::HGKJLOMFCAG*(*)(::PVOID, ::AHHNGJGLOKA, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + JCMDOLKLKEL_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
