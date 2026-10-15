#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNKDEHGIJMH;
class HMLFGDFLIBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HMLFGDFLIBP_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E5A43B0)
#define HMLFGDFLIBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A47A0)
#define HMLFGDFLIBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4AA0)
#define HMLFGDFLIBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A4380)
#define HMLFGDFLIBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A42D0)
#define HMLFGDFLIBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4280)
#define HMLFGDFLIBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A4500)
#define HMLFGDFLIBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A43C0)
#define HMLFGDFLIBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A4620)
#define HMLFGDFLIBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A4240)
#define HMLFGDFLIBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A48E0)
#define HMLFGDFLIBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A4840)
#define HMLFGDFLIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4270)
#define HMLFGDFLIBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A4690)
#define HMLFGDFLIBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A46F0)

inline static constexpr unsigned int HMLFGDFLIBP_TypeDefinitionIndex = 30725;

	class HMLFGDFLIBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HMLFGDFLIBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HMLFGDFLIBP*>**)UnitySDK::FromName("", "HMLFGDFLIBP")->GetStaticField(0x39D50);
		}

		static ::Google::Protobuf::FieldCodec_1<::BNKDEHGIJMH*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BNKDEHGIJMH*>**)UnitySDK::FromName("", "HMLFGDFLIBP")->GetStaticField(0x39D58);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HMLFGDFLIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HMLFGDFLIBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HMLFGDFLIBP*>*(*)())((::PBYTE)hIl2Cpp + HMLFGDFLIBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HMLFGDFLIBP* Clone()
		{
			return ((::HMLFGDFLIBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BNKDEHGIJMH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HMLFGDFLIBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HMLFGDFLIBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMLFGDFLIBP*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HMLFGDFLIBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
