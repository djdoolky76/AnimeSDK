#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJPDJPINDOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJPDJPINDOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E766C50)
#define JJPDJPINDOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E766F30)
#define JJPDJPINDOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7667C0)
#define JJPDJPINDOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E766730)
#define JJPDJPINDOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7666E0)
#define JJPDJPINDOA_DDNGNMEAGCO_OFFSET UNITYSDK_OFFSET(0x1E766810)
#define JJPDJPINDOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E766920)
#define JJPDJPINDOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E766820)
#define JJPDJPINDOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E766A10)
#define JJPDJPINDOA_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1E766800)
#define JJPDJPINDOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7666A0)
#define JJPDJPINDOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E766D80)
#define JJPDJPINDOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E766D30)
#define JJPDJPINDOA_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1E7667F0)
#define JJPDJPINDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7666D0)
#define JJPDJPINDOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E766B10)
#define JJPDJPINDOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E766B70)

inline static constexpr unsigned int JJPDJPINDOA_TypeDefinitionIndex = 32894;

	class JJPDJPINDOA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNHOKGDJDOM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JJPDJPINDOA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJPDJPINDOA*>**)UnitySDK::FromName("", "JJPDJPINDOA")->GetStaticField(0x657E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IAHCELHJLDL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JJPDJPINDOA")->GetStaticField(0x657E8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object MDNNEEDELKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJPDJPINDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJPDJPINDOA*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJPDJPINDOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJPDJPINDOA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJPDJPINDOA*>*(*)())((::PBYTE)hIl2Cpp + JJPDJPINDOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJPDJPINDOA* Clone()
		{
			return ((::JJPDJPINDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJPDJPINDOA_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DDNGNMEAGCO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_DDNGNMEAGCO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJPDJPINDOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJPDJPINDOA*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDJPINDOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJPDJPINDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJPDJPINDOA*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJPDJPINDOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
