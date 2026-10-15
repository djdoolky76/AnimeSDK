#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ENEIHJJPNPI_FFKBNBIMMHE;
class PFMDDEGLECM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

#define ENEIHJJPNPI_FJNIFLCNGIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E850)
#define ENEIHJJPNPI_FJNIFLCNGIK_FLKOLJJOKAO_OFFSET UNITYSDK_OFFSET(0x1CD81700)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_ADSORPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD816E0)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81440)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81340)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81710)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD816B0)
#define ENEIHJJPNPI_FJNIFLCNGIK_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD81220)
#define ENEIHJJPNPI_FJNIFLCNGIK_GNHDPFKBDGD_OFFSET UNITYSDK_OFFSET(0x1CD81120)
#define ENEIHJJPNPI_FJNIFLCNGIK_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1CD810D0)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_ADSORPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD816F0)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81660)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81610)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81720)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD816D0)
#define ENEIHJJPNPI_FJNIFLCNGIK_SET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD81540)

inline static constexpr unsigned int ENEIHJJPNPI_FJNIFLCNGIK_TypeDefinitionIndex = 10853;

	class ENEIHJJPNPI_FJNIFLCNGIK : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicFloat* NDFKLOEADNN; // 0x10
		::RPG::GameCore::DynamicFloat* FODMGGKPEDP; // 0x18
		::MFDEBKGHEIO _ReadInfo_k__BackingField; // 0x20
		::PFMDDEGLECM* _Provider_k__BackingField; // 0x38
		::RPG::GameCore::DynamicFloat* MGIHBPBIHFC; // 0x40
		::RPG::GameCore::PropertyAdsorptionConfig* _AdsorptionConfig_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_CTOR_OFFSET))(this);
		}

		::ENEIHJJPNPI_FFKBNBIMMHE* NBHCPBBGAKA()
		{
			return ((::ENEIHJJPNPI_FFKBNBIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_NBHCPBBGAKA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GNHDPFKBDGD(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GNHDPFKBDGD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Val()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_VAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MinValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_MinValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_MINVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_MaxValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::MFDEBKGHEIO get_ReadInfo()
		{
			return ((::MFDEBKGHEIO(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_READINFO_OFFSET))(this);
		}

		::System::Void set_ReadInfo(::MFDEBKGHEIO a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDEBKGHEIO))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_READINFO_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropertyAdsorptionConfig* get_AdsorptionConfig()
		{
			return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_ADSORPTIONCONFIG_OFFSET))(this);
		}

		::System::Void set_AdsorptionConfig(::RPG::GameCore::PropertyAdsorptionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_ADSORPTIONCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean FLKOLJJOKAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_FLKOLJJOKAO_OFFSET))(this);
		}

		::PFMDDEGLECM* get_Provider()
		{
			return ((::PFMDDEGLECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void set_Provider(::PFMDDEGLECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMDDEGLECM*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_FJNIFLCNGIK_SET_PROVIDER_OFFSET))(this, a1);
		}

	};
