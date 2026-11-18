#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class CorrelationManager; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_TRACE_ASSERT_1_OFFSET UNITYSDK_OFFSET(0x1EA95110)
#define SYSTEM_DIAGNOSTICS_TRACE_ASSERT_2_OFFSET UNITYSDK_OFFSET(0x1EA95120)
#define SYSTEM_DIAGNOSTICS_TRACE_ASSERT_OFFSET UNITYSDK_OFFSET(0x1EA950F0)
#define SYSTEM_DIAGNOSTICS_TRACE_CLOSE_OFFSET UNITYSDK_OFFSET(0x1EA950E0)
#define SYSTEM_DIAGNOSTICS_TRACE_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1EA95140)
#define SYSTEM_DIAGNOSTICS_TRACE_FAIL_OFFSET UNITYSDK_OFFSET(0x1EA95130)
#define SYSTEM_DIAGNOSTICS_TRACE_FLUSH_OFFSET UNITYSDK_OFFSET(0x1EA950D0)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1EA94F80)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET UNITYSDK_OFFSET(0x1EA94FC0)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1EA95050)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1EA950B0)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x1EA94F70)
#define SYSTEM_DIAGNOSTICS_TRACE_GET_USEGLOBALLOCK_OFFSET UNITYSDK_OFFSET(0x1EA94FA0)
#define SYSTEM_DIAGNOSTICS_TRACE_INDENT_OFFSET UNITYSDK_OFFSET(0x1EA953A0)
#define SYSTEM_DIAGNOSTICS_TRACE_REFRESH_OFFSET UNITYSDK_OFFSET(0x1EA95150)
#define SYSTEM_DIAGNOSTICS_TRACE_SET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1EA94F90)
#define SYSTEM_DIAGNOSTICS_TRACE_SET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1EA950A0)
#define SYSTEM_DIAGNOSTICS_TRACE_SET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1EA950C0)
#define SYSTEM_DIAGNOSTICS_TRACE_SET_USEGLOBALLOCK_OFFSET UNITYSDK_OFFSET(0x1EA94FB0)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEERROR_1_OFFSET UNITYSDK_OFFSET(0x1EA95280)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEERROR_OFFSET UNITYSDK_OFFSET(0x1EA95260)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEINFORMATION_1_OFFSET UNITYSDK_OFFSET(0x1EA95200)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEINFORMATION_OFFSET UNITYSDK_OFFSET(0x1EA951E0)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEWARNING_1_OFFSET UNITYSDK_OFFSET(0x1EA95240)
#define SYSTEM_DIAGNOSTICS_TRACE_TRACEWARNING_OFFSET UNITYSDK_OFFSET(0x1EA95220)
#define SYSTEM_DIAGNOSTICS_TRACE_UNINDENT_OFFSET UNITYSDK_OFFSET(0x1EA953B0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_1_OFFSET UNITYSDK_OFFSET(0x1EA95330)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_2_OFFSET UNITYSDK_OFFSET(0x1EA95340)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_3_OFFSET UNITYSDK_OFFSET(0x1EA95350)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_OFFSET UNITYSDK_OFFSET(0x1EA95320)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_1_OFFSET UNITYSDK_OFFSET(0x1EA95370)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_2_OFFSET UNITYSDK_OFFSET(0x1EA95380)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_3_OFFSET UNITYSDK_OFFSET(0x1EA95390)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_OFFSET UNITYSDK_OFFSET(0x1EA95360)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_1_OFFSET UNITYSDK_OFFSET(0x1EA952F0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_2_OFFSET UNITYSDK_OFFSET(0x1EA95300)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_3_OFFSET UNITYSDK_OFFSET(0x1EA95310)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1EA952E0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1EA952B0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1EA952C0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1EA952D0)
#define SYSTEM_DIAGNOSTICS_TRACE_WRITE_OFFSET UNITYSDK_OFFSET(0x1EA952A0)
#define SYSTEM_DIAGNOSTICS_TRACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA953C0)
#define SYSTEM_DIAGNOSTICS_TRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA94F60)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Trace_TypeDefinitionIndex = 2763;

	class Trace : public ::System::Object
	{
	public:
		static ::System::Diagnostics::CorrelationManager** StaticGet_correlationManager()
		{
			return (::System::Diagnostics::CorrelationManager**)Il2CppClass::FromTypeDefinitionIndex(Trace_TypeDefinitionIndex)->GetStaticField(0x3180);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE__CCTOR_OFFSET))();
		}

		static ::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_LISTENERS_OFFSET))();
		}

		static ::System::Boolean get_AutoFlush()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_AUTOFLUSH_OFFSET))();
		}

		static ::System::Void set_AutoFlush(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_SET_AUTOFLUSH_OFFSET))(value);
		}

		static ::System::Boolean get_UseGlobalLock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_USEGLOBALLOCK_OFFSET))();
		}

		static ::System::Void set_UseGlobalLock(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_SET_USEGLOBALLOCK_OFFSET))(value);
		}

		static ::System::Diagnostics::CorrelationManager* get_CorrelationManager()
		{
			return ((::System::Diagnostics::CorrelationManager*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_CORRELATIONMANAGER_OFFSET))();
		}

		static ::System::Int32 get_IndentLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_INDENTLEVEL_OFFSET))();
		}

		static ::System::Void set_IndentLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_SET_INDENTLEVEL_OFFSET))(value);
		}

		static ::System::Int32 get_IndentSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_GET_INDENTSIZE_OFFSET))();
		}

		static ::System::Void set_IndentSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_SET_INDENTSIZE_OFFSET))(value);
		}

		static ::System::Void Flush()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_FLUSH_OFFSET))();
		}

		static ::System::Void Close()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_CLOSE_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean condition)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_ASSERT_OFFSET))(condition);
		}

		static ::System::Void Assert_1(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_ASSERT_1_OFFSET))(condition, message);
		}

		static ::System::Void Assert_2(::System::Boolean condition, ::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_ASSERT_2_OFFSET))(condition, message, detailMessage);
		}

		static ::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_FAIL_OFFSET))(message);
		}

		static ::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_FAIL_1_OFFSET))(message, detailMessage);
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_REFRESH_OFFSET))();
		}

		static ::System::Void TraceInformation(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEINFORMATION_OFFSET))(message);
		}

		static ::System::Void TraceInformation_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEINFORMATION_1_OFFSET))(format, args);
		}

		static ::System::Void TraceWarning(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEWARNING_OFFSET))(message);
		}

		static ::System::Void TraceWarning_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEWARNING_1_OFFSET))(format, args);
		}

		static ::System::Void TraceError(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEERROR_OFFSET))(message);
		}

		static ::System::Void TraceError_1(::System::String* format, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_TRACEERROR_1_OFFSET))(format, args);
		}

		static ::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITE_OFFSET))(message);
		}

		static ::System::Void Write_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITE_1_OFFSET))(value);
		}

		static ::System::Void Write_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITE_2_OFFSET))(message, category);
		}

		static ::System::Void Write_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_OFFSET))(message);
		}

		static ::System::Void WriteLine_1(::System::Object* value)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_1_OFFSET))(value);
		}

		static ::System::Void WriteLine_2(::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_2_OFFSET))(message, category);
		}

		static ::System::Void WriteLine_3(::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINE_3_OFFSET))(value, category);
		}

		static ::System::Void WriteIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITEIF_3_OFFSET))(condition, value, category);
		}

		static ::System::Void WriteLineIf(::System::Boolean condition, ::System::String* message)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_OFFSET))(condition, message);
		}

		static ::System::Void WriteLineIf_1(::System::Boolean condition, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_1_OFFSET))(condition, value);
		}

		static ::System::Void WriteLineIf_2(::System::Boolean condition, ::System::String* message, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_2_OFFSET))(condition, message, category);
		}

		static ::System::Void WriteLineIf_3(::System::Boolean condition, ::System::Object* value, ::System::String* category)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_WRITELINEIF_3_OFFSET))(condition, value, category);
		}

		static ::System::Void Indent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_INDENT_OFFSET))();
		}

		static ::System::Void Unindent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACE_UNINDENT_OFFSET))();
		}
	};
}
