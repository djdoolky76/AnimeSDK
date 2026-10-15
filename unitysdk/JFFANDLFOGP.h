#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFFANDLFOGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFFANDLFOGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FBF90)
#define JFFANDLFOGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC1B0)
#define JFFANDLFOGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FBBE0)
#define JFFANDLFOGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FBBB0)
#define JFFANDLFOGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FBBA0)
#define JFFANDLFOGP_EMJONBGEKGB_OFFSET UNITYSDK_OFFSET(0x1E6FBC20)
#define JFFANDLFOGP_EOGHDDBKPDA_OFFSET UNITYSDK_OFFSET(0x1E6FBC30)
#define JFFANDLFOGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FBD10)
#define JFFANDLFOGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FBC40)
#define JFFANDLFOGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FBE80)
#define JFFANDLFOGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FBB60)
#define JFFANDLFOGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FC050)
#define JFFANDLFOGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FC020)
#define JFFANDLFOGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FBB90)
#define JFFANDLFOGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FBEB0)
#define JFFANDLFOGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FBF10)

inline static constexpr unsigned int JFFANDLFOGP_TypeDefinitionIndex = 30875;

	class JFFANDLFOGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LNCOAPGLKGB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JFFANDLFOGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFFANDLFOGP*>**)UnitySDK::FromName("", "JFFANDLFOGP")->GetStaticField(0x5CF40);
		}

		// static const ::System::Object KJDJDPPBIFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFFANDLFOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFFANDLFOGP*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFFANDLFOGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFFANDLFOGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFFANDLFOGP*>*(*)())((::PBYTE)hIl2Cpp + JFFANDLFOGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFFANDLFOGP* Clone()
		{
			return ((::JFFANDLFOGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMJONBGEKGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_EMJONBGEKGB_OFFSET))(this);
		}

		::System::Void EOGHDDBKPDA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFFANDLFOGP_EOGHDDBKPDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFFANDLFOGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFFANDLFOGP*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFFANDLFOGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFFANDLFOGP*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFFANDLFOGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
