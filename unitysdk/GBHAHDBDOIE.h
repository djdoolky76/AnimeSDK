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

#define GBHAHDBDOIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC4ADF0)
#define GBHAHDBDOIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4B0F0)
#define GBHAHDBDOIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC4A970)
#define GBHAHDBDOIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC4A8C0)
#define GBHAHDBDOIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4A870)
#define GBHAHDBDOIE_EAPIKAKIFGN_OFFSET UNITYSDK_OFFSET(0x1FC4A9C0)
#define GBHAHDBDOIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC4AB50)
#define GBHAHDBDOIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC4A9D0)
#define GBHAHDBDOIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC4AC70)
#define GBHAHDBDOIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC4A800)
#define GBHAHDBDOIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC4AF30)
#define GBHAHDBDOIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC4AE90)
#define GBHAHDBDOIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC4A860)
#define GBHAHDBDOIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC4ACE0)
#define GBHAHDBDOIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC4AD40)

inline static constexpr unsigned int GBHAHDBDOIE_TypeDefinitionIndex = 33885;

	class GBHAHDBDOIE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OMLMOJIGLEE*>* BPHOPJNPLKH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GBHAHDBDOIE*>**)UnitySDK::FromName("", "GBHAHDBDOIE")->GetStaticField(0x56E70);
		}

		static ::Google::Protobuf::FieldCodec_1<::OMLMOJIGLEE*>** StaticGet_DHKLCJBCBKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::OMLMOJIGLEE*>**)UnitySDK::FromName("", "GBHAHDBDOIE")->GetStaticField(0x56E78);
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
