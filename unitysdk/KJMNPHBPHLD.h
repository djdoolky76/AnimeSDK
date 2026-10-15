#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJMNPHBPHLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define KJMNPHBPHLD_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1E843700)
#define KJMNPHBPHLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E843B80)
#define KJMNPHBPHLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E843F10)
#define KJMNPHBPHLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8436D0)
#define KJMNPHBPHLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E843640)
#define KJMNPHBPHLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E843600)
#define KJMNPHBPHLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E843880)
#define KJMNPHBPHLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E843730)
#define KJMNPHBPHLD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E843720)
#define KJMNPHBPHLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8439A0)
#define KJMNPHBPHLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8435C0)
#define KJMNPHBPHLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E843D50)
#define KJMNPHBPHLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E843CB0)
#define KJMNPHBPHLD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E843710)
#define KJMNPHBPHLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8435F0)
#define KJMNPHBPHLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E843A10)
#define KJMNPHBPHLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E843A70)

inline static constexpr unsigned int KJMNPHBPHLD_TypeDefinitionIndex = 30146;

	class KJMNPHBPHLD : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "KJMNPHBPHLD")->GetStaticField(0x1ACA0);
		}

		static ::Google::Protobuf::MessageParser_1<::KJMNPHBPHLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJMNPHBPHLD*>**)UnitySDK::FromName("", "KJMNPHBPHLD")->GetStaticField(0x1ACA8);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJMNPHBPHLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMNPHBPHLD*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJMNPHBPHLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJMNPHBPHLD*>*(*)())((::PBYTE)hIl2Cpp + KJMNPHBPHLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJMNPHBPHLD* Clone()
		{
			return ((::KJMNPHBPHLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CACOAPFOAAM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJMNPHBPHLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJMNPHBPHLD*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJMNPHBPHLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMNPHBPHLD*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJMNPHBPHLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
