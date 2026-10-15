#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKFPIDHMOC;
class GEBBMDCOLCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEBBMDCOLCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E450FC0)
#define GEBBMDCOLCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4512C0)
#define GEBBMDCOLCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E450BA0)
#define GEBBMDCOLCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E450AF0)
#define GEBBMDCOLCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E450AA0)
#define GEBBMDCOLCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E450D20)
#define GEBBMDCOLCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E450BE0)
#define GEBBMDCOLCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E450E40)
#define GEBBMDCOLCH_IKCMIKIHNCL_OFFSET UNITYSDK_OFFSET(0x1E450BD0)
#define GEBBMDCOLCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E450A60)
#define GEBBMDCOLCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E451100)
#define GEBBMDCOLCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E451060)
#define GEBBMDCOLCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E450A90)
#define GEBBMDCOLCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E450EB0)
#define GEBBMDCOLCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E450F10)

	class GEBBMDCOLCH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EPKFPIDHMOC*>* OPNIFHOLILJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GEBBMDCOLCH")->GetStaticField(0x11540);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BAACIHAKKEH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GEBBMDCOLCH")->GetStaticField(0x11548);
		}

		// static const ::System::Object OBAJGBAIIIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEBBMDCOLCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEBBMDCOLCH*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEBBMDCOLCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GEBBMDCOLCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEBBMDCOLCH* Clone()
		{
			return ((::GEBBMDCOLCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPKFPIDHMOC*>* IKCMIKIHNCL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPKFPIDHMOC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_IKCMIKIHNCL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEBBMDCOLCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEBBMDCOLCH*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEBBMDCOLCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEBBMDCOLCH*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEBBMDCOLCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
