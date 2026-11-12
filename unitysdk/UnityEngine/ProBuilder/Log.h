#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/LogLevel.h"
#include "unitysdk/UnityEngine/ProBuilder/LogOutput.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define UNITYENGINE_PROBUILDER_LOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x2049ADB0)
#define UNITYENGINE_PROBUILDER_LOG_CLEARLOGFILE_OFFSET UNITYSDK_OFFSET(0x2049AC90)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_1_OFFSET UNITYSDK_OFFSET(0x2049A290)
#define UNITYENGINE_PROBUILDER_LOG_DEBUG_2_OFFSET UNITYSDK_OFFSET(0x2049A3E0)
#define UNITYENGINE_PROBUILDER_LOG_DOPRINT_OFFSET UNITYSDK_OFFSET(0x2049A2F0)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_1_OFFSET UNITYSDK_OFFSET(0x2044A030)
#define UNITYENGINE_PROBUILDER_LOG_ERROR_OFFSET UNITYSDK_OFFSET(0x2049A6D0)
#define UNITYENGINE_PROBUILDER_LOG_INFO_1_OFFSET UNITYSDK_OFFSET(0x2049A4D0)
#define UNITYENGINE_PROBUILDER_LOG_INFO_OFFSET UNITYSDK_OFFSET(0x2049A3F0)
#define UNITYENGINE_PROBUILDER_LOG_POPLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x2049A0E0)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOCONSOLE_OFFSET UNITYSDK_OFFSET(0x2049A7B0)
#define UNITYENGINE_PROBUILDER_LOG_PRINTTOFILE_OFFSET UNITYSDK_OFFSET(0x2049A9C0)
#define UNITYENGINE_PROBUILDER_LOG_PUSHLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x2049A050)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGFILE_OFFSET UNITYSDK_OFFSET(0x2049A230)
#define UNITYENGINE_PROBUILDER_LOG_SETLOGLEVEL_OFFSET UNITYSDK_OFFSET(0x2049A170)
#define UNITYENGINE_PROBUILDER_LOG_SETOUTPUT_OFFSET UNITYSDK_OFFSET(0x2049A1D0)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_1_OFFSET UNITYSDK_OFFSET(0x2049A640)
#define UNITYENGINE_PROBUILDER_LOG_WARNING_OFFSET UNITYSDK_OFFSET(0x2049A560)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Log_TypeDefinitionIndex = 45446;

	class Log : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_LogFilePath()
		{
			return (::System::String**)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x66E30);
		}

		static ::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>** StaticGet_s_logStack()
		{
			return (::System::Collections::Generic::Stack_1<::UnityEngine::ProBuilder::LogLevel>**)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x66E38);
		}

		static ::UnityEngine::ProBuilder::LogOutput* StaticGet_s_Output()
		{
			return (::UnityEngine::ProBuilder::LogOutput*)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x14990);
		}

		static ::UnityEngine::ProBuilder::LogLevel* StaticGet_s_LogLevel()
		{
			return (::UnityEngine::ProBuilder::LogLevel*)UnitySDK::FromName("UnityEngine.ProBuilder", "Log")->GetStaticField(0x14994);
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
