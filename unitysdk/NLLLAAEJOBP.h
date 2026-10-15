#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLLLAAEJOBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLLLAAEJOBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB67930)
#define NLLLAAEJOBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB67C20)
#define NLLLAAEJOBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB674A0)
#define NLLLAAEJOBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB67410)
#define NLLLAAEJOBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB673C0)
#define NLLLAAEJOBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB67600)
#define NLLLAAEJOBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB67500)
#define NLLLAAEJOBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB676F0)
#define NLLLAAEJOBP_IPFBNDCHFEF_OFFSET UNITYSDK_OFFSET(0x1EB674E0)
#define NLLLAAEJOBP_JCELPHIFMLI_OFFSET UNITYSDK_OFFSET(0x1EB674F0)
#define NLLLAAEJOBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB67380)
#define NLLLAAEJOBP_LDBCEEPAELL_OFFSET UNITYSDK_OFFSET(0x1EB674D0)
#define NLLLAAEJOBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB67A60)
#define NLLLAAEJOBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB67A10)
#define NLLLAAEJOBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB673B0)
#define NLLLAAEJOBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB677F0)
#define NLLLAAEJOBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB67850)

	class NLLLAAEJOBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NKKDOHGLAFP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAJINDCEHMM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NLLLAAEJOBP")->GetStaticField(0x1C6E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PLOFJBDGKMD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NLLLAAEJOBP")->GetStaticField(0x1C6E8);
		}

		// static const ::System::Object JOBMICAKNHM; // 0x0
		// static const ::System::Object EKIOFOKIALJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLLLAAEJOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLLLAAEJOBP*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLLLAAEJOBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NLLLAAEJOBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLLLAAEJOBP* Clone()
		{
			return ((::NLLLAAEJOBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 LDBCEEPAELL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_LDBCEEPAELL_OFFSET))(this);
		}

		::System::Void IPFBNDCHFEF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_IPFBNDCHFEF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JCELPHIFMLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_JCELPHIFMLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLLLAAEJOBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLLLAAEJOBP*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLLLAAEJOBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLLLAAEJOBP*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLLLAAEJOBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
