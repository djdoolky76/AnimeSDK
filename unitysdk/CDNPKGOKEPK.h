#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDNPKGOKEPK;
class FFEEHEBBLCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDNPKGOKEPK_AOKMDGBOOMA_OFFSET UNITYSDK_OFFSET(0x1E05E100)
#define CDNPKGOKEPK_BCHCIMJPMLO_OFFSET UNITYSDK_OFFSET(0x1E05E0F0)
#define CDNPKGOKEPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E05E5B0)
#define CDNPKGOKEPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E05E900)
#define CDNPKGOKEPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E05E0A0)
#define CDNPKGOKEPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E05DFA0)
#define CDNPKGOKEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E05DF20)
#define CDNPKGOKEPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E05E140)
#define CDNPKGOKEPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E05E110)
#define CDNPKGOKEPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E05E290)
#define CDNPKGOKEPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E05DEE0)
#define CDNPKGOKEPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E05E7E0)
#define CDNPKGOKEPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E05E720)
#define CDNPKGOKEPK_MLIOOLIBIHK_OFFSET UNITYSDK_OFFSET(0x1E05E0E0)
#define CDNPKGOKEPK_NLPALKLGKEF_OFFSET UNITYSDK_OFFSET(0x1E05E0D0)
#define CDNPKGOKEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E05DF10)
#define CDNPKGOKEPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E05E3E0)
#define CDNPKGOKEPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E05E440)

inline static constexpr unsigned int CDNPKGOKEPK_TypeDefinitionIndex = 31344;

	class CDNPKGOKEPK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::FFEEHEBBLCI*>* CEHDJOCBNIL; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLGBKJHALEF; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 PDDBLBKCGIP; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::FFEEHEBBLCI*>** StaticGet_AMCKCGGPJMP()
		{
			return (::Google::Protobuf::FieldCodec_1<::FFEEHEBBLCI*>**)UnitySDK::FromName("", "CDNPKGOKEPK")->GetStaticField(0xF520);
		}

		static ::Google::Protobuf::MessageParser_1<::CDNPKGOKEPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDNPKGOKEPK*>**)UnitySDK::FromName("", "CDNPKGOKEPK")->GetStaticField(0xF528);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KADMAOPFIGK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CDNPKGOKEPK")->GetStaticField(0xF530);
		}

		// static const ::System::Object LGGGLPCPMFJ; // 0x0
		// static const ::System::Object CHIHDJBEDJN; // 0x0
		// static const ::System::Object ANNLNBFLGLC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDNPKGOKEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNPKGOKEPK*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDNPKGOKEPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDNPKGOKEPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDNPKGOKEPK*>*(*)())((::PBYTE)hIl2Cpp + CDNPKGOKEPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDNPKGOKEPK* Clone()
		{
			return ((::CDNPKGOKEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FFEEHEBBLCI*>* NLPALKLGKEF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FFEEHEBBLCI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_NLPALKLGKEF_OFFSET))(this);
		}

		::System::UInt32 MLIOOLIBIHK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_MLIOOLIBIHK_OFFSET))(this);
		}

		::System::Void BCHCIMJPMLO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_BCHCIMJPMLO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AOKMDGBOOMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_AOKMDGBOOMA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDNPKGOKEPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDNPKGOKEPK*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDNPKGOKEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDNPKGOKEPK*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDNPKGOKEPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
