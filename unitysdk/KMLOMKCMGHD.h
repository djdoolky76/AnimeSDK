#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMLOMKCMGHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KMLOMKCMGHD_BLKJCBBAFLH_OFFSET UNITYSDK_OFFSET(0x1E89CEA0)
#define KMLOMKCMGHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E89D220)
#define KMLOMKCMGHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E89D4F0)
#define KMLOMKCMGHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E89CE20)
#define KMLOMKCMGHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E89CDF0)
#define KMLOMKCMGHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E89CDE0)
#define KMLOMKCMGHD_EAKCCEICCJD_OFFSET UNITYSDK_OFFSET(0x1E89CE90)
#define KMLOMKCMGHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E89CFE0)
#define KMLOMKCMGHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E89CED0)
#define KMLOMKCMGHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E89D0B0)
#define KMLOMKCMGHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E89CD70)
#define KMLOMKCMGHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E89D370)
#define KMLOMKCMGHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E89D330)
#define KMLOMKCMGHD_OHIBCKPKBNP_OFFSET UNITYSDK_OFFSET(0x1E89CEB0)
#define KMLOMKCMGHD_OINEFBFNHGG_OFFSET UNITYSDK_OFFSET(0x1E89CEC0)
#define KMLOMKCMGHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E89CDD0)
#define KMLOMKCMGHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E89D0E0)
#define KMLOMKCMGHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E89D140)

inline static constexpr unsigned int KMLOMKCMGHD_TypeDefinitionIndex = 28364;

	class KMLOMKCMGHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OLEIMCPJICA; // 0x18
		::System::UInt32 IAAJNAKLDGK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KMLOMKCMGHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KMLOMKCMGHD*>**)UnitySDK::FromName("", "KMLOMKCMGHD")->GetStaticField(0x22C70);
		}

		// static const ::System::Object NDMEEJANMPP; // 0x0
		// static const ::System::Object HFAJFJOHBFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KMLOMKCMGHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMLOMKCMGHD*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMLOMKCMGHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KMLOMKCMGHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KMLOMKCMGHD*>*(*)())((::PBYTE)hIl2Cpp + KMLOMKCMGHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KMLOMKCMGHD* Clone()
		{
			return ((::KMLOMKCMGHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EAKCCEICCJD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_EAKCCEICCJD_OFFSET))(this);
		}

		::System::Void BLKJCBBAFLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_BLKJCBBAFLH_OFFSET))(this, a1);
		}

		::System::UInt32 OHIBCKPKBNP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_OHIBCKPKBNP_OFFSET))(this);
		}

		::System::Void OINEFBFNHGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_OINEFBFNHGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KMLOMKCMGHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KMLOMKCMGHD*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KMLOMKCMGHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KMLOMKCMGHD*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KMLOMKCMGHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
