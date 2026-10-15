#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCGIIEDCHMG;
class OHLGEHNPAAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCGIIEDCHMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE69C0)
#define OCGIIEDCHMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE6CC0)
#define OCGIIEDCHMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE65A0)
#define OCGIIEDCHMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE6510)
#define OCGIIEDCHMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE64D0)
#define OCGIIEDCHMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE6720)
#define OCGIIEDCHMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE65E0)
#define OCGIIEDCHMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE6840)
#define OCGIIEDCHMG_JGIMDIMNIOJ_OFFSET UNITYSDK_OFFSET(0x1DDE65D0)
#define OCGIIEDCHMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE6490)
#define OCGIIEDCHMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE6B00)
#define OCGIIEDCHMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE6A60)
#define OCGIIEDCHMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE64C0)
#define OCGIIEDCHMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE68B0)
#define OCGIIEDCHMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE6910)

inline static constexpr unsigned int OCGIIEDCHMG_TypeDefinitionIndex = 30911;

	class OCGIIEDCHMG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>* EFINHGBIHCM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OCGIIEDCHMG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OCGIIEDCHMG*>**)UnitySDK::FromName("", "OCGIIEDCHMG")->GetStaticField(0x11500);
		}

		static ::Google::Protobuf::FieldCodec_1<::OHLGEHNPAAL*>** StaticGet_BMJAEIGGFCK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OHLGEHNPAAL*>**)UnitySDK::FromName("", "OCGIIEDCHMG")->GetStaticField(0x11508);
		}

		// static const ::System::Object KIDAAPMDPMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCGIIEDCHMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCGIIEDCHMG*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGIIEDCHMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OCGIIEDCHMG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OCGIIEDCHMG*>*(*)())((::PBYTE)hIl2Cpp + OCGIIEDCHMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCGIIEDCHMG* Clone()
		{
			return ((::OCGIIEDCHMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>* JGIMDIMNIOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_JGIMDIMNIOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCGIIEDCHMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCGIIEDCHMG*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCGIIEDCHMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCGIIEDCHMG*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCGIIEDCHMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
