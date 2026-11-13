#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x3F232C0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET UNITYSDK_OFFSET(0x3F232D0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_ARGS_OFFSET UNITYSDK_OFFSET(0x7F6810)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x6C9390)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x7F5730)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_ARGS_OFFSET UNITYSDK_OFFSET(0x3D6A860)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_PATH_OFFSET UNITYSDK_OFFSET(0xFDBF90)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x3D6A850)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET UNITYSDK_OFFSET(0x6C8D40)
#define MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0xB88D90)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UniWebViewMessage_TypeDefinitionIndex = 7949;

	struct alignas(8) UniWebViewMessage
	{
		::System::String* _RawMessage_k__BackingField; // 0x10
		::System::String* _Scheme_k__BackingField; // 0x18
		::System::String* _Path_k__BackingField; // 0x20
		::System::String* _Query_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* _Args_k__BackingField; // 0x30
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_CTOR_OFFSET))(this, a1);
		}

		::System::String* get_RawMessage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_RAWMESSAGE_OFFSET))(this);
		}

		::System::Void set_RawMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_RAWMESSAGE_OFFSET))(this, a1);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_SCHEME_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_PATH_OFFSET))(this, a1);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_QUERY_OFFSET))(this);
		}

		::System::Void set_Query(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_QUERY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* get_Args()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GET_ARGS_OFFSET))(this);
		}

		::System::Void set_Args(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_SET_ARGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* GetQueryDictionary(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UNIWEBVIEWMESSAGE_GETQUERYDICTIONARY_OFFSET))(this, a1);
		}

	};
}
