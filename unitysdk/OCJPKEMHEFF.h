#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCJPKEMHEFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCJPKEMHEFF_BNCLNMNFCBB_OFFSET UNITYSDK_OFFSET(0x1DE15D20)
#define OCJPKEMHEFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE160B0)
#define OCJPKEMHEFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE16340)
#define OCJPKEMHEFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE15CD0)
#define OCJPKEMHEFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE15CA0)
#define OCJPKEMHEFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE15C90)
#define OCJPKEMHEFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE15E10)
#define OCJPKEMHEFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE15D40)
#define OCJPKEMHEFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE15F80)
#define OCJPKEMHEFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE15C50)
#define OCJPKEMHEFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE161E0)
#define OCJPKEMHEFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE161A0)
#define OCJPKEMHEFF_NNBIAAKPJEO_OFFSET UNITYSDK_OFFSET(0x1DE15D30)
#define OCJPKEMHEFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE15C80)
#define OCJPKEMHEFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE15FC0)
#define OCJPKEMHEFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE16020)

inline static constexpr unsigned int OCJPKEMHEFF_TypeDefinitionIndex = 33617;

	class OCJPKEMHEFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 GFJGBMGJHBL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OCJPKEMHEFF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCJPKEMHEFF*>**)UnitySDK::FromName("", "OCJPKEMHEFF")->GetStaticField(0x12E30);
		}

		// static const ::System::Object PNIBJKDKKGJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCJPKEMHEFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCJPKEMHEFF*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCJPKEMHEFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCJPKEMHEFF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCJPKEMHEFF*>*(*)())((::PBYTE)hIl2Cpp + OCJPKEMHEFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCJPKEMHEFF* Clone()
		{
			return ((::OCJPKEMHEFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_CLONE_OFFSET))(this);
		}

		::System::UInt64 BNCLNMNFCBB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_BNCLNMNFCBB_OFFSET))(this);
		}

		::System::Void NNBIAAKPJEO(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_NNBIAAKPJEO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCJPKEMHEFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCJPKEMHEFF*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCJPKEMHEFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCJPKEMHEFF*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCJPKEMHEFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
