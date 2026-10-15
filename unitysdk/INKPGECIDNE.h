#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INKPGECIDNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INKPGECIDNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E697E20)
#define INKPGECIDNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E698080)
#define INKPGECIDNE_CJKHFOADEAG_OFFSET UNITYSDK_OFFSET(0x1E697A50)
#define INKPGECIDNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E697A20)
#define INKPGECIDNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E697990)
#define INKPGECIDNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E697940)
#define INKPGECIDNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E697B50)
#define INKPGECIDNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E697A60)
#define INKPGECIDNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E697C40)
#define INKPGECIDNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E697900)
#define INKPGECIDNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E697EE0)
#define INKPGECIDNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E697E90)
#define INKPGECIDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E697930)
#define INKPGECIDNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E697D40)
#define INKPGECIDNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E697DA0)

inline static constexpr unsigned int INKPGECIDNE_TypeDefinitionIndex = 32910;

	class INKPGECIDNE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MGJEHPPCIJO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::INKPGECIDNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::INKPGECIDNE*>**)UnitySDK::FromName("", "INKPGECIDNE")->GetStaticField(0x53D80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_HAEPDJMJMED()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "INKPGECIDNE")->GetStaticField(0x53D88);
		}

		// static const ::System::Object CNAPCBLOHIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INKPGECIDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::INKPGECIDNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::INKPGECIDNE*>*(*)())((::PBYTE)hIl2Cpp + INKPGECIDNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INKPGECIDNE* Clone()
		{
			return ((::INKPGECIDNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJKHFOADEAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CJKHFOADEAG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INKPGECIDNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INKPGECIDNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INKPGECIDNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INKPGECIDNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INKPGECIDNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INKPGECIDNE*))((::PBYTE)hIl2Cpp + INKPGECIDNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INKPGECIDNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
