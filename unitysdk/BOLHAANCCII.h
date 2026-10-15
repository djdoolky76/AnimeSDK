#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
class JENFBIIMILF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOLHAANCCII_BDBBOLPMGAM_OFFSET UNITYSDK_OFFSET(0xC196730)
#define BOLHAANCCII_CTOR_OFFSET UNITYSDK_OFFSET(0xC196D20)
#define BOLHAANCCII_KKFKKOPCLBG_OFFSET UNITYSDK_OFFSET(0xC196980)
#define BOLHAANCCII_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC196480)

	class BOLHAANCCII : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::JENFBIIMILF*>* BDHJNCCINCN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLHAANCCII_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLHAANCCII_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void BDBBOLPMGAM(::RPG::GameCore::AttackType a1, ::RPG::GameCore::AttackType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + BOLHAANCCII_BDBBOLPMGAM_OFFSET))(this, a1, a2);
		}

		::System::Void KKFKKOPCLBG(::RPG::GameCore::AttackType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackType))((::PBYTE)hIl2Cpp + BOLHAANCCII_KKFKKOPCLBG_OFFSET))(this, a1);
		}

	};
