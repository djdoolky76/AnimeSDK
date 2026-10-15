#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHAHDBDOIE;
class OMLMOJIGLEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GBHAHDBDOIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3FD460)
#define GBHAHDBDOIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3FD760)
#define GBHAHDBDOIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3FCFE0)
#define GBHAHDBDOIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3FCF30)
#define GBHAHDBDOIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCEE0)
#define GBHAHDBDOIE_EAPIKAKIFGN_OFFSET UNITYSDK_OFFSET(0x1E3FD030)
#define GBHAHDBDOIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3FD1C0)
#define GBHAHDBDOIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3FD040)
#define GBHAHDBDOIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3FD2E0)
#define GBHAHDBDOIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3FCE70)
#define GBHAHDBDOIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3FD5A0)
#define GBHAHDBDOIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3FD500)
#define GBHAHDBDOIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3FCED0)
#define GBHAHDBDOIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3FD350)
#define GBHAHDBDOIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3FD3B0)

inline static constexpr unsigned int GBHAHDBDOIE_TypeDefinitionIndex = 32970;

	class GBHAHDBDOIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OMLMOJIGLEE*>* BPHOPJNPLKH; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::OMLMOJIGLEE*>** StaticGet_DHKLCJBCBKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::OMLMOJIGLEE*>**)UnitySDK::FromName("", "GBHAHDBDOIE")->GetStaticField(0xC620);
		}

		static ::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>**)UnitySDK::FromName("", "GBHAHDBDOIE")->GetStaticField(0xC628);
		}

		// static const ::System::Object PAGFCHEGMFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GBHAHDBDOIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHAHDBDOIE*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHAHDBDOIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>*(*)())((::PBYTE)hIl2Cpp + GBHAHDBDOIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GBHAHDBDOIE* Clone()
		{
			return ((::GBHAHDBDOIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMLMOJIGLEE*>* EAPIKAKIFGN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMLMOJIGLEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_EAPIKAKIFGN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GBHAHDBDOIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBHAHDBDOIE*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GBHAHDBDOIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBHAHDBDOIE*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GBHAHDBDOIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
