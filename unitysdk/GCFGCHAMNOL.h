#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCFGCHAMNOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCFGCHAMNOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E43D3D0)
#define GCFGCHAMNOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43D750)
#define GCFGCHAMNOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E43CF40)
#define GCFGCHAMNOL_CMLIMOKKNED_OFFSET UNITYSDK_OFFSET(0x1E43CF80)
#define GCFGCHAMNOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E43CEB0)
#define GCFGCHAMNOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43CE60)
#define GCFGCHAMNOL_EKKPACFEELB_OFFSET UNITYSDK_OFFSET(0x1E43CF90)
#define GCFGCHAMNOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E43D0A0)
#define GCFGCHAMNOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E43CFA0)
#define GCFGCHAMNOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E43D190)
#define GCFGCHAMNOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E43CE20)
#define GCFGCHAMNOL_JOIJKHBKGNL_OFFSET UNITYSDK_OFFSET(0x1E43CF70)
#define GCFGCHAMNOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E43D510)
#define GCFGCHAMNOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E43D4C0)
#define GCFGCHAMNOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E43CE50)
#define GCFGCHAMNOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E43D290)
#define GCFGCHAMNOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E43D2F0)

inline static constexpr unsigned int GCFGCHAMNOL_TypeDefinitionIndex = 27504;

	class GCFGCHAMNOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DMCMFNPDHHK; // 0x18
		::System::UInt32 CCKEBKGCJGH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GCFGCHAMNOL")->GetStaticField(0xF160);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GPLHELGOADD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GCFGCHAMNOL")->GetStaticField(0xF168);
		}

		// static const ::System::Object IGAGHLNCGFL; // 0x0
		// static const ::System::Object KGAEKKJEHEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GCFGCHAMNOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCFGCHAMNOL* Clone()
		{
			return ((::GCFGCHAMNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JOIJKHBKGNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_JOIJKHBKGNL_OFFSET))(this);
		}

		::System::UInt32 CMLIMOKKNED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CMLIMOKKNED_OFFSET))(this);
		}

		::System::Void EKKPACFEELB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_EKKPACFEELB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCFGCHAMNOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCFGCHAMNOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCFGCHAMNOL*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCFGCHAMNOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
