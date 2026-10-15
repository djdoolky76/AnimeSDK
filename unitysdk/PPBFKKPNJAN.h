#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPBFKKPNJAN_CHJBLEGIBAA_OFFSET UNITYSDK_OFFSET(0xC37A6F0)
#define PPBFKKPNJAN_CTOR_OFFSET UNITYSDK_OFFSET(0xC37A8F0)
#define PPBFKKPNJAN_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0xC37A520)
#define PPBFKKPNJAN_FNHJAIKFKIA_OFFSET UNITYSDK_OFFSET(0xC37A580)
#define PPBFKKPNJAN_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xC37A530)

inline static constexpr unsigned int PPBFKKPNJAN_TypeDefinitionIndex = 53767;

	class PPBFKKPNJAN : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MJBKGGPAKHP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBFKKPNJAN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBFKKPNJAN_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBFKKPNJAN_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void CHJBLEGIBAA(::RPG::GameCore::RtBehaviorFlag a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PPBFKKPNJAN_CHJBLEGIBAA_OFFSET))(this, a1, a2);
		}

		::System::Void FNHJAIKFKIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPBFKKPNJAN_FNHJAIKFKIA_OFFSET))(this);
		}

	};
