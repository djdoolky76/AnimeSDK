#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFHENIDCNMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFHENIDCNMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93DEC0)
#define LFHENIDCNMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93DF60)
#define LFHENIDCNMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93DBB0)
#define LFHENIDCNMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93DB80)
#define LFHENIDCNMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93DB70)
#define LFHENIDCNMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93DCC0)
#define LFHENIDCNMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93DBF0)
#define LFHENIDCNMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93DE20)
#define LFHENIDCNMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93DB30)
#define LFHENIDCNMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93DF10)
#define LFHENIDCNMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93DEE0)
#define LFHENIDCNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93DB60)
#define LFHENIDCNMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93DE50)
#define LFHENIDCNMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93DEB0)

	class LFHENIDCNMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LFHENIDCNMJ")->GetStaticField(0x3ADD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFHENIDCNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFHENIDCNMJ*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFHENIDCNMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LFHENIDCNMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFHENIDCNMJ* Clone()
		{
			return ((::LFHENIDCNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFHENIDCNMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFHENIDCNMJ*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFHENIDCNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFHENIDCNMJ*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFHENIDCNMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
