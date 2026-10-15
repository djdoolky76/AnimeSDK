#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDANEJNFABF;
class GIHLNOIACIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIHLNOIACIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E498690)
#define GIHLNOIACIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E498A20)
#define GIHLNOIACIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E498230)
#define GIHLNOIACIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E498140)
#define GIHLNOIACIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4980C0)
#define GIHLNOIACIH_EMDDGCNJJDI_OFFSET UNITYSDK_OFFSET(0x1E498270)
#define GIHLNOIACIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4982B0)
#define GIHLNOIACIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E498280)
#define GIHLNOIACIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E498400)
#define GIHLNOIACIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E498080)
#define GIHLNOIACIH_LALLDCLCGAM_OFFSET UNITYSDK_OFFSET(0x1E498260)
#define GIHLNOIACIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E498820)
#define GIHLNOIACIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E498770)
#define GIHLNOIACIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4980B0)
#define GIHLNOIACIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E498550)
#define GIHLNOIACIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4985B0)

	class GIHLNOIACIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AAKKCPGEPLM; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::FDANEJNFABF*>* HLGIJDGFIPK; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_PGLFNFNJDDO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GIHLNOIACIH")->GetStaticField(0x19690);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NNOHEKODHNI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GIHLNOIACIH")->GetStaticField(0x19698);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIHLNOIACIH")->GetStaticField(0x196A0);
		}

		// static const ::System::Object IHJBHHLNOPA; // 0x0
		// static const ::System::Object HBJAHGPOLKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIHLNOIACIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIHLNOIACIH*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIHLNOIACIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIHLNOIACIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIHLNOIACIH* Clone()
		{
			return ((::GIHLNOIACIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FDANEJNFABF*>* LALLDCLCGAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FDANEJNFABF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_LALLDCLCGAM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EMDDGCNJJDI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_EMDDGCNJJDI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIHLNOIACIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIHLNOIACIH*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIHLNOIACIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIHLNOIACIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIHLNOIACIH*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIHLNOIACIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
