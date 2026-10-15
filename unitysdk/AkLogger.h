#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AkLogger;
class AkLogger_ErrorLoggerInteropDelegate;
namespace System { class String; }

#define AKLOGGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F56F590)
#define AKLOGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56EDA0)
#define AKLOGGER_ERROR_OFFSET UNITYSDK_OFFSET(0x1F56F420)
#define AKLOGGER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F56EF80)
#define AKLOGGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F56EF50)
#define AKLOGGER_INIT_OFFSET UNITYSDK_OFFSET(0x1F56F100)
#define AKLOGGER_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1F56F140)
#define AKLOGGER_WARNING_OFFSET UNITYSDK_OFFSET(0x1F56F2B0)
#define AKLOGGER_WWISEINTERNALLOGERROR_OFFSET UNITYSDK_OFFSET(0x1F56EC30)

inline static constexpr unsigned int AkLogger_TypeDefinitionIndex = 44846;

	class AkLogger : public ::System::Object
	{
	public:
		::AkLogger_ErrorLoggerInteropDelegate* errorLoggerDelegate; // 0x10
		static ::AkLogger** StaticGet_ms_Instance()
		{
			return (::AkLogger**)UnitySDK::FromName("", "AkLogger")->GetStaticField(0xCA90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLOGGER_CCTOR_OFFSET))();
		}

		static ::AkLogger* get_Instance()
		{
			return ((::AkLogger*(*)())((::PBYTE)hIl2Cpp + AKLOGGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER_FINALIZE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLOGGER_INIT_OFFSET))(this);
		}

		static ::System::Void WwiseInternalLogError(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_WWISEINTERNALLOGERROR_OFFSET))(a1);
		}

		static ::System::Void Message(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_MESSAGE_OFFSET))(a1);
		}

		static ::System::Void Warning(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_WARNING_OFFSET))(a1);
		}

		static ::System::Void Error(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + AKLOGGER_ERROR_OFFSET))(a1);
		}

	};
