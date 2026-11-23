#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception_AB2D7FF049072582.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B6564CAC678AC465.h"

class BA2AD4081C7697B7;
class E519989062D53DE5;
class E98AF858C32293BC;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class B7DC2C6C396F01F4; }
namespace System::Diagnostics { class StackTrace; }

#define SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET UNITYSDK_OFFSET(0x3B4D290)
#define SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET UNITYSDK_OFFSET(0x3B4D2F0)
#define SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B4D380)
#define SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x3B4D820)
#define SYSTEM_EXCEPTION_GETTYPE_OFFSET UNITYSDK_OFFSET(0x3B4D870)
#define SYSTEM_EXCEPTION_GET_DATA_OFFSET UNITYSDK_OFFSET(0x3B4E3F0)
#define SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x169C070)
#define SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x3B4E460)
#define SYSTEM_EXCEPTION_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0x3B4E590)
#define SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET UNITYSDK_OFFSET(0x3B4E6D0)
#define SYSTEM_EXCEPTION_INIT_OFFSET UNITYSDK_OFFSET(0x3B4D880)
#define SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x3B4D920)
#define SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x3B4D9B0)
#define SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0x3B4D9C0)
#define SYSTEM_EXCEPTION_SET_HRESULT_OFFSET UNITYSDK_OFFSET(0x1C068F0)
#define SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET UNITYSDK_OFFSET(0x2721EE0)
#define SYSTEM_EXCEPTION_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3B4DAA0)
#define SYSTEM_EXCEPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3B4DDD0)
#define SYSTEM_EXCEPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x3B4DDE0)
#define SYSTEM_EXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3B4E390)
#define SYSTEM_EXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3B4DE70)
#define SYSTEM_EXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3B4DE50)
#define SYSTEM_EXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3B4E350)

namespace System
{
	inline static constexpr unsigned int Exception_TypeDefinitionIndex = 10298;

	class Exception : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_s_EDILock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Exception_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 _COMPlusExceptionCode = -0x1FBCBCAE; // 0x0
		::System::String* _className; // 0x10
		::System::String* _message; // 0x18
		::System::Collections::B7DC2C6C396F01F4* _data; // 0x20
		::System::Exception* _innerException; // 0x28
		::System::String* _helpURL; // 0x30
		::System::Object* _stackTrace; // 0x38
		::System::String* _stackTraceString; // 0x40
		::System::String* _remoteStackTraceString; // 0x48
		::System::Int32 _remoteStackIndex; // 0x50
		::System::Byte _padding0[0x4];
		::System::Object* _dynamicMethods; // 0x58
		::System::Int32 _HResult; // 0x60
		::System::Byte _padding1[0x4];
		::System::String* _source; // 0x68
		::BA2AD4081C7697B7* _safeSerializationManager; // 0x70
		::Il2CppArray<::System::Diagnostics::StackTrace*>* captured_traces; // 0x78
		::Il2CppArray<::System::IntPtr>* native_trace_ips; // 0x80
		::System::Int32 caught_in_unmanaged; // 0x88

		::System::String* get_StackTrace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_STACKTRACE_OFFSET))(this);
		}

		::System::Type* GetType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETTYPE_OFFSET))(this);
		}

		::System::Void OnDeserialized(::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_ONDESERIALIZED_OFFSET))(this, E6CE7391633EEC68);
		}

		::System::Void _ctor(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4);
		}

		::System::String* StripFileInfo(::System::String* BCDB13E083706FEB, ::System::Boolean F3D8768B44B5F53F)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_STRIPFILEINFO_OFFSET))(this, BCDB13E083706FEB, F3D8768B44B5F53F);
		}

		::System::String* GetClassName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETCLASSNAME_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_INIT_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* B083BE7841B347C4, ::System::Exception* FA644E43CA202E59)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_1_OFFSET))(this, B083BE7841B347C4, FA644E43CA202E59);
		}

		::System::Exception* get_InnerException()
		{
			return ((::System::Exception*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_INNEREXCEPTION_OFFSET))(this);
		}

		static ::System::String* GetMessageFromNativeResources(::System::Exception_AB2D7FF049072582 AD57B6492D9A37A5)
		{
			return ((::System::String*(*)(::System::Exception_AB2D7FF049072582))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETMESSAGEFROMNATIVERESOURCES_OFFSET))(AD57B6492D9A37A5);
		}

		::System::Void _ctor_2(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_2_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void ReportUnhandledException(::System::Exception* E2B6D81F69EA0D9B)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_REPORTUNHANDLEDEXCEPTION_OFFSET))(E2B6D81F69EA0D9B);
		}

		::System::Collections::B7DC2C6C396F01F4* get_Data()
		{
			return ((::System::Collections::B7DC2C6C396F01F4*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_DATA_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		::System::Void RestoreExceptionDispatchInfo(::E98AF858C32293BC* BBAE196AC731CED2)
		{
			return ((::System::Void(*)(::PVOID, ::E98AF858C32293BC*))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_RESTOREEXCEPTIONDISPATCHINFO_OFFSET))(this, BBAE196AC731CED2);
		}

		::System::String* GetStackTrace(::System::Boolean FABA3860B4438411)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETSTACKTRACE_OFFSET))(this, FABA3860B4438411);
		}

		::System::Void GetObjectData(::E519989062D53DE5* B29880F033C1F232, ::B6564CAC678AC465 E6CE7391633EEC68)
		{
			return ((::System::Void(*)(::PVOID, ::E519989062D53DE5*, ::B6564CAC678AC465))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GETOBJECTDATA_OFFSET))(this, B29880F033C1F232, E6CE7391633EEC68);
		}

		::System::Void set_HResult(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_SET_HRESULT_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CTOR_3_OFFSET))(this);
		}

		::System::String* ToString_1(::System::Boolean BC029137106F461B, ::System::Boolean F12B5BD6E84909C6)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_TOSTRING_1_OFFSET))(this, BC029137106F461B, F12B5BD6E84909C6);
		}

		::System::String* get_Source()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION_GET_SOURCE_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_EXCEPTION__CCTOR_OFFSET))();
		}
	};
}
