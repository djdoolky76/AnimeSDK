#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNIIELGAKCE;
namespace RPG::Client { class OfferingRewardData; }
namespace System { class String; }

#define GNIIELGAKCE_BJLHGMOIEIE_OFFSET UNITYSDK_OFFSET(0x15B125C0)
#define GNIIELGAKCE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15B12290)
#define GNIIELGAKCE_CJKMMOHCAOI_OFFSET UNITYSDK_OFFSET(0x15B123C0)
#define GNIIELGAKCE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B122F0)
#define GNIIELGAKCE_DBJELBHIPDN_OFFSET UNITYSDK_OFFSET(0x15B12420)
#define GNIIELGAKCE_GET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0x15B12300)
#define GNIIELGAKCE_MECHKEFKLJI_OFFSET UNITYSDK_OFFSET(0x15B12320)
#define GNIIELGAKCE_SET_OFFERINGID_OFFSET UNITYSDK_OFFSET(0x15B12310)

inline static constexpr unsigned int GNIIELGAKCE_TypeDefinitionIndex = 63805;

	class GNIIELGAKCE : public ::System::Object
	{
	public:
		::System::UInt32 _OfferingID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_CTOR_OFFSET))(this);
		}

		static ::GNIIELGAKCE* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GNIIELGAKCE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GNIIELGAKCE_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::UInt32 get_OfferingID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_GET_OFFERINGID_OFFSET))(this);
		}

		::System::Void set_OfferingID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNIIELGAKCE_SET_OFFERINGID_OFFSET))(this, a1);
		}

		::RPG::Client::OfferingRewardData* MECHKEFKLJI()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_MECHKEFKLJI_OFFSET))(this);
		}

		::System::UInt32 CJKMMOHCAOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_CJKMMOHCAOI_OFFSET))(this);
		}

		::System::String* DBJELBHIPDN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_DBJELBHIPDN_OFFSET))(this);
		}

		::System::UInt32 BJLHGMOIEIE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIIELGAKCE_BJLHGMOIEIE_OFFSET))(this);
		}

	};
