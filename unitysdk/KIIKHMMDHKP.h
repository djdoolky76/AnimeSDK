#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIIKHMMDHKP;
class NGBBCMBMOLI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIIKHMMDHKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E85B290)
#define KIIKHMMDHKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85B590)
#define KIIKHMMDHKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E85AE70)
#define KIIKHMMDHKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E85ADC0)
#define KIIKHMMDHKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85AD70)
#define KIIKHMMDHKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E85AFF0)
#define KIIKHMMDHKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E85AEB0)
#define KIIKHMMDHKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E85B110)
#define KIIKHMMDHKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E85AD30)
#define KIIKHMMDHKP_KEDAFMAGKDO_OFFSET UNITYSDK_OFFSET(0x1E85AEA0)
#define KIIKHMMDHKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E85B3D0)
#define KIIKHMMDHKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E85B330)
#define KIIKHMMDHKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E85AD60)
#define KIIKHMMDHKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E85B180)
#define KIIKHMMDHKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E85B1E0)

inline static constexpr unsigned int KIIKHMMDHKP_TypeDefinitionIndex = 26188;

	class KIIKHMMDHKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NGBBCMBMOLI*>* GLPELOOGEPB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIIKHMMDHKP")->GetStaticField(0x1A270);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NFKOBDEKGKI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KIIKHMMDHKP")->GetStaticField(0x1A278);
		}

		// static const ::System::Object DKJHEKFMCJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIIKHMMDHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIIKHMMDHKP*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIIKHMMDHKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIIKHMMDHKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIIKHMMDHKP* Clone()
		{
			return ((::KIIKHMMDHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NGBBCMBMOLI*>* KEDAFMAGKDO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NGBBCMBMOLI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_KEDAFMAGKDO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIIKHMMDHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIIKHMMDHKP*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIIKHMMDHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIIKHMMDHKP*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIIKHMMDHKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
