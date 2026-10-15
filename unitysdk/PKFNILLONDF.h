#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNOGFAMJ;
class PKFNILLONDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKFNILLONDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF8A2B0)
#define PKFNILLONDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8A620)
#define PKFNILLONDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF89E00)
#define PKFNILLONDF_CNIEEAPMPBE_OFFSET UNITYSDK_OFFSET(0x1DF89E50)
#define PKFNILLONDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF89D70)
#define PKFNILLONDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF89D30)
#define PKFNILLONDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF89FB0)
#define PKFNILLONDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF89E60)
#define PKFNILLONDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF8A0E0)
#define PKFNILLONDF_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1DF89E40)
#define PKFNILLONDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF89CF0)
#define PKFNILLONDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF8A460)
#define PKFNILLONDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF8A3C0)
#define PKFNILLONDF_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1DF89E30)
#define PKFNILLONDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF89D20)
#define PKFNILLONDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF8A150)
#define PKFNILLONDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF8A1B0)

	class PKFNILLONDF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* GIPLBIJNFCG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKFNILLONDF")->GetStaticField(0x488B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PICOGFMMGAE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKFNILLONDF")->GetStaticField(0x488B8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object IICDCJCCJOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKFNILLONDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFNILLONDF*))((::PBYTE)hIl2Cpp + PKFNILLONDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKFNILLONDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKFNILLONDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKFNILLONDF* Clone()
		{
			return ((::PKFNILLONDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKFNILLONDF_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* CNIEEAPMPBE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_CNIEEAPMPBE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKFNILLONDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKFNILLONDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKFNILLONDF*))((::PBYTE)hIl2Cpp + PKFNILLONDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKFNILLONDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKFNILLONDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKFNILLONDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFNILLONDF*))((::PBYTE)hIl2Cpp + PKFNILLONDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKFNILLONDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
