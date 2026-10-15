#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBIAFBMMBBA;
class FCNLPLHOACB;
class IOJNNBAILBC_IHEONELNBBF;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftCraftProgressAttrRadarViewModel_Factory; }

#define DBIAFBMMBBA_LFHLAINFKFN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xDFE3540)
#define DBIAFBMMBBA_LFHLAINFKFN_CTOR_OFFSET UNITYSDK_OFFSET(0xDFE3620)
#define DBIAFBMMBBA_LFHLAINFKFN_GET_RADARFACTORY_OFFSET UNITYSDK_OFFSET(0xDFE3520)
#define DBIAFBMMBBA_LFHLAINFKFN_GET_TARGETFACTORY_OFFSET UNITYSDK_OFFSET(0xDFE3500)
#define DBIAFBMMBBA_LFHLAINFKFN_SET_RADARFACTORY_OFFSET UNITYSDK_OFFSET(0xDFE3530)
#define DBIAFBMMBBA_LFHLAINFKFN_SET_TARGETFACTORY_OFFSET UNITYSDK_OFFSET(0xDFE3510)

inline static constexpr unsigned int DBIAFBMMBBA_LFHLAINFKFN_TypeDefinitionIndex = 79554;

	class DBIAFBMMBBA_LFHLAINFKFN : public ::System::Object
	{
	public:
		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel_Factory* _RadarFactory_k__BackingField; // 0x10
		::IOJNNBAILBC_IHEONELNBBF* _TargetFactory_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_CTOR_OFFSET))(this);
		}

		::IOJNNBAILBC_IHEONELNBBF* get_TargetFactory()
		{
			return ((::IOJNNBAILBC_IHEONELNBBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_GET_TARGETFACTORY_OFFSET))(this);
		}

		::System::Void set_TargetFactory(::IOJNNBAILBC_IHEONELNBBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJNNBAILBC_IHEONELNBBF*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_SET_TARGETFACTORY_OFFSET))(this, a1);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel_Factory* get_RadarFactory()
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel_Factory*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_GET_RADARFACTORY_OFFSET))(this);
		}

		::System::Void set_RadarFactory(::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel_Factory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftCraftProgressAttrRadarViewModel_Factory*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_SET_RADARFACTORY_OFFSET))(this, a1);
		}

		::DBIAFBMMBBA* BPLPBPMEODA(::FCNLPLHOACB* a1)
		{
			return ((::DBIAFBMMBBA*(*)(::PVOID, ::FCNLPLHOACB*))((::PBYTE)hIl2Cpp + DBIAFBMMBBA_LFHLAINFKFN_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
