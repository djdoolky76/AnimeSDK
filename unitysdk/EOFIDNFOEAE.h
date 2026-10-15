#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"
class PGCCFHFDEDG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EOFIDNFOEAE_BJCJOFCCAHB_OFFSET UNITYSDK_OFFSET(0x155BE110)
#define EOFIDNFOEAE_CTOR_OFFSET UNITYSDK_OFFSET(0x155BE040)
#define EOFIDNFOEAE_EKMPMMLBNEL_OFFSET UNITYSDK_OFFSET(0x155BE460)
#define EOFIDNFOEAE_FMNBMCGKKDJ_OFFSET UNITYSDK_OFFSET(0x155BE410)
#define EOFIDNFOEAE_KJGGIOFBIPD_OFFSET UNITYSDK_OFFSET(0x155BE0C0)

	class EOFIDNFOEAE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* FGGPJCJAJBG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::PGCCFHFDEDG*>* OGHCLELFCDB; // 0x18
		::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::PGCCFHFDEDG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::PGCCFHFDEDG*>*))((::PBYTE)hIl2Cpp + EOFIDNFOEAE_CTOR_OFFSET))(this, a1);
		}

		::System::Single KJGGIOFBIPD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFIDNFOEAE_KJGGIOFBIPD_OFFSET))(this);
		}

		::System::UInt32 FMNBMCGKKDJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFIDNFOEAE_FMNBMCGKKDJ_OFFSET))(this);
		}

		::System::Single EKMPMMLBNEL(::RPG::GameCore::CombatPowerSource a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::CombatPowerSource))((::PBYTE)hIl2Cpp + EOFIDNFOEAE_EKMPMMLBNEL_OFFSET))(this, a1);
		}

		::System::Void BJCJOFCCAHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOFIDNFOEAE_BJCJOFCCAHB_OFFSET))(this);
		}

	};
