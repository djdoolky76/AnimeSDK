#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIHACLHMAKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BIHACLHMAKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD52E0)
#define BIHACLHMAKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD5500)
#define BIHACLHMAKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD4F30)
#define BIHACLHMAKO_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1DDD4F80)
#define BIHACLHMAKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD4F00)
#define BIHACLHMAKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD4EF0)
#define BIHACLHMAKO_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1DDD4F70)
#define BIHACLHMAKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD5060)
#define BIHACLHMAKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD4F90)
#define BIHACLHMAKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD51D0)
#define BIHACLHMAKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD4EB0)
#define BIHACLHMAKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD53A0)
#define BIHACLHMAKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD5370)
#define BIHACLHMAKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD4EE0)
#define BIHACLHMAKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD5200)
#define BIHACLHMAKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD5260)

inline static constexpr unsigned int BIHACLHMAKO_TypeDefinitionIndex = 33288;

	class BIHACLHMAKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GLFLHLCNOOH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BIHACLHMAKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BIHACLHMAKO*>**)UnitySDK::FromName("", "BIHACLHMAKO")->GetStaticField(0x577E0);
		}

		// static const ::System::Object OPJGBPJDMKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BIHACLHMAKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIHACLHMAKO*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIHACLHMAKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BIHACLHMAKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BIHACLHMAKO*>*(*)())((::PBYTE)hIl2Cpp + BIHACLHMAKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BIHACLHMAKO* Clone()
		{
			return ((::BIHACLHMAKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIHACLHMAKO_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BIHACLHMAKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BIHACLHMAKO*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIHACLHMAKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BIHACLHMAKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIHACLHMAKO*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BIHACLHMAKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
