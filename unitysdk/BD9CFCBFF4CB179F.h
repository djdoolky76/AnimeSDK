#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define BD9CFCBFF4CB179F_APM_BLOCK_REPORT_OFFSET UNITYSDK_OFFSET(0x2946F50)
#define BD9CFCBFF4CB179F_APM_CONFIG_OFFSET UNITYSDK_OFFSET(0x2946FA0)
#define BD9CFCBFF4CB179F_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET UNITYSDK_OFFSET(0x2947030)
#define BD9CFCBFF4CB179F_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET UNITYSDK_OFFSET(0x2947120)
#define BD9CFCBFF4CB179F_APM_CRASH_REPORT_OFFSET UNITYSDK_OFFSET(0x29471F0)
#define BD9CFCBFF4CB179F_APM_GAMELOG_REPORT_OFFSET UNITYSDK_OFFSET(0x2947240)
#define BD9CFCBFF4CB179F_APM_SET_AID_OFFSET UNITYSDK_OFFSET(0x2947290)
#define BD9CFCBFF4CB179F_APM_SET_SERVER_ID_OFFSET UNITYSDK_OFFSET(0x29473D0)
#define BD9CFCBFF4CB179F_APM_SET_UID_OFFSET UNITYSDK_OFFSET(0x2947560)
#define BD9CFCBFF4CB179F_APM_SET_USER_DEVICE_ID_OFFSET UNITYSDK_OFFSET(0x29476A0)
#define BD9CFCBFF4CB179F_APM_START_OFFSET UNITYSDK_OFFSET(0x29477E0)
#define BD9CFCBFF4CB179F__CCTOR_OFFSET UNITYSDK_OFFSET(0x2946EF0)

inline static constexpr unsigned int BD9CFCBFF4CB179F_TypeDefinitionIndex = 15457;

class BD9CFCBFF4CB179F : public ::System::Object
{
public:
	static ::System::String** StaticGet_E4A5FFAAFCA197A2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(BD9CFCBFF4CB179F_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void apm_crash_add_custom_key_value(::System::String* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_CRASH_ADD_CUSTOM_KEY_VALUE_OFFSET))(F220A2D27F7C6B6C);
	}

	static ::System::Void apm_set_server_id(::System::String* EFFE89955FD04D81)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_SET_SERVER_ID_OFFSET))(EFFE89955FD04D81);
	}

	static ::System::Void apm_start(::System::String* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_START_OFFSET))(ACDE58E97E37D13C);
	}

	static ::System::Void apm_crash_delete_unsent_dump()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_CRASH_DELETE_UNSENT_DUMP_OFFSET))();
	}

	static ::System::Void apm_set_aid(::System::String* F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_SET_AID_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Void apm_config(::System::String* ACDE58E97E37D13C)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_CONFIG_OFFSET))(ACDE58E97E37D13C);
	}

	static ::System::Void apm_crash_report(::System::String* F220A2D27F7C6B6C)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_CRASH_REPORT_OFFSET))(F220A2D27F7C6B6C);
	}

	static ::System::Void apm_set_user_device_id(::System::String* F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_SET_USER_DEVICE_ID_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Void apm_set_uid(::System::String* F5AEFA05C9F71B82)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_SET_UID_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Void apm_gamelog_report(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_GAMELOG_REPORT_OFFSET))(F1BF0FE85E9DD584);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F__CCTOR_OFFSET))();
	}

	static ::System::Void apm_block_report(::System::String* F1BF0FE85E9DD584)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BD9CFCBFF4CB179F_APM_BLOCK_REPORT_OFFSET))(F1BF0FE85E9DD584);
	}
};
