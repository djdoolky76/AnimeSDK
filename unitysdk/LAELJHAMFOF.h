#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHHNGJGLOKA.h"
#include "unitysdk/RPG/GameCore/BattleExtraPropertyAddition.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LAELJHAMFOF_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DD010)
#define LAELJHAMFOF_EJCMEGJGAOH_OFFSET UNITYSDK_OFFSET(0xB5DCE10)
#define LAELJHAMFOF_GET_VERSION_OFFSET UNITYSDK_OFFSET(0xB5DCC90)
#define LAELJHAMFOF_GJDAJJLPPNC_OFFSET UNITYSDK_OFFSET(0xB5DCDC0)
#define LAELJHAMFOF_IMHEBHCBMPP_OFFSET UNITYSDK_OFFSET(0xB5DCCB0)
#define LAELJHAMFOF_NINFDDIFNJM_OFFSET UNITYSDK_OFFSET(0xB5DCEC0)
#define LAELJHAMFOF_SET_VERSION_OFFSET UNITYSDK_OFFSET(0xB5DCCA0)

	class LAELJHAMFOF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::AHHNGJGLOKA, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*>* AEEEKCDOCOJ; // 0x10
		::System::UInt32 _Version_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAELJHAMFOF_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Version()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAELJHAMFOF_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAELJHAMFOF_SET_VERSION_OFFSET))(this, a1);
		}

		::System::Void IMHEBHCBMPP(::AHHNGJGLOKA a1, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::BattleExtraPropertyAddition, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + LAELJHAMFOF_IMHEBHCBMPP_OFFSET))(this, a1, a2);
		}

		::System::Void EJCMEGJGAOH(::AHHNGJGLOKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + LAELJHAMFOF_EJCMEGJGAOH_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint NINFDDIFNJM(::AHHNGJGLOKA a1, ::RPG::GameCore::BattleExtraPropertyAddition a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::AHHNGJGLOKA, ::RPG::GameCore::BattleExtraPropertyAddition))((::PBYTE)hIl2Cpp + LAELJHAMFOF_NINFDDIFNJM_OFFSET))(this, a1, a2);
		}

		::System::Void GJDAJJLPPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAELJHAMFOF_GJDAJJLPPNC_OFFSET))(this);
		}

	};
