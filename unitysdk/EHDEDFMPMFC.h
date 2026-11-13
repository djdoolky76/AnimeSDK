#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/IPVersion.h"
#include "unitysdk/System/Object.h"

#define EHDEDFMPMFC_CTOR_OFFSET UNITYSDK_OFFSET(0x2032C410)
#define EHDEDFMPMFC_GET_FROM_OFFSET UNITYSDK_OFFSET(0x203325C0)
#define EHDEDFMPMFC_GET_PACKETLOSSRATE_OFFSET UNITYSDK_OFFSET(0x20332620)
#define EHDEDFMPMFC_GET_RTT_OFFSET UNITYSDK_OFFSET(0x20332600)
#define EHDEDFMPMFC_GET_TO_OFFSET UNITYSDK_OFFSET(0x203325E0)
#define EHDEDFMPMFC_SET_FROM_OFFSET UNITYSDK_OFFSET(0x203325D0)
#define EHDEDFMPMFC_SET_PACKETLOSSRATE_OFFSET UNITYSDK_OFFSET(0x20332630)
#define EHDEDFMPMFC_SET_RTT_OFFSET UNITYSDK_OFFSET(0x20332610)
#define EHDEDFMPMFC_SET_TO_OFFSET UNITYSDK_OFFSET(0x203325F0)

inline static constexpr unsigned int EHDEDFMPMFC_TypeDefinitionIndex = 44995;

	class EHDEDFMPMFC : public ::System::Object
	{
	public:
		::System::Single _PacketLossRate_k__BackingField; // 0x10
		::RPG::Client::IPVersion _To_k__BackingField; // 0x14
		::System::Single _RTT_k__BackingField; // 0x18
		::RPG::Client::IPVersion _From_k__BackingField; // 0x1C
		::System::Void _ctor(::RPG::Client::IPVersion a1, ::RPG::Client::IPVersion a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion, ::RPG::Client::IPVersion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::IPVersion get_From()
		{
			return ((::RPG::Client::IPVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_GET_FROM_OFFSET))(this);
		}

		::System::Void set_From(::RPG::Client::IPVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_SET_FROM_OFFSET))(this, a1);
		}

		::RPG::Client::IPVersion get_To()
		{
			return ((::RPG::Client::IPVersion(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_GET_TO_OFFSET))(this);
		}

		::System::Void set_To(::RPG::Client::IPVersion a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IPVersion))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_SET_TO_OFFSET))(this, a1);
		}

		::System::Single get_RTT()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_GET_RTT_OFFSET))(this);
		}

		::System::Void set_RTT(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_SET_RTT_OFFSET))(this, a1);
		}

		::System::Single get_PacketLossRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_GET_PACKETLOSSRATE_OFFSET))(this);
		}

		::System::Void set_PacketLossRate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHDEDFMPMFC_SET_PACKETLOSSRATE_OFFSET))(this, a1);
		}

	};
