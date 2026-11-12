#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI_FFKBNBIMMHE;
class PFMDDEGLECM;

#define ENEIHJJPNPI_CBIEMGIAPCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF81F20)
#define ENEIHJJPNPI_CBIEMGIAPCC_FLKOLJJOKAO_OFFSET UNITYSDK_OFFSET(0x1DF847D0)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1DF84780)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1DF84760)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1DF847E0)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_READINFO_OFFSET UNITYSDK_OFFSET(0x1DF847A0)
#define ENEIHJJPNPI_CBIEMGIAPCC_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1DF84740)
#define ENEIHJJPNPI_CBIEMGIAPCC_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1DF84800)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x1DF84790)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_MINVALUE_OFFSET UNITYSDK_OFFSET(0x1DF84770)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_PROVIDER_OFFSET UNITYSDK_OFFSET(0x1DF847F0)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_READINFO_OFFSET UNITYSDK_OFFSET(0x1DF847C0)
#define ENEIHJJPNPI_CBIEMGIAPCC_SET_VAL_OFFSET UNITYSDK_OFFSET(0x1DF84750)

inline static constexpr unsigned int ENEIHJJPNPI_CBIEMGIAPCC_TypeDefinitionIndex = 10868;

	class ENEIHJJPNPI_CBIEMGIAPCC : public ::System::Object
	{
	public:
		::MFDEBKGHEIO _ReadInfo_k__BackingField; // 0x10
		::PFMDDEGLECM* _Provider_k__BackingField; // 0x28
		::RPG::GameCore::FixPoint _MinValue_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _MaxValue_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _Val_k__BackingField; // 0x40
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
