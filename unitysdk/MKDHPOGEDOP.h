#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHPOGEDOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKDHPOGEDOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA26D20)
#define MKDHPOGEDOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA26FB0)
#define MKDHPOGEDOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA26830)
#define MKDHPOGEDOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA26740)
#define MKDHPOGEDOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA266B0)
#define MKDHPOGEDOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA268D0)
#define MKDHPOGEDOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA268A0)
#define MKDHPOGEDOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA269F0)
#define MKDHPOGEDOP_HOBCMCKONNG_OFFSET UNITYSDK_OFFSET(0x1EA26880)
#define MKDHPOGEDOP_IKHJHOMMMHA_OFFSET UNITYSDK_OFFSET(0x1EA26860)
#define MKDHPOGEDOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA26670)
#define MKDHPOGEDOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA26EA0)
#define MKDHPOGEDOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA26E30)
#define MKDHPOGEDOP_NBEBPCIAEJJ_OFFSET UNITYSDK_OFFSET(0x1EA26890)
#define MKDHPOGEDOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA266A0)
#define MKDHPOGEDOP_PICDILFILEE_OFFSET UNITYSDK_OFFSET(0x1EA26870)
#define MKDHPOGEDOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA26BC0)
#define MKDHPOGEDOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA26C20)

inline static constexpr unsigned int MKDHPOGEDOP_TypeDefinitionIndex = 26424;

	class MKDHPOGEDOP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGPKFPOOOLI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGFAEHHGOPE; // 0x20
		::System::UInt32 FEPEGKOJNGA; // 0x28
		static ::Google::Protobuf::MessageParser_1<::MKDHPOGEDOP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKDHPOGEDOP*>**)UnitySDK::FromName("", "MKDHPOGEDOP")->GetStaticField(0x547C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KLAKLNNKMNI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MKDHPOGEDOP")->GetStaticField(0x547C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCFLMJKOLCB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MKDHPOGEDOP")->GetStaticField(0x547D0);
		}

		// static const ::System::Object KIHIMKNPPDL; // 0x0
		// static const ::System::Object ILBFALFKMMI; // 0x0
		// static const ::System::Object PGBBLKJJNCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKDHPOGEDOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDHPOGEDOP*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKDHPOGEDOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKDHPOGEDOP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKDHPOGEDOP*>*(*)())((::PBYTE)hIl2Cpp + MKDHPOGEDOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKDHPOGEDOP* Clone()
		{
			return ((::MKDHPOGEDOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKHJHOMMMHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_IKHJHOMMMHA_OFFSET))(this);
		}

		::System::Void PICDILFILEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_PICDILFILEE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HOBCMCKONNG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_HOBCMCKONNG_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NBEBPCIAEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_NBEBPCIAEJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKDHPOGEDOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKDHPOGEDOP*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKDHPOGEDOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKDHPOGEDOP*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKDHPOGEDOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
