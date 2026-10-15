#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALOHJILIGNK;
class MANIJAAODMF;
namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class SubMissionInfoConfig; }

#define ALOHJILIGNK_AGPFGMAFPHK_OFFSET UNITYSDK_OFFSET(0x15571D60)
#define ALOHJILIGNK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15571450)
#define ALOHJILIGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x155714D0)
#define ALOHJILIGNK_GET_INTERACTENTITYID_OFFSET UNITYSDK_OFFSET(0x15571DB0)
#define ALOHJILIGNK_KDJDJHLPINB_OFFSET UNITYSDK_OFFSET(0x15571A90)
#define ALOHJILIGNK_MBGBJDCIHMD_OFFSET UNITYSDK_OFFSET(0x15571630)
#define ALOHJILIGNK_NINFCBOKLII_OFFSET UNITYSDK_OFFSET(0x15571710)
#define ALOHJILIGNK_NLJCHKINKBK_OFFSET UNITYSDK_OFFSET(0x15571760)
#define ALOHJILIGNK_OCNKKFGOPCM_OFFSET UNITYSDK_OFFSET(0x15571DD0)
#define ALOHJILIGNK_ONGCAJOKNAB_OFFSET UNITYSDK_OFFSET(0x155714E0)
#define ALOHJILIGNK_PHHCIAAPABK_OFFSET UNITYSDK_OFFSET(0x15571840)
#define ALOHJILIGNK_SET_INTERACTENTITYID_OFFSET UNITYSDK_OFFSET(0x15571DC0)

inline static constexpr unsigned int ALOHJILIGNK_TypeDefinitionIndex = 80297;

	class ALOHJILIGNK : public ::System::Object
	{
	public:
		::MANIJAAODMF* IBPBJBOKKMF; // 0x10
		::System::UInt32 _InteractEntityID_k__BackingField; // 0x18
		::System::UInt32 AMIDCFAAHDP; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_CTOR_OFFSET))(this);
		}

		static ::ALOHJILIGNK* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::ALOHJILIGNK*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + ALOHJILIGNK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean ONGCAJOKNAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_ONGCAJOKNAB_OFFSET))(this);
		}

		::RPG::Client::IBigMapIcon* PHHCIAAPABK()
		{
			return ((::RPG::Client::IBigMapIcon*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_PHHCIAAPABK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>* KDJDJHLPINB()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::NavMap::ICartography*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_KDJDJHLPINB_OFFSET))(this);
		}

		::System::UInt32 get_InteractEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_GET_INTERACTENTITYID_OFFSET))(this);
		}

		::System::Void set_InteractEntityID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALOHJILIGNK_SET_INTERACTENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 AGPFGMAFPHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_AGPFGMAFPHK_OFFSET))(this);
		}

		::System::UInt32 NINFCBOKLII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_NINFCBOKLII_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* MBGBJDCIHMD()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_MBGBJDCIHMD_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* NLJCHKINKBK()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_NLJCHKINKBK_OFFSET))(this);
		}

		::RPG::GameCore::SubMissionInfoConfig* OCNKKFGOPCM()
		{
			return ((::RPG::GameCore::SubMissionInfoConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALOHJILIGNK_OCNKKFGOPCM_OFFSET))(this);
		}

	};
