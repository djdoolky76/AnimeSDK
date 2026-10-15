#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKFPIDHMOC;
class GEBBMDCOLCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEBBMDCOLCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4238E0)
#define GEBBMDCOLCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E423BE0)
#define GEBBMDCOLCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4234C0)
#define GEBBMDCOLCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E423410)
#define GEBBMDCOLCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4233C0)
#define GEBBMDCOLCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E423640)
#define GEBBMDCOLCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E423500)
#define GEBBMDCOLCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E423760)
#define GEBBMDCOLCH_IKCMIKIHNCL_OFFSET UNITYSDK_OFFSET(0x1E4234F0)
#define GEBBMDCOLCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E423380)
#define GEBBMDCOLCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E423A20)
#define GEBBMDCOLCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E423980)
#define GEBBMDCOLCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4233B0)
#define GEBBMDCOLCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4237D0)
#define GEBBMDCOLCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E423830)

inline static constexpr unsigned int GEBBMDCOLCH_TypeDefinitionIndex = 29354;

	class GEBBMDCOLCH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPKFPIDHMOC*>* OPNIFHOLILJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GEBBMDCOLCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEBBMDCOLCH*>**)UnitySDK::FromName("", "GEBBMDCOLCH")->GetStaticField(0x106F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPKFPIDHMOC*>** StaticGet_BAACIHAKKEH()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPKFPIDHMOC*>**)UnitySDK::FromName("", "GEBBMDCOLCH")->GetStaticField(0x106F8);
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

		static ::Google::Protobuf::MessageParser_1<::GEBBMDCOLCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEBBMDCOLCH*>*(*)())((::PBYTE)hIl2Cpp + GEBBMDCOLCH_JJGHOBBFNJD_OFFSET))();
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
