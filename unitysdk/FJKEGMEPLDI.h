#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKEGMEPLDI;
class HKHKEMHCHEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJKEGMEPLDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3781A0)
#define FJKEGMEPLDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3784A0)
#define FJKEGMEPLDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E377D80)
#define FJKEGMEPLDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E377CD0)
#define FJKEGMEPLDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E377C80)
#define FJKEGMEPLDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E377F00)
#define FJKEGMEPLDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E377DC0)
#define FJKEGMEPLDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E378020)
#define FJKEGMEPLDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E377C40)
#define FJKEGMEPLDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3782E0)
#define FJKEGMEPLDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E378240)
#define FJKEGMEPLDI_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1E377DB0)
#define FJKEGMEPLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E377C70)
#define FJKEGMEPLDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E378090)
#define FJKEGMEPLDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3780F0)

inline static constexpr unsigned int FJKEGMEPLDI_TypeDefinitionIndex = 28237;

	class FJKEGMEPLDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>* NNFMIDOBAGL; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::HKHKEMHCHEB*>** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::HKHKEMHCHEB*>**)UnitySDK::FromName("", "FJKEGMEPLDI")->GetStaticField(0x59F30);
		}

		static ::Google::Protobuf::MessageParser_1<::FJKEGMEPLDI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJKEGMEPLDI*>**)UnitySDK::FromName("", "FJKEGMEPLDI")->GetStaticField(0x59F38);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJKEGMEPLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJKEGMEPLDI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJKEGMEPLDI*>*(*)())((::PBYTE)hIl2Cpp + FJKEGMEPLDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJKEGMEPLDI* Clone()
		{
			return ((::FJKEGMEPLDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HKHKEMHCHEB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJKEGMEPLDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJKEGMEPLDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKEGMEPLDI*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJKEGMEPLDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
