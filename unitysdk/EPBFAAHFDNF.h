#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBFAAHFDNF;
class MGCPEPBPMNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPBFAAHFDNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2D6480)
#define EPBFAAHFDNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2D6800)
#define EPBFAAHFDNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2D5F70)
#define EPBFAAHFDNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2D5EB0)
#define EPBFAAHFDNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2D5E60)
#define EPBFAAHFDNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2D6180)
#define EPBFAAHFDNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2D5FF0)
#define EPBFAAHFDNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2D62B0)
#define EPBFAAHFDNF_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E2D5FC0)
#define EPBFAAHFDNF_JIDJENAPIPD_OFFSET UNITYSDK_OFFSET(0x1E2D5FE0)
#define EPBFAAHFDNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2D5DF0)
#define EPBFAAHFDNF_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E2D5FD0)
#define EPBFAAHFDNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2D6630)
#define EPBFAAHFDNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2D6590)
#define EPBFAAHFDNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2D5E50)
#define EPBFAAHFDNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2D6320)
#define EPBFAAHFDNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2D6380)

inline static constexpr unsigned int EPBFAAHFDNF_TypeDefinitionIndex = 31704;

	class EPBFAAHFDNF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::MGCPEPBPMNG*>* LBJFDJMNDFD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KBBFPCGLDCN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EPBFAAHFDNF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPBFAAHFDNF*>**)UnitySDK::FromName("", "EPBFAAHFDNF")->GetStaticField(0x47AF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::MGCPEPBPMNG*>** StaticGet_EBMPFDEOCME()
		{
			return (::Google::Protobuf::FieldCodec_1<::MGCPEPBPMNG*>**)UnitySDK::FromName("", "EPBFAAHFDNF")->GetStaticField(0x47AF8);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object FOOPLJCKJCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPBFAAHFDNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBFAAHFDNF*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPBFAAHFDNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPBFAAHFDNF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPBFAAHFDNF*>*(*)())((::PBYTE)hIl2Cpp + EPBFAAHFDNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPBFAAHFDNF* Clone()
		{
			return ((::EPBFAAHFDNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_KAADEPADNMH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MGCPEPBPMNG*>* JIDJENAPIPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MGCPEPBPMNG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_JIDJENAPIPD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPBFAAHFDNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPBFAAHFDNF*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPBFAAHFDNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPBFAAHFDNF*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPBFAAHFDNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
