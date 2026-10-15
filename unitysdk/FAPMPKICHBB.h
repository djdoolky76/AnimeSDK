#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDBHIOHEHHC;
class FAPMPKICHBB;
class OOADCLKADJC;

#define FAPMPKICHBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1568E270)
#define FAPMPKICHBB_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1568E160)
#define FAPMPKICHBB_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1568E120)
#define FAPMPKICHBB_GET_FUNCNT_OFFSET UNITYSDK_OFFSET(0x1568E140)
#define FAPMPKICHBB_GET_FUNID_OFFSET UNITYSDK_OFFSET(0x1568E100)
#define FAPMPKICHBB_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x1568E1E0)
#define FAPMPKICHBB_PLGEBDDNCKC_OFFSET UNITYSDK_OFFSET(0x1568E180)
#define FAPMPKICHBB_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1568E170)
#define FAPMPKICHBB_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1568E130)
#define FAPMPKICHBB_SET_FUNCNT_OFFSET UNITYSDK_OFFSET(0x1568E150)
#define FAPMPKICHBB_SET_FUNID_OFFSET UNITYSDK_OFFSET(0x1568E110)

	class FAPMPKICHBB : public ::System::Object
	{
	public:
		::OOADCLKADJC* _Config_k__BackingField; // 0x10
		::System::UInt64 _FunCnt_k__BackingField; // 0x18
		::System::UInt32 _AvatarID_k__BackingField; // 0x20
		::System::UInt32 _FunID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_FunID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_GET_FUNID_OFFSET))(this);
		}

		::System::Void set_FunID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAPMPKICHBB_SET_FUNID_OFFSET))(this, a1);
		}

		::OOADCLKADJC* get_Config()
		{
			return ((::OOADCLKADJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::OOADCLKADJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOADCLKADJC*))((::PBYTE)hIl2Cpp + FAPMPKICHBB_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::UInt64 get_FunCnt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_GET_FUNCNT_OFFSET))(this);
		}

		::System::Void set_FunCnt(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FAPMPKICHBB_SET_FUNCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAPMPKICHBB_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Void PLGEBDDNCKC(::DDBHIOHEHHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDBHIOHEHHC*))((::PBYTE)hIl2Cpp + FAPMPKICHBB_PLGEBDDNCKC_OFFSET))(this, a1);
		}

		::FAPMPKICHBB* NBHCPBBGAKA()
		{
			return ((::FAPMPKICHBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAPMPKICHBB_NBHCPBBGAKA_OFFSET))(this);
		}

	};
