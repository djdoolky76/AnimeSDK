#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNative/BNativeDebug_LogLevel.h"
#include "unitysdk/System/Object.h"

namespace BNative { class IDebugContext; }
namespace BNative { class IXDebug; }
namespace System { class Exception; }
namespace System { class String; }

#define BNATIVE_BNATIVEDEBUG_ASSERTFORMAT_OFFSET UNITYSDK_OFFSET(0x159A07C0)
#define BNATIVE_BNATIVEDEBUG_GET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x1599E840)
#define BNATIVE_BNATIVEDEBUG_LOGERRORFORMAT_1_OFFSET UNITYSDK_OFFSET(0x159A01E0)
#define BNATIVE_BNATIVEDEBUG_LOGERRORFORMAT_OFFSET UNITYSDK_OFFSET(0x1599FEB0)
#define BNATIVE_BNATIVEDEBUG_LOGERROR_1_OFFSET UNITYSDK_OFFSET(0x1599FE70)
#define BNATIVE_BNATIVEDEBUG_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1599FB70)
#define BNATIVE_BNATIVEDEBUG_LOGEXCEPTION_1_OFFSET UNITYSDK_OFFSET(0x159A0740)
#define BNATIVE_BNATIVEDEBUG_LOGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x159A03F0)
#define BNATIVE_BNATIVEDEBUG_LOGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1599F0E0)
#define BNATIVE_BNATIVEDEBUG_LOGFORMAT_OFFSET UNITYSDK_OFFSET(0x1599EDB0)
#define BNATIVE_BNATIVEDEBUG_LOGWARNINGFORMAT_1_OFFSET UNITYSDK_OFFSET(0x1599F960)
#define BNATIVE_BNATIVEDEBUG_LOGWARNINGFORMAT_OFFSET UNITYSDK_OFFSET(0x1599F630)
#define BNATIVE_BNATIVEDEBUG_LOGWARNING_1_OFFSET UNITYSDK_OFFSET(0x1599F5F0)
#define BNATIVE_BNATIVEDEBUG_LOGWARNING_OFFSET UNITYSDK_OFFSET(0x1599F2F0)
#define BNATIVE_BNATIVEDEBUG_LOG_1_OFFSET UNITYSDK_OFFSET(0x1599ED70)
#define BNATIVE_BNATIVEDEBUG_LOG_OFFSET UNITYSDK_OFFSET(0x1599EA80)
#define BNATIVE_BNATIVEDEBUG_SET_DEBUGENABLED_OFFSET UNITYSDK_OFFSET(0x1599E950)
#define BNATIVE_BNATIVEDEBUG__CCTOR_OFFSET UNITYSDK_OFFSET(0x159A09B0)

namespace BNative
{
	inline static constexpr unsigned int BNativeDebug_TypeDefinitionIndex = 60874;

	class BNativeDebug : public ::System::Object
	{
	public:
		static ::BNative::IXDebug** StaticGet_handler()
		{
			return (::BNative::IXDebug**)Il2CppClass::FromTypeDefinitionIndex(BNativeDebug_TypeDefinitionIndex)->GetStaticField(0x51C60);
		}
		static ::System::Boolean* StaticGet_enable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BNativeDebug_TypeDefinitionIndex)->GetStaticField(0x136C0);
		}
		static ::BNative::BNativeDebug_LogLevel* StaticGet_level()
		{
			return (::BNative::BNativeDebug_LogLevel*)Il2CppClass::FromTypeDefinitionIndex(BNativeDebug_TypeDefinitionIndex)->GetStaticField(0x136C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_DebugEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_GET_DEBUGENABLED_OFFSET))();
		}

		static ::System::Void set_DebugEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_SET_DEBUGENABLED_OFFSET))(value);
		}

		static ::System::Void Log(::BNative::IDebugContext* self, ::System::String* message)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOG_OFFSET))(self, message);
		}

		static ::System::Void Log_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOG_1_OFFSET))(message);
		}

		static ::System::Void LogFormat(::BNative::IDebugContext* self, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGFORMAT_OFFSET))(self, format, args);
		}

		static ::System::Void LogFormat_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGFORMAT_1_OFFSET))(format, args);
		}

		static ::System::Void LogWarning(::BNative::IDebugContext* self, ::System::String* message)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGWARNING_OFFSET))(self, message);
		}

		static ::System::Void LogWarning_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGWARNING_1_OFFSET))(message);
		}

		static ::System::Void LogWarningFormat(::BNative::IDebugContext* self, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGWARNINGFORMAT_OFFSET))(self, format, args);
		}

		static ::System::Void LogWarningFormat_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGWARNINGFORMAT_1_OFFSET))(format, args);
		}

		static ::System::Void LogError(::BNative::IDebugContext* self, ::System::String* message)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGERROR_OFFSET))(self, message);
		}

		static ::System::Void LogError_1(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGERROR_1_OFFSET))(message);
		}

		static ::System::Void LogErrorFormat(::BNative::IDebugContext* self, ::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGERRORFORMAT_OFFSET))(self, format, args);
		}

		static ::System::Void LogErrorFormat_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGERRORFORMAT_1_OFFSET))(format, args);
		}

		static ::System::Void LogException(::BNative::IDebugContext* self, ::System::Exception* exception)
		{
			return ((::System::Void(*)(::BNative::IDebugContext*, ::System::Exception*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGEXCEPTION_OFFSET))(self, exception);
		}

		static ::System::Void LogException_1(::System::Exception* exception)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_LOGEXCEPTION_1_OFFSET))(exception);
		}

		static ::System::Void AssertFormat(::System::Boolean condition, ::System::String* fmt)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BNATIVE_BNATIVEDEBUG_ASSERTFORMAT_OFFSET))(condition, fmt);
		}
	};
}
