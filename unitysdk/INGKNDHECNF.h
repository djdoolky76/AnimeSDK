#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNNGLBEGIKB;
class INGKNDHECNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INGKNDHECNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F66B160)
#define INGKNDHECNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F66B460)
#define INGKNDHECNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1F66ACE0)
#define INGKNDHECNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F66AC30)
#define INGKNDHECNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F66ABE0)
#define INGKNDHECNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F66AEC0)
#define INGKNDHECNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F66AD40)
#define INGKNDHECNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F66AFE0)
#define INGKNDHECNF_JHEFPOGNBND_OFFSET UNITYSDK_OFFSET(0x1F66AD30)
#define INGKNDHECNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F66AB70)
#define INGKNDHECNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F66B2A0)
#define INGKNDHECNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F66B200)
#define INGKNDHECNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F66ABD0)
#define INGKNDHECNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F66B050)
#define INGKNDHECNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F66B0B0)

inline static constexpr unsigned int INGKNDHECNF_TypeDefinitionIndex = 32090;

	class INGKNDHECNF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GNNGLBEGIKB*>* JLFDMJMJDND; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::GNNGLBEGIKB*>** StaticGet_JKBHDLODNOE()
		{
			return (::Google::Protobuf::FieldCodec_1<::GNNGLBEGIKB*>**)UnitySDK::FromName("", "INGKNDHECNF")->GetStaticField(0x50680);
		}

		static ::Google::Protobuf::MessageParser_1<::INGKNDHECNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INGKNDHECNF*>**)UnitySDK::FromName("", "INGKNDHECNF")->GetStaticField(0x50688);
		}

		// static const ::System::Object CPBPPPJBFGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INGKNDHECNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGKNDHECNF*))((::PBYTE)hIl2Cpp + INGKNDHECNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGKNDHECNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INGKNDHECNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INGKNDHECNF*>*(*)())((::PBYTE)hIl2Cpp + INGKNDHECNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INGKNDHECNF* Clone()
		{
			return ((::INGKNDHECNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GNNGLBEGIKB*>* JHEFPOGNBND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GNNGLBEGIKB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_JHEFPOGNBND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INGKNDHECNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INGKNDHECNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INGKNDHECNF*))((::PBYTE)hIl2Cpp + INGKNDHECNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INGKNDHECNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INGKNDHECNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INGKNDHECNF*))((::PBYTE)hIl2Cpp + INGKNDHECNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INGKNDHECNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
