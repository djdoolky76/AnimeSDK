#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/System/Object.h"
class DKHCPBEODOE;
class EIDIGCLKLOA;
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class TaskContext; }

#define EIDIGCLKLOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19A8BE50)
#define EIDIGCLKLOA_CJDFEPOENBE_OFFSET UNITYSDK_OFFSET(0x19A8C210)
#define EIDIGCLKLOA_CLEAR_OFFSET UNITYSDK_OFFSET(0x19A8C0A0)
#define EIDIGCLKLOA_CTOR_OFFSET UNITYSDK_OFFSET(0x19A8BF40)
#define EIDIGCLKLOA_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x19A8C460)
#define EIDIGCLKLOA_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x19A8C4E0)
#define EIDIGCLKLOA_GET_NORMALMODETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x19A8C4C0)
#define EIDIGCLKLOA_GET_PROGRESSMODE_OFFSET UNITYSDK_OFFSET(0x19A8C440)
#define EIDIGCLKLOA_IGFDFJBDCON_OFFSET UNITYSDK_OFFSET(0x19A8C130)
#define EIDIGCLKLOA_IIMDNPMEOMO_OFFSET UNITYSDK_OFFSET(0x19A8C1A0)
#define EIDIGCLKLOA_JDDOLBNGDAO_OFFSET UNITYSDK_OFFSET(0x19A8BFB0)
#define EIDIGCLKLOA_KBGGDCBJOKK_OFFSET UNITYSDK_OFFSET(0x19A8C470)
#define EIDIGCLKLOA_MPCOCPDLFJF_OFFSET UNITYSDK_OFFSET(0x19A8C3F0)
#define EIDIGCLKLOA_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x19A8BF50)
#define EIDIGCLKLOA_PAGKOAEOLKA_1_OFFSET UNITYSDK_OFFSET(0x19A8C310)
#define EIDIGCLKLOA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x19A8C250)
#define EIDIGCLKLOA_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x19A8C4F0)
#define EIDIGCLKLOA_SET_NORMALMODETHRESHOLDCONFIG_OFFSET UNITYSDK_OFFSET(0x19A8C4D0)
#define EIDIGCLKLOA_SET_PROGRESSMODE_OFFSET UNITYSDK_OFFSET(0x19A8C450)

inline static constexpr unsigned int EIDIGCLKLOA_TypeDefinitionIndex = 56717;

	class EIDIGCLKLOA : public ::System::Object
	{
	public:
		::DKHCPBEODOE* _NormalModeThresholdConfig_k__BackingField; // 0x10
		::System::Int32 LKBKDNAMNEG; // 0x18
		::System::Single _Duration_k__BackingField; // 0x1C
		::RPG::GameCore::IronTombProgressMode _ProgressMode_k__BackingField; // 0x20
		// static const ::System::Object ADBJELLGJAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_CTOR_OFFSET))(this);
		}

		static ::EIDIGCLKLOA* BPLPBPMEODA(::RPG::GameCore::IronTombProgressMode a1, ::System::Int32 a2, ::RPG::GameCore::IronTombNormalModeThresholdConfig* a3, ::System::Single a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::EIDIGCLKLOA*(*)(::RPG::GameCore::IronTombProgressMode, ::System::Int32, ::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::System::Single, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::EIDIGCLKLOA* JDDOLBNGDAO()
		{
			return ((::EIDIGCLKLOA*(*)())((::PBYTE)hIl2Cpp + EIDIGCLKLOA_JDDOLBNGDAO_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_CLEAR_OFFSET))(this);
		}

		::System::Boolean IGFDFJBDCON(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_IGFDFJBDCON_OFFSET))(this, a1);
		}

		::System::Boolean IIMDNPMEOMO(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_IIMDNPMEOMO_OFFSET))(this, a1);
		}

		::System::Boolean CJDFEPOENBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_CJDFEPOENBE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::EIDIGCLKLOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EIDIGCLKLOA*))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA_1(::RPG::GameCore::IronTombProgressMode a1, ::System::Int32 a2, ::RPG::GameCore::IronTombNormalModeThresholdConfig* a3, ::System::Single a4, ::RPG::GameCore::TaskContext* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IronTombProgressMode, ::System::Int32, ::RPG::GameCore::IronTombNormalModeThresholdConfig*, ::System::Single, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_PAGKOAEOLKA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean MPCOCPDLFJF(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_MPCOCPDLFJF_OFFSET))(this, a1);
		}

		::RPG::GameCore::IronTombProgressMode get_ProgressMode()
		{
			return ((::RPG::GameCore::IronTombProgressMode(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_GET_PROGRESSMODE_OFFSET))(this);
		}

		::System::Void set_ProgressMode(::RPG::GameCore::IronTombProgressMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IronTombProgressMode))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_SET_PROGRESSMODE_OFFSET))(this, a1);
		}

		::System::Int32 FJNIJBIIFGO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Single KBGGDCBJOKK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_KBGGDCBJOKK_OFFSET))(this);
		}

		::DKHCPBEODOE* get_NormalModeThresholdConfig()
		{
			return ((::DKHCPBEODOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_GET_NORMALMODETHRESHOLDCONFIG_OFFSET))(this);
		}

		::System::Void set_NormalModeThresholdConfig(::DKHCPBEODOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKHCPBEODOE*))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_SET_NORMALMODETHRESHOLDCONFIG_OFFSET))(this, a1);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_Duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EIDIGCLKLOA_SET_DURATION_OFFSET))(this, a1);
		}

	};
