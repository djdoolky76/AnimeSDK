#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGFENBLCABB;
class KPCNNOGGIDO;
class LICMNPOKCMB;
namespace RPG::Client { class MuseumData; }
namespace RPG::Client { class MuseumTarget; }

#define RPG_CLIENT_MUSEUMTARGETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A35B0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET UNITYSDK_OFFSET(0x1C2A35A0)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET UNITYSDK_OFFSET(0x1C2A3580)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0x1C2A3560)
#define RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET UNITYSDK_OFFSET(0x1C2A3550)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET UNITYSDK_OFFSET(0x1C2A3590)
#define RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET UNITYSDK_OFFSET(0x1C2A3570)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET UNITYSDK_OFFSET(0x1C29BCC0)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET UNITYSDK_OFFSET(0x1C29BE70)
#define RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x1C2A3650)

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumTargetData_TypeDefinitionIndex = 68287;

	class MuseumTargetData : public ::System::Object
	{
	public:
		::RPG::Client::MuseumTarget* _CurTarget_k__BackingField; // 0x10
		::RPG::Client::MuseumData* _OwnerMuseum_k__BackingField; // 0x18
		::System::Boolean _HaveTarget_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 _CheckTurn_k__BackingField; // 0x24
		// static const ::System::String* _MuseumTargetCheckTurnKey; // 0x0
		::System::Void _ctor(::RPG::Client::MuseumData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumData* get_OwnerMuseum()
		{
			return ((::RPG::Client::MuseumData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_OWNERMUSEUM_OFFSET))(this);
		}

		::System::Boolean get_HaveTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_HAVETARGET_OFFSET))(this);
		}

		::System::Void set_HaveTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_HAVETARGET_OFFSET))(this, a1);
		}

		::RPG::Client::MuseumTarget* get_CurTarget()
		{
			return ((::RPG::Client::MuseumTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CURTARGET_OFFSET))(this);
		}

		::System::Void set_CurTarget(::RPG::Client::MuseumTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MuseumTarget*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SET_CURTARGET_OFFSET))(this, a1);
		}

		::System::UInt32 get_CheckTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_GET_CHECKTURN_OFFSET))(this);
		}

		::System::Void SyncData(::KPCNNOGGIDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCNNOGGIDO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_OFFSET))(this, a1);
		}

		::System::Void SyncData_1(::AGFENBLCABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGFENBLCABB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_1_OFFSET))(this, a1);
		}

		::System::Void SyncData_2(::LICMNPOKCMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LICMNPOKCMB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSEUMTARGETDATA_SYNCDATA_2_OFFSET))(this, a1);
		}

	};
}
