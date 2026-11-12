#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAODLPJMEFE;
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }

#define RPG_CLIENT_SUPPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEC00670)
#define RPG_CLIENT_SUPPORTDATA_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xEC00750)
#define RPG_CLIENT_SUPPORTDATA_GET_HASREMARKNAME_OFFSET UNITYSDK_OFFSET(0xEC00DE0)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0xEC00C50)
#define RPG_CLIENT_SUPPORTDATA_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0xEC00E40)
#define RPG_CLIENT_SUPPORTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xEC00D20)
#define RPG_CLIENT_SUPPORTDATA_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0xEC00B40)
#define RPG_CLIENT_SUPPORTDATA_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0xEC00C00)
#define RPG_CLIENT_SUPPORTDATA_GET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xEC00DC0)
#define RPG_CLIENT_SUPPORTDATA_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0xEC009F0)
#define RPG_CLIENT_SUPPORTDATA_GET_SUPPORTCOUNT_OFFSET UNITYSDK_OFFSET(0xEC00D70)
#define RPG_CLIENT_SUPPORTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xEC00BB0)
#define RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xEC00DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SupportData_TypeDefinitionIndex = 65700;

	class SupportData : public ::System::Object
	{
	public:
		::KAODLPJMEFE* _RowInfo; // 0x10
		::RPG::Client::PlayerPlatformInfo* _PlatformInfo_k__BackingField; // 0x18
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo; // 0x20
		::System::Void _ctor(::KAODLPJMEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAODLPJMEFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_NICKNAME_OFFSET))(this);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::String* get_RemarkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_REMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::UInt32 get_SupportCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_SUPPORTCOUNT_OFFSET))(this);
		}

		::RPG::Client::PlayerPlatformInfo* get_PlatformInfo()
		{
			return ((::RPG::Client::PlayerPlatformInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_PLATFORMINFO_OFFSET))(this);
		}

		::System::Void set_PlatformInfo(::RPG::Client::PlayerPlatformInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerPlatformInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_SET_PLATFORMINFO_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRemarkName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HASREMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SUPPORTDATA_GET_HEADICONID_OFFSET))(this);
		}

	};
}
