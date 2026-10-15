#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI_FFKBNBIMMHE;
class PFMDDEGLECM;

#define ENEIHJJPNPI_CBIEMGIAPCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7E760)
#define ENEIHJJPNPI_CBIEMGIAPCC_FLKOLJJOKAO_OFFSET UNITYSDK_OFFSET(0x1CD81050)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81000)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD80FE0)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81060)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD81020)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD80FC0)
#define ENEIHJJPNPI_CBIEMGIAPCC_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1CD81080)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1CD81010)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1CD80FF0)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1CD81070)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_READINFO_OFFSET UNITYSDK_OFFSET(0x1CD81040)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_VAL_OFFSET UNITYSDK_OFFSET(0x1CD80FD0)

inline static constexpr unsigned int ENEIHJJPNPI_CBIEMGIAPCC_TypeDefinitionIndex = 10852;

	class ENEIHJJPNPI_CBIEMGIAPCC : public ::System::Object
	{
	public:
		::PFMDDEGLECM* _Provider_k__BackingField; // 0x10
		::MFDEBKGHEIO _ReadInfo_k__BackingField; // 0x18
		::RPG::GameCore::FixPoint _Val_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _MinValue_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Val()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_SET_VAL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MinValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_GET_MINVALUE_OFFSET))(this);
		}

		::System::Void set_MinValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_SET_MINVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_GET_MAXVALUE_OFFSET))(this);
		}

		::System::Void set_MaxValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_SET_MAXVALUE_OFFSET))(this, a1);
		}

		::MFDEBKGHEIO get_ReadInfo()
		{
			return ((::MFDEBKGHEIO(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_GET_READINFO_OFFSET))(this);
		}

		::System::Void set_ReadInfo(::MFDEBKGHEIO a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDEBKGHEIO))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_SET_READINFO_OFFSET))(this, a1);
		}

		::System::Boolean FLKOLJJOKAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_FLKOLJJOKAO_OFFSET))(this);
		}

		::PFMDDEGLECM* get_Provider()
		{
			return ((::PFMDDEGLECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_GET_PROVIDER_OFFSET))(this);
		}

		::System::Void set_Provider(::PFMDDEGLECM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMDDEGLECM*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_SET_PROVIDER_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI_FFKBNBIMMHE* NBHCPBBGAKA()
		{
			return ((::ENEIHJJPNPI_FFKBNBIMMHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CBIEMGIAPCC_NBHCPBBGAKA_OFFSET))(this);
		}

	};
