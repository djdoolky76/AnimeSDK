#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNGADDFICJF;
class NPMOBJOCIAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPMOBJOCIAF_ALHNMNOOHJO_OFFSET UNITYSDK_OFFSET(0x1EB9E980)
#define NPMOBJOCIAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB9EDF0)
#define NPMOBJOCIAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB9F170)
#define NPMOBJOCIAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB9E940)
#define NPMOBJOCIAF_CPPDBEGDKIC_OFFSET UNITYSDK_OFFSET(0x1EB9E970)
#define NPMOBJOCIAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB9E880)
#define NPMOBJOCIAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9E830)
#define NPMOBJOCIAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB9EAF0)
#define NPMOBJOCIAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB9E9A0)
#define NPMOBJOCIAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB9EC20)
#define NPMOBJOCIAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB9E7F0)
#define NPMOBJOCIAF_LACKJBJPJMP_OFFSET UNITYSDK_OFFSET(0x1EB9E990)
#define NPMOBJOCIAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB9EFA0)
#define NPMOBJOCIAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB9EF00)
#define NPMOBJOCIAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB9E820)
#define NPMOBJOCIAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB9EC90)
#define NPMOBJOCIAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB9ECF0)

inline static constexpr unsigned int NPMOBJOCIAF_TypeDefinitionIndex = 30710;

	class NPMOBJOCIAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* DFGJDPPMADG; // 0x18
		::System::UInt32 KAIJDAAEEFJ; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::MNGADDFICJF*>** StaticGet_CAGCLDPEILE()
		{
			return (::Google::Protobuf::FieldCodec_1<::MNGADDFICJF*>**)UnitySDK::FromName("", "NPMOBJOCIAF")->GetStaticField(0xEC60);
		}

		static ::Google::Protobuf::MessageParser_1<::NPMOBJOCIAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NPMOBJOCIAF*>**)UnitySDK::FromName("", "NPMOBJOCIAF")->GetStaticField(0xEC68);
		}

		// static const ::System::Object PAPFLAJDAMI; // 0x0
		// static const ::System::Object LDKBDGAGILL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPMOBJOCIAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPMOBJOCIAF*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NPMOBJOCIAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NPMOBJOCIAF*>*(*)())((::PBYTE)hIl2Cpp + NPMOBJOCIAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPMOBJOCIAF* Clone()
		{
			return ((::NPMOBJOCIAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPPDBEGDKIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CPPDBEGDKIC_OFFSET))(this);
		}

		::System::Void ALHNMNOOHJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_ALHNMNOOHJO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>* LACKJBJPJMP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MNGADDFICJF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_LACKJBJPJMP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPMOBJOCIAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPMOBJOCIAF*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPMOBJOCIAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPMOBJOCIAF*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPMOBJOCIAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
