#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDABDPPPHBN;
class KLABGDHBEDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLABGDHBEDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8801E0)
#define KLABGDHBEDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8805A0)
#define KLABGDHBEDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E87FE50)
#define KLABGDHBEDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E87FD80)
#define KLABGDHBEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87FD30)
#define KLABGDHBEDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E87FED0)
#define KLABGDHBEDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E87FEA0)
#define KLABGDHBEDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E880020)
#define KLABGDHBEDN_IAHEOLIKLPH_OFFSET UNITYSDK_OFFSET(0x1E87FE80)
#define KLABGDHBEDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E87FCF0)
#define KLABGDHBEDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E880370)
#define KLABGDHBEDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8802C0)
#define KLABGDHBEDN_NHFFKJCIAAL_OFFSET UNITYSDK_OFFSET(0x1E87FE90)
#define KLABGDHBEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E87FD20)
#define KLABGDHBEDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8800A0)
#define KLABGDHBEDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E880100)

	class KLABGDHBEDN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* DFGGCOEGIDF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* KPHLBBJCBLG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_AMAMBLNELKM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1F720);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1F728);
		}

		static ::System::Object** StaticGet_NGNIGGEKIEK()
		{
			return (::System::Object**)UnitySDK::FromName("", "KLABGDHBEDN")->GetStaticField(0x1F730);
		}

		// static const ::System::Object EBNGOKKHFAN; // 0x0
		// static const ::System::Object NAGLPBFJHDB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLABGDHBEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLABGDHBEDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLABGDHBEDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLABGDHBEDN* Clone()
		{
			return ((::KLABGDHBEDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IAHEOLIKLPH()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_IAHEOLIKLPH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>* NHFFKJCIAAL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDABDPPPHBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_NHFFKJCIAAL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLABGDHBEDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLABGDHBEDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLABGDHBEDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLABGDHBEDN*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLABGDHBEDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
