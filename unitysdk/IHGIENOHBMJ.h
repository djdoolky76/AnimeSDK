#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHHJNCOAIJF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHGIENOHBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16411220)
#define IHGIENOHBMJ_GET_HEADERS_OFFSET UNITYSDK_OFFSET(0x16411260)
#define IHGIENOHBMJ_GET_HTTPSTATUS_OFFSET UNITYSDK_OFFSET(0x16411240)
#define IHGIENOHBMJ_GET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x16411280)
#define IHGIENOHBMJ_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x16411230)
#define IHGIENOHBMJ_SET_HEADERS_OFFSET UNITYSDK_OFFSET(0x16411270)
#define IHGIENOHBMJ_SET_HTTPSTATUS_OFFSET UNITYSDK_OFFSET(0x16411250)
#define IHGIENOHBMJ_SET_RAWBODY_OFFSET UNITYSDK_OFFSET(0x16411290)

inline static constexpr unsigned int IHGIENOHBMJ_TypeDefinitionIndex = 69357;

	class IHGIENOHBMJ : public ::System::Object
	{
	public:
		::GHHJNCOAIJF* _Request_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _Headers_k__BackingField; // 0x18
		::Il2CppArray<::System::Byte>* _RawBody_k__BackingField; // 0x20
		::System::Int64 _HttpStatus_k__BackingField; // 0x28
		::System::Void _ctor(::GHHJNCOAIJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHHJNCOAIJF*))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_CTOR_OFFSET))(this, a1);
		}

		::GHHJNCOAIJF* get_Request()
		{
			return ((::GHHJNCOAIJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_GET_REQUEST_OFFSET))(this);
		}

		::System::Int64 get_HttpStatus()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_GET_HTTPSTATUS_OFFSET))(this);
		}

		::System::Void set_HttpStatus(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_SET_HTTPSTATUS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_Headers()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_GET_HEADERS_OFFSET))(this);
		}

		::System::Void set_Headers(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_SET_HEADERS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_RawBody()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_GET_RAWBODY_OFFSET))(this);
		}

		::System::Void set_RawBody(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + IHGIENOHBMJ_SET_RAWBODY_OFFSET))(this, a1);
		}

	};
