#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCEAHPDAPFC;
class PNALNDONMCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNALNDONMCK_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1DFB1730)
#define PNALNDONMCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB1B20)
#define PNALNDONMCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1E00)
#define PNALNDONMCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB1700)
#define PNALNDONMCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB1670)
#define PNALNDONMCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1630)
#define PNALNDONMCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB1880)
#define PNALNDONMCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB1740)
#define PNALNDONMCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB19A0)
#define PNALNDONMCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB15F0)
#define PNALNDONMCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB1C60)
#define PNALNDONMCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB1BC0)
#define PNALNDONMCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB1620)
#define PNALNDONMCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB1A10)
#define PNALNDONMCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB1A70)

inline static constexpr unsigned int PNALNDONMCK_TypeDefinitionIndex = 30306;

	class PNALNDONMCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OCEAHPDAPFC*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::OCEAHPDAPFC*>** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::OCEAHPDAPFC*>**)UnitySDK::FromName("", "PNALNDONMCK")->GetStaticField(0x4E420);
		}

		static ::Google::Protobuf::MessageParser_1<::PNALNDONMCK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNALNDONMCK*>**)UnitySDK::FromName("", "PNALNDONMCK")->GetStaticField(0x4E428);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNALNDONMCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNALNDONMCK*))((::PBYTE)hIl2Cpp + PNALNDONMCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNALNDONMCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNALNDONMCK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNALNDONMCK*>*(*)())((::PBYTE)hIl2Cpp + PNALNDONMCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNALNDONMCK* Clone()
		{
			return ((::PNALNDONMCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OCEAHPDAPFC*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OCEAHPDAPFC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNALNDONMCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNALNDONMCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNALNDONMCK*))((::PBYTE)hIl2Cpp + PNALNDONMCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNALNDONMCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNALNDONMCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNALNDONMCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNALNDONMCK*))((::PBYTE)hIl2Cpp + PNALNDONMCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNALNDONMCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
