#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMEIKAGDIFC.h"
#include "unitysdk/System/Object.h"
class BMCNDLNONMO;
class NCHGLFJCGIJ;
namespace RPG::Client { class IRogueTournPersonaModifier; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xE01C610)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE01BE10)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET UNITYSDK_OFFSET(0xE01C250)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET UNITYSDK_OFFSET(0xE01C530)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET UNITYSDK_OFFSET(0xE01BFD0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET UNITYSDK_OFFSET(0xE01BEA0)
#define RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xE01C040)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaModifierInfo_TypeDefinitionIndex = 67699;

	class RogueTournPersonaModifierInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt64, ::RPG::Client::IRogueTournPersonaModifier*>* _ModifierDataDict; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAll(::NCHGLFJCGIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCHGLFJCGIJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCALL_OFFSET))(this, a1);
		}

		::System::Void SyncAddModifier(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCADDMODIFIER_OFFSET))(this, a1);
		}

		::System::Void SyncUpdateModifier(::BMCNDLNONMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMCNDLNONMO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_SYNCUPDATEMODIFIER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* GetModifiersBySourceType(::AMEIKAGDIFC a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID, ::AMEIKAGDIFC))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GETMODIFIERSBYSOURCETYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>* get_ModifierDatas()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::IRogueTournPersonaModifier*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONAMODIFIERINFO_GET_MODIFIERDATAS_OFFSET))(this);
		}

	};
}
