#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BANELIGFLCO;
class DBPHHPGNMKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBPHHPGNMKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F43DBB0)
#define DBPHHPGNMKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43DEB0)
#define DBPHHPGNMKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F43D730)
#define DBPHHPGNMKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F43D680)
#define DBPHHPGNMKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F43D630)
#define DBPHHPGNMKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F43D910)
#define DBPHHPGNMKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F43D790)
#define DBPHHPGNMKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F43DA30)
#define DBPHHPGNMKC_HCCGBGKAOPK_OFFSET UNITYSDK_OFFSET(0x1F43D780)
#define DBPHHPGNMKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F43D5C0)
#define DBPHHPGNMKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F43DCF0)
#define DBPHHPGNMKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F43DC50)
#define DBPHHPGNMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F43D620)
#define DBPHHPGNMKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F43DAA0)
#define DBPHHPGNMKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F43DB00)

inline static constexpr unsigned int DBPHHPGNMKC_TypeDefinitionIndex = 32082;

	class DBPHHPGNMKC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BANELIGFLCO*>* BKKECGMPEPM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DBPHHPGNMKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DBPHHPGNMKC*>**)UnitySDK::FromName("", "DBPHHPGNMKC")->GetStaticField(0x24EA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::BANELIGFLCO*>** StaticGet_DMKEHKFCODN()
		{
			return (::Google::Protobuf::FieldCodec_1<::BANELIGFLCO*>**)UnitySDK::FromName("", "DBPHHPGNMKC")->GetStaticField(0x24EA8);
		}

		// static const ::System::Object CAANLOCLAKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBPHHPGNMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBPHHPGNMKC*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBPHHPGNMKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DBPHHPGNMKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DBPHHPGNMKC*>*(*)())((::PBYTE)hIl2Cpp + DBPHHPGNMKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBPHHPGNMKC* Clone()
		{
			return ((::DBPHHPGNMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BANELIGFLCO*>* HCCGBGKAOPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BANELIGFLCO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_HCCGBGKAOPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBPHHPGNMKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBPHHPGNMKC*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBPHHPGNMKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBPHHPGNMKC*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBPHHPGNMKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
