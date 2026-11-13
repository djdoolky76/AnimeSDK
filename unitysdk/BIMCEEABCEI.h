#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BIMCEEABCEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAC4590)
#define BIMCEEABCEI_GET_DARKMINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x1BAC44F0)
#define BIMCEEABCEI_GET_LITTLEGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1BAC44B0)
#define BIMCEEABCEI_GET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x1BAC44D0)
#define BIMCEEABCEI_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BAC4490)
#define BIMCEEABCEI_GET_RECORDDRIVERICONPATH_OFFSET UNITYSDK_OFFSET(0x1BAC4550)
#define BIMCEEABCEI_GET_RECORDDRIVERNAME_OFFSET UNITYSDK_OFFSET(0x1BAC4530)
#define BIMCEEABCEI_GET_RECORDTIME_OFFSET UNITYSDK_OFFSET(0x1BAC4570)
#define BIMCEEABCEI_GET_TOTALLAP_OFFSET UNITYSDK_OFFSET(0x1BAC4510)
#define BIMCEEABCEI_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1BAC4470)
#define BIMCEEABCEI_SET_DARKMINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x1BAC4500)
#define BIMCEEABCEI_SET_LITTLEGAMECONFIGPATH_OFFSET UNITYSDK_OFFSET(0x1BAC44C0)
#define BIMCEEABCEI_SET_MINIMAPPATH_OFFSET UNITYSDK_OFFSET(0x1BAC44E0)
#define BIMCEEABCEI_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BAC44A0)
#define BIMCEEABCEI_SET_RECORDDRIVERICONPATH_OFFSET UNITYSDK_OFFSET(0x1BAC4560)
#define BIMCEEABCEI_SET_RECORDDRIVERNAME_OFFSET UNITYSDK_OFFSET(0x1BAC4540)
#define BIMCEEABCEI_SET_RECORDTIME_OFFSET UNITYSDK_OFFSET(0x1BAC4580)
#define BIMCEEABCEI_SET_TOTALLAP_OFFSET UNITYSDK_OFFSET(0x1BAC4520)
#define BIMCEEABCEI_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x1BAC4480)

inline static constexpr unsigned int BIMCEEABCEI_TypeDefinitionIndex = 84451;

	class BIMCEEABCEI : public ::System::Object
	{
	public:
		::System::String* _RecordDriverIconPath_k__BackingField; // 0x10
		::System::String* _DarkMiniMapPath_k__BackingField; // 0x18
		::System::String* _LittleGameConfigPath_k__BackingField; // 0x20
		::System::String* _MinimapPath_k__BackingField; // 0x28
		::System::Single _RecordTime_k__BackingField; // 0x30
		::System::UInt32 _TotalLap_k__BackingField; // 0x34
		::RPG::Client::TextID _RecordDriverName_k__BackingField; // 0x38
		::System::UInt32 _TrackID_k__BackingField; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Name_k__BackingField; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TrackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_TRACKID_OFFSET))(this);
		}

		::System::Void set_TrackID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_TRACKID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_LittleGameConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_LITTLEGAMECONFIGPATH_OFFSET))(this);
		}

		::System::Void set_LittleGameConfigPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_LITTLEGAMECONFIGPATH_OFFSET))(this, a1);
		}

		::System::String* get_MinimapPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_MINIMAPPATH_OFFSET))(this);
		}

		::System::Void set_MinimapPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_MINIMAPPATH_OFFSET))(this, a1);
		}

		::System::String* get_DarkMiniMapPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_DARKMINIMAPPATH_OFFSET))(this);
		}

		::System::Void set_DarkMiniMapPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_DARKMINIMAPPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_TotalLap()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_TOTALLAP_OFFSET))(this);
		}

		::System::Void set_TotalLap(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_TOTALLAP_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_RecordDriverName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_RECORDDRIVERNAME_OFFSET))(this);
		}

		::System::Void set_RecordDriverName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_RECORDDRIVERNAME_OFFSET))(this, a1);
		}

		::System::String* get_RecordDriverIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_RECORDDRIVERICONPATH_OFFSET))(this);
		}

		::System::Void set_RecordDriverIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_RECORDDRIVERICONPATH_OFFSET))(this, a1);
		}

		::System::Single get_RecordTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMCEEABCEI_GET_RECORDTIME_OFFSET))(this);
		}

		::System::Void set_RecordTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BIMCEEABCEI_SET_RECORDTIME_OFFSET))(this, a1);
		}

	};
