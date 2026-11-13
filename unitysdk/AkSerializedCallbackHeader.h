#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkSerializedCallbackHeader;

#define AKSERIALIZEDCALLBACKHEADER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F323D80)
#define AKSERIALIZEDCALLBACKHEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3235F0)
#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F323890)
#define AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3236B0)
#define AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F3237C0)
#define AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET UNITYSDK_OFFSET(0x1F323600)
#define AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1F323CD0)
#define AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET UNITYSDK_OFFSET(0x1F323C20)
#define AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET UNITYSDK_OFFSET(0x1F323B10)
#define AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET UNITYSDK_OFFSET(0x1F323A60)
#define AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET UNITYSDK_OFFSET(0x1F323650)

inline static constexpr unsigned int AkSerializedCallbackHeader_TypeDefinitionIndex = 45861;

	class AkSerializedCallbackHeader : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkSerializedCallbackHeader* a1)
		{
			return ((::System::IntPtr(*)(::AkSerializedCallbackHeader*))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::IntPtr get_pPackage()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_PPACKAGE_OFFSET))(this);
		}

		::AkSerializedCallbackHeader* get_pNext()
		{
			return ((::AkSerializedCallbackHeader*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_PNEXT_OFFSET))(this);
		}

		::AkCallbackType get_eType()
		{
			return ((::AkCallbackType(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GET_ETYPE_OFFSET))(this);
		}

		::System::IntPtr GetData()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + AKSERIALIZEDCALLBACKHEADER_GETDATA_OFFSET))(this);
		}

	};
