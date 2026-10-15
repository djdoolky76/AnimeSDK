#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIGBFGJMAPA;
class PPDLOPCHFDG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIGBFGJMAPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA0DAA0)
#define MIGBFGJMAPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA0DE20)
#define MIGBFGJMAPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA0D5E0)
#define MIGBFGJMAPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA0D520)
#define MIGBFGJMAPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D4D0)
#define MIGBFGJMAPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA0D790)
#define MIGBFGJMAPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA0D640)
#define MIGBFGJMAPA_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1EA0D620)
#define MIGBFGJMAPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA0D8C0)
#define MIGBFGJMAPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA0D490)
#define MIGBFGJMAPA_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1EA0D630)
#define MIGBFGJMAPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA0DC50)
#define MIGBFGJMAPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA0DBB0)
#define MIGBFGJMAPA_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1EA0D610)
#define MIGBFGJMAPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA0D4C0)
#define MIGBFGJMAPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA0D930)
#define MIGBFGJMAPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA0D990)

inline static constexpr unsigned int MIGBFGJMAPA_TypeDefinitionIndex = 28221;

	class MIGBFGJMAPA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AFFBGDFNCBG; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MIGBFGJMAPA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MIGBFGJMAPA*>**)UnitySDK::FromName("", "MIGBFGJMAPA")->GetStaticField(0x52A40);
		}

		static ::Google::Protobuf::FieldCodec_1<::PPDLOPCHFDG*>** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec_1<::PPDLOPCHFDG*>**)UnitySDK::FromName("", "MIGBFGJMAPA")->GetStaticField(0x52A48);
		}

		// static const ::System::Object OICKCNEBADE; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MIGBFGJMAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIGBFGJMAPA*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIGBFGJMAPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MIGBFGJMAPA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MIGBFGJMAPA*>*(*)())((::PBYTE)hIl2Cpp + MIGBFGJMAPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MIGBFGJMAPA* Clone()
		{
			return ((::MIGBFGJMAPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PPDLOPCHFDG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MIGBFGJMAPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIGBFGJMAPA*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MIGBFGJMAPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIGBFGJMAPA*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIGBFGJMAPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
