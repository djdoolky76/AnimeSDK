#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJMNHDLJKLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJMNHDLJKLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E4230)
#define CJMNHDLJKLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E42D0)
#define CJMNHDLJKLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E3F20)
#define CJMNHDLJKLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E3EF0)
#define CJMNHDLJKLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3EE0)
#define CJMNHDLJKLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E4030)
#define CJMNHDLJKLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E3F60)
#define CJMNHDLJKLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E4190)
#define CJMNHDLJKLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E3EA0)
#define CJMNHDLJKLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E4280)
#define CJMNHDLJKLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E4250)
#define CJMNHDLJKLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3ED0)
#define CJMNHDLJKLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E41C0)
#define CJMNHDLJKLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E4220)

inline static constexpr unsigned int CJMNHDLJKLE_TypeDefinitionIndex = 29011;

	class CJMNHDLJKLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CJMNHDLJKLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJMNHDLJKLE*>**)UnitySDK::FromName("", "CJMNHDLJKLE")->GetStaticField(0x1A510);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJMNHDLJKLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJMNHDLJKLE*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJMNHDLJKLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJMNHDLJKLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJMNHDLJKLE*>*(*)())((::PBYTE)hIl2Cpp + CJMNHDLJKLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJMNHDLJKLE* Clone()
		{
			return ((::CJMNHDLJKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJMNHDLJKLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJMNHDLJKLE*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJMNHDLJKLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJMNHDLJKLE*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJMNHDLJKLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
