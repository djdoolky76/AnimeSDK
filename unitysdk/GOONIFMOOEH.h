#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeCatchSlotStatus.h"
#include "unitysdk/System/Object.h"
class GOONIFMOOEH;
namespace RPG::Client { class CakeCatchCatData; }

#define GOONIFMOOEH_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0x187C1290)
#define GOONIFMOOEH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x187C11C0)
#define GOONIFMOOEH_CTOR_OFFSET UNITYSDK_OFFSET(0x187C11B0)
#define GOONIFMOOEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187C1620)
#define GOONIFMOOEH_GET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x187C16D0)
#define GOONIFMOOEH_GET_CAKEID_OFFSET UNITYSDK_OFFSET(0x187C1660)
#define GOONIFMOOEH_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x187C1680)
#define GOONIFMOOEH_PDKEGCMFHIJ_OFFSET UNITYSDK_OFFSET(0x187C12F0)
#define GOONIFMOOEH_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x187C1200)
#define GOONIFMOOEH_SET_CAKEDATA_OFFSET UNITYSDK_OFFSET(0x187C16E0)
#define GOONIFMOOEH_SET_CAKEID_OFFSET UNITYSDK_OFFSET(0x187C1670)

inline static constexpr unsigned int GOONIFMOOEH_TypeDefinitionIndex = 64428;

	class GOONIFMOOEH : public ::System::Object
	{
	public:
		::RPG::Client::CakeCatchCatData* _CakeData_k__BackingField; // 0x10
		::System::UInt32 _CakeID_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_CTOR_OFFSET))(this);
		}

		static ::GOONIFMOOEH* BPLPBPMEODA()
		{
			return ((::GOONIFMOOEH*(*)())((::PBYTE)hIl2Cpp + GOONIFMOOEH_BPLPBPMEODA_OFFSET))();
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void ALJIOCDBMKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOONIFMOOEH_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::RPG::Client::CakeCatchSlotStatus PDKEGCMFHIJ()
		{
			return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_PDKEGCMFHIJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_DISPOSE_OFFSET))(this);
		}

		::System::UInt32 get_CakeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_GET_CAKEID_OFFSET))(this);
		}

		::System::Void set_CakeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOONIFMOOEH_SET_CAKEID_OFFSET))(this, a1);
		}

		::RPG::Client::CakeCatchSlotStatus JBENBABCOGB()
		{
			return ((::RPG::Client::CakeCatchSlotStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_JBENBABCOGB_OFFSET))(this);
		}

		::RPG::Client::CakeCatchCatData* get_CakeData()
		{
			return ((::RPG::Client::CakeCatchCatData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOONIFMOOEH_GET_CAKEDATA_OFFSET))(this);
		}

		::System::Void set_CakeData(::RPG::Client::CakeCatchCatData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchCatData*))((::PBYTE)hIl2Cpp + GOONIFMOOEH_SET_CAKEDATA_OFFSET))(this, a1);
		}

	};
