#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGKONMPOJKP;
class ELGOBKCNOHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGKONMPOJKP_AFFFMINNBPK_OFFSET UNITYSDK_OFFSET(0x1E100C10)
#define AGKONMPOJKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E101040)
#define AGKONMPOJKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E101340)
#define AGKONMPOJKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E100BC0)
#define AGKONMPOJKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E100B10)
#define AGKONMPOJKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E100AC0)
#define AGKONMPOJKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E100DA0)
#define AGKONMPOJKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E100C20)
#define AGKONMPOJKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E100EC0)
#define AGKONMPOJKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E100A50)
#define AGKONMPOJKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E101180)
#define AGKONMPOJKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1010E0)
#define AGKONMPOJKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E100AB0)
#define AGKONMPOJKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E100F30)
#define AGKONMPOJKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E100F90)

inline static constexpr unsigned int AGKONMPOJKP_TypeDefinitionIndex = 32966;

	class AGKONMPOJKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ELGOBKCNOHH*>* JDLFCGELGAK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AGKONMPOJKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGKONMPOJKP*>**)UnitySDK::FromName("", "AGKONMPOJKP")->GetStaticField(0x37730);
		}

		static ::Google::Protobuf::FieldCodec_1<::ELGOBKCNOHH*>** StaticGet_GFDIPJMHIPE()
		{
			return (::Google::Protobuf::FieldCodec_1<::ELGOBKCNOHH*>**)UnitySDK::FromName("", "AGKONMPOJKP")->GetStaticField(0x37738);
		}

		// static const ::System::Object DDKAMGMEGCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGKONMPOJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKONMPOJKP*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGKONMPOJKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGKONMPOJKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGKONMPOJKP*>*(*)())((::PBYTE)hIl2Cpp + AGKONMPOJKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGKONMPOJKP* Clone()
		{
			return ((::AGKONMPOJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ELGOBKCNOHH*>* AFFFMINNBPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ELGOBKCNOHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_AFFFMINNBPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGKONMPOJKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGKONMPOJKP*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKONMPOJKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGKONMPOJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGKONMPOJKP*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGKONMPOJKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
