#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/LogLevel.h"
#include "unitysdk/UnityEngine/ProBuilder/LogOutput.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define UNITYENGINE_PROBUILDER_LOG_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6D4610)
#define UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET UNITYSDK_OFFSET(0xD6D44F0)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0xD6D3AF0)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_2_OFFSET UNITYSDK_OFFSET(0xD6D3C40)
#define UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET UNITYSDK_OFFSET(0xD6D3B50)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0xD683840)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0xD6D3F30)
#define UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET UNITYSDK_OFFSET(0xD6D3D30)
#define UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET UNITYSDK_OFFSET(0xD6D3C50)
#define UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET UNITYSDK_OFFSET(0xD6D3940)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET UNITYSDK_OFFSET(0xD6D4010)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET UNITYSDK_OFFSET(0xD6D4220)
#define UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET UNITYSDK_OFFSET(0xD6D38B0)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET UNITYSDK_OFFSET(0xD6D3A90)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0xD6D39D0)
#define UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0xD6D3A30)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET UNITYSDK_OFFSET(0xD6D3EA0)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0xD6D3DC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 45446;

	class Log : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>** StaticGet_s_logStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>**)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x62C40);
		}

		static ::System::String** StaticGet_s_LogFilePath()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x62C48);
		}

		static ::UnityEngine::ProBuilder::LogOutput* StaticGet_s_Output()
		{
			return (::UnityEngine::ProBuilder::LogOutput*)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x14360);
		}

		static ::UnityEngine::ProBuilder::LogLevel* StaticGet_s_LogLevel()
		{
			return (::UnityEngine::ProBuilder::LogLevel*)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x14364);
		}

		// static const ::System::String* k_ProBuilderLogFileName; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_CCTOR_OFFSET))();
		}

		static ::System::Void PushLogLevel(::UnityEngine::ProBuilder::LogLevel a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET))(a1);
		}

		static ::System::Void PopLogLevel()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET))();
		}

		static ::System::Void SetLogLevel(::UnityEngine::ProBuilder::LogLevel a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET))(a1);
		}

		static ::System::Void SetOutput(::UnityEngine::ProBuilder::LogOutput a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::LogOutput))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET))(a1);
		}

		static ::System::Void SetLogFile(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET))(a1);
		}

		static ::System::Void Debug_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET))(a1);
		}

		static ::System::Void Debug_2(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DEBUG_2_OFFSET))(a1, a2);
		}

		static ::System::Void Info(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET))(a1, a2);
		}

		static ::System::Void Info_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET))(a1);
		}

		static ::System::Void Warning(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET))(a1, a2);
		}

		static ::System::Void Warning_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET))(a1);
		}

		static ::System::Void Error(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET))(a1, a2);
		}

		static ::System::Void Error_1(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET))(a1);
		}

		static ::System::Void DoPrint(::System::String* a1, ::UnityEngine::LogType a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET))(a1, a2);
		}

		static ::System::Void PrintToFile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET))(a1, a2);
		}

		static ::System::Void ClearLogFile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET))();
		}

		static ::System::Void PrintToConsole(::System::String* a1, ::UnityEngine::LogType a2)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET))(a1, a2);
		}

	};
}
