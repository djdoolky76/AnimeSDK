#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMHADFNOIGP;
class MOJFFDOILBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMHADFNOIGP_ALOAOEANCKC_OFFSET UNITYSDK_OFFSET(0x1E1EE100)
#define DMHADFNOIGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1EE5F0)
#define DMHADFNOIGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1EE8F0)
#define DMHADFNOIGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1EE0A0)
#define DMHADFNOIGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1EDFE0)
#define DMHADFNOIGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1EDF90)
#define DMHADFNOIGP_EJDJJDNMCEL_OFFSET UNITYSDK_OFFSET(0x1E1EE0F0)
#define DMHADFNOIGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1EE2B0)
#define DMHADFNOIGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1EE120)
#define DMHADFNOIGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1EE3E0)
#define DMHADFNOIGP_GKBFLIDNBOL_OFFSET UNITYSDK_OFFSET(0x1E1EE110)
#define DMHADFNOIGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1EDF20)
#define DMHADFNOIGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1EE720)
#define DMHADFNOIGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1EE680)
#define DMHADFNOIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1EDF80)
#define DMHADFNOIGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1EE450)
#define DMHADFNOIGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1EE4B0)

	class DMHADFNOIGP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MOJFFDOILBN*>* JJKHOIKOKJJ; // 0x18
		::System::Boolean PAOOLFLOLEE; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_KPHPMNAFAIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DMHADFNOIGP")->GetStaticField(0x3F040);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMHADFNOIGP")->GetStaticField(0x3F048);
		}

		// static const ::System::Object NFIAGOILAPH; // 0x0
		// static const ::System::Object KGOMBNJIEIP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMHADFNOIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMHADFNOIGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMHADFNOIGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMHADFNOIGP* Clone()
		{
			return ((::DMHADFNOIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_CLONE_OFFSET))(this);
		}

		::System::Boolean EJDJJDNMCEL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_EJDJJDNMCEL_OFFSET))(this);
		}

		::System::Void ALOAOEANCKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHADFNOIGP_ALOAOEANCKC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MOJFFDOILBN*>* GKBFLIDNBOL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MOJFFDOILBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_GKBFLIDNBOL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMHADFNOIGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHADFNOIGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMHADFNOIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHADFNOIGP*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMHADFNOIGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
