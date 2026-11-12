#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/TextWriter.h"
namespace System { class String; }
namespace System::Text { class Encoding; }

#define UNITYENGINE_UNITYLOGWRITER_CTOR_OFFSET UNITYSDK_OFFSET(0x206EBBB0)
#define UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET UNITYSDK_OFFSET(0x206EBBE0)
#define UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET UNITYSDK_OFFSET(0x206EBAC0)
#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET UNITYSDK_OFFSET(0x206EBAB0)
#define UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET UNITYSDK_OFFSET(0x206EBAA0)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_1_OFFSET UNITYSDK_OFFSET(0x206EBC60)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_2_OFFSET UNITYSDK_OFFSET(0x206EBC70)
#define UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x206EBBF0)

namespace UnityEngine
{
	inline static constexpr unsigned int UnityLogWriter_TypeDefinitionIndex = 4217;

	class UnityLogWriter : public ::System::IO::TextWriter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_CTOR_OFFSET))(this);
		}

		static ::System::Void WriteStringToUnityLog(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOG_OFFSET))(a1);
		}

		static ::System::Void WriteStringToUnityLogImpl(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITESTRINGTOUNITYLOGIMPL_OFFSET))(a1);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_INIT_OFFSET))();
		}

		::System::Text::Encoding* get_Encoding()
		{
			return ((::System::Text::Encoding*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_GET_ENCODING_OFFSET))(this);
		}

		::System::Void Write(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_OFFSET))(this, a1);
		}

		::System::Void Write_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_1_OFFSET))(this, a1);
		}

		::System::Void Write_2(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UNITYLOGWRITER_WRITE_2_OFFSET))(this, a1, a2, a3);
		}

	};
}
