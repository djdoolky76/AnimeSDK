#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElationPointUIType.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
class BEFCGJOIOPN;
class EICPEEPHOMI;
class GFEDEMJFHGH;
class HOAHBNAMKIA;
class IJDHGLAICLF;
class OEJGKNMOABJ;

#define OEJGKNMOABJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x17656A30)
#define OEJGKNMOABJ_CTOR_OFFSET UNITYSDK_OFFSET(0x17656BE0)
#define OEJGKNMOABJ_KCHMJHGJIKF_OFFSET UNITYSDK_OFFSET(0x17656D50)

inline static constexpr unsigned int OEJGKNMOABJ_TypeDefinitionIndex = 74183;

	class OEJGKNMOABJ : public ::System::Object
	{
	public:
		::GFEDEMJFHGH* OANPPPKICDN; // 0x10
		::HOAHBNAMKIA* KJLAEEJEHCM; // 0x18
		::EICPEEPHOMI* JBMBMGBLAHM; // 0x20
		::BEFCGJOIOPN* JBCKADHILHK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJGKNMOABJ_CTOR_OFFSET))(this);
		}

		static ::OEJGKNMOABJ* BPLPBPMEODA()
		{
			return ((::OEJGKNMOABJ*(*)())((::PBYTE)hIl2Cpp + OEJGKNMOABJ_BPLPBPMEODA_OFFSET))();
		}

		::IJDHGLAICLF* KCHMJHGJIKF(::RPG::GameCore::NihiluxElationUIType a1, ::RPG::GameCore::ElationPointUIType a2)
		{
			return ((::IJDHGLAICLF*(*)(::PVOID, ::RPG::GameCore::NihiluxElationUIType, ::RPG::GameCore::ElationPointUIType))((::PBYTE)hIl2Cpp + OEJGKNMOABJ_KCHMJHGJIKF_OFFSET))(this, a1, a2);
		}

	};
