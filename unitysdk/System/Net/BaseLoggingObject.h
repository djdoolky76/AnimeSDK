#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAYTOCONSOLE_OFFSET UNITYSDK_OFFSET(0x1E33D430)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAYTOFILE_OFFSET UNITYSDK_OFFSET(0x1E33D460)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAY_OFFSET UNITYSDK_OFFSET(0x1E33D450)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMP_1_OFFSET UNITYSDK_OFFSET(0x1E33D4B0)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMP_2_OFFSET UNITYSDK_OFFSET(0x1E33D4C0)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMP_3_OFFSET UNITYSDK_OFFSET(0x1E33D4D0)
#define SYSTEM_NET_BASELOGGINGOBJECT_DUMP_OFFSET UNITYSDK_OFFSET(0x1E33D4A0)
#define SYSTEM_NET_BASELOGGINGOBJECT_ENTERFUNC_OFFSET UNITYSDK_OFFSET(0x1E33D410)
#define SYSTEM_NET_BASELOGGINGOBJECT_FLUSH_1_OFFSET UNITYSDK_OFFSET(0x1E33D480)
#define SYSTEM_NET_BASELOGGINGOBJECT_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E33D470)
#define SYSTEM_NET_BASELOGGINGOBJECT_LEAVEFUNC_OFFSET UNITYSDK_OFFSET(0x1E33D420)
#define SYSTEM_NET_BASELOGGINGOBJECT_LOGGINGMONITORTICK_OFFSET UNITYSDK_OFFSET(0x1E33D490)
#define SYSTEM_NET_BASELOGGINGOBJECT_PRINTLINE_OFFSET UNITYSDK_OFFSET(0x1E33D440)
#define SYSTEM_NET_BASELOGGINGOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33D400)

namespace System::Net
{
	inline static constexpr unsigned int BaseLoggingObject_TypeDefinitionIndex = 3378;

	class BaseLoggingObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void EnterFunc(::System::String* funcname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_ENTERFUNC_OFFSET))(this, funcname);
		}

		::System::Void LeaveFunc(::System::String* funcname)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_LEAVEFUNC_OFFSET))(this, funcname);
		}

		::System::Void DumpArrayToConsole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAYTOCONSOLE_OFFSET))(this);
		}

		::System::Void PrintLine(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_PRINTLINE_OFFSET))(this, msg);
		}

		::System::Void DumpArray(::System::Boolean shouldClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAY_OFFSET))(this, shouldClose);
		}

		::System::Void DumpArrayToFile(::System::Boolean shouldClose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMPARRAYTOFILE_OFFSET))(this, shouldClose);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_FLUSH_OFFSET))(this);
		}

		::System::Void Flush_1(::System::Boolean close)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_FLUSH_1_OFFSET))(this, close);
		}

		::System::Void LoggingMonitorTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_LOGGINGMONITORTICK_OFFSET))(this);
		}

		::System::Void Dump(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMP_OFFSET))(this, buffer);
		}

		::System::Void Dump_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMP_1_OFFSET))(this, buffer, length);
		}

		::System::Void Dump_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMP_2_OFFSET))(this, buffer, offset, length);
		}

		::System::Void Dump_3(::System::IntPtr pBuffer, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BASELOGGINGOBJECT_DUMP_3_OFFSET))(this, pBuffer, offset, length);
		}
	};
}
