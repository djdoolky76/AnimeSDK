#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBFLLAKFFE;
class PKPOJIAJAAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKPOJIAJAAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9AC90)
#define PKPOJIAJAAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9B0A0)
#define PKPOJIAJAAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9A740)
#define PKPOJIAJAAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9A6A0)
#define PKPOJIAJAAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A660)
#define PKPOJIAJAAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9A920)
#define PKPOJIAJAAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9A7C0)
#define PKPOJIAJAAF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF9A780)
#define PKPOJIAJAAF_FGHLENJBCIF_OFFSET UNITYSDK_OFFSET(0x1DF9A790)
#define PKPOJIAJAAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9AA50)
#define PKPOJIAJAAF_ILGNJOHKEGK_OFFSET UNITYSDK_OFFSET(0x1DF9A7A0)
#define PKPOJIAJAAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9A620)
#define PKPOJIAJAAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9AEC0)
#define PKPOJIAJAAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9AE10)
#define PKPOJIAJAAF_NKCHDDJCHAO_OFFSET UNITYSDK_OFFSET(0x1DF9A7B0)
#define PKPOJIAJAAF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF9A770)
#define PKPOJIAJAAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A650)
#define PKPOJIAJAAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9AAC0)
#define PKPOJIAJAAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9AB20)

	class PKPOJIAJAAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BMBFLLAKFFE*>* KLLCOAFMGMM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 IAKOELOMGGG; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_AENICNDKIGK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PKPOJIAJAAF")->GetStaticField(0x4B1B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PKPOJIAJAAF")->GetStaticField(0x4B1B8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object FCMECNGDABK; // 0x0
		// static const ::System::Object CFFBHFGKMPN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKPOJIAJAAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPOJIAJAAF*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKPOJIAJAAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PKPOJIAJAAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKPOJIAJAAF* Clone()
		{
			return ((::PKPOJIAJAAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FGHLENJBCIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_FGHLENJBCIF_OFFSET))(this);
		}

		::System::Void ILGNJOHKEGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_ILGNJOHKEGK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMBFLLAKFFE*>* NKCHDDJCHAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMBFLLAKFFE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_NKCHDDJCHAO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKPOJIAJAAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKPOJIAJAAF*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKPOJIAJAAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPOJIAJAAF*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKPOJIAJAAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
