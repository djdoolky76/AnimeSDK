#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI_FFKBNBIMMHE;
class PFMDDEGLECM;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define ENEIHJJPNPI_NKDKGFGBPNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD81DC0)
#define ENEIHJJPNPI_NKDKGFGBPNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E980)
#define ENEIHJJPNPI_NKDKGFGBPNL_DHLKBKHHFMG_OFFSET UNITYSDK_OFFSET(0x1CD81730)
#define ENEIHJJPNPI_NKDKGFGBPNL_FLKOLJJOKAO_OFFSET UNITYSDK_OFFSET(0x1CD81CF0)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_ADSORPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD81740)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD819B0)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81860)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81CD0)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD81D00)
#define ENEIHJJPNPI_NKDKGFGBPNL_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD81B00)
#define ENEIHJJPNPI_NKDKGFGBPNL_GNHDPFKBDGD_OFFSET UNITYSDK_OFFSET(0x1CD81760)
#define ENEIHJJPNPI_NKDKGFGBPNL_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1CD81D30)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_ADSORPTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1CD81750)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81AB0)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81960)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81CE0)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD81D20)
#define ENEIHJJPNPI_NKDKGFGBPNL_SET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD81C70)

inline static constexpr unsigned int ENEIHJJPNPI_NKDKGFGBPNL_TypeDefinitionIndex = 10854;

	class ENEIHJJPNPI_NKDKGFGBPNL : public ::System::Object
	{
	public:
		::RPG::GameCore::DynamicFloat* FODMGGKPEDP; // 0x10
		::MFDEBKGHEIO _ReadInfo_k__BackingField; // 0x18
		::RPG::GameCore::PropertyAdsorptionConfig* _AdsorptionConfig_k__BackingField; // 0x30
		::PFMDDEGLECM* _Provider_k__BackingField; // 0x38
		::RPG::GameCore::TaskConfig* EJGLBFLIJEF; // 0x40
		::RPG::GameCore::DynamicFloat* NDFKLOEADNN; // 0x48
		::RPG::GameCore::StringHash BKNPNNKCFFB; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint BMMCPCJNPPD; // 0x58
		static ::RPG::GameCore::StringHash* StaticGet_GHBCIKDOLNM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "NKDKGFGBPNL")->GetStaticField(0x2840);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_CCTOR_OFFSET))();
		}

		::System::Void DHLKBKHHFMG(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_DHLKBKHHFMG_OFFSET))(this, a1);
		}

		::RPG::GameCore::PropertyAdsorptionConfig* get_AdsorptionConfig()
		{
			return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_ADSORPTIONCONFIG_OFFSET))(this);
		}

		::System::Void set_AdsorptionConfig(::RPG::GameCore::PropertyAdsorptionConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_ADSORPTIONCONFIG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GNHDPFKBDGD(::RPG::GameCore::DynamicFloat* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::DynamicFloat*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GNHDPFKBDGD_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MinValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_MinValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_MINVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_MaxValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Val()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_VAL_OFFSET))(this, a1);
		}

		::PFMDDEGLECM* get_Provider()
		{
			return ((::PFMDDEGLECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void set_Provider(::PFMDDEGLECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMDDEGLECM*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_PROVIDER_OFFSET))(this, a1);
		}

		::System::Boolean FLKOLJJOKAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_FLKOLJJOKAO_OFFSET))(this);
		}

		::MFDEBKGHEIO get_ReadInfo()
		{
			return ((::MFDEBKGHEIO(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_GET_READINFO_OFFSET))(this);
		}

		::System::Void set_ReadInfo(::MFDEBKGHEIO a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDEBKGHEIO))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_SET_READINFO_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI_FFKBNBIMMHE* NBHCPBBGAKA()
		{
			return ((::ENEIHJJPNPI_FFKBNBIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NKDKGFGBPNL_NBHCPBBGAKA_OFFSET))(this);
		}

	};
