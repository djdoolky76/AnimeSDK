#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNFOAGBJBP;
class MJLJMCCGNEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANNFOAGBJBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201A2C10)
#define ANNFOAGBJBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x201A2F10)
#define ANNFOAGBJBP_CLONE_OFFSET UNITYSDK_OFFSET(0x201A2790)
#define ANNFOAGBJBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x201A26E0)
#define ANNFOAGBJBP_CTOR_OFFSET UNITYSDK_OFFSET(0x201A2690)
#define ANNFOAGBJBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201A2970)
#define ANNFOAGBJBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x201A27F0)
#define ANNFOAGBJBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x201A2A90)
#define ANNFOAGBJBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x201A2620)
#define ANNFOAGBJBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x201A2D50)
#define ANNFOAGBJBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201A2CB0)
#define ANNFOAGBJBP_OPFBPHANEFF_OFFSET UNITYSDK_OFFSET(0x201A27E0)
#define ANNFOAGBJBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x201A2680)
#define ANNFOAGBJBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x201A2B00)
#define ANNFOAGBJBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x201A2B60)

inline static constexpr unsigned int ANNFOAGBJBP_TypeDefinitionIndex = 29002;

	class ANNFOAGBJBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>* LJLEOKJBDJJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ANNFOAGBJBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANNFOAGBJBP*>**)UnitySDK::FromName("", "ANNFOAGBJBP")->GetStaticField(0x3C4B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::MJLJMCCGNEE*>** StaticGet_COOJEGHKBMJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::MJLJMCCGNEE*>**)UnitySDK::FromName("", "ANNFOAGBJBP")->GetStaticField(0x3C4B8);
		}

		// static const ::System::Object ODOJCIOAJGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANNFOAGBJBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNFOAGBJBP*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNFOAGBJBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANNFOAGBJBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANNFOAGBJBP*>*(*)())((::PBYTE)hIl2Cpp + ANNFOAGBJBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANNFOAGBJBP* Clone()
		{
			return ((::ANNFOAGBJBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>* OPFBPHANEFF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_OPFBPHANEFF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANNFOAGBJBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANNFOAGBJBP*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANNFOAGBJBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNFOAGBJBP*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANNFOAGBJBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
