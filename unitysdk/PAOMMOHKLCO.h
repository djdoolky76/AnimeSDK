#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAGBNGJFCMG;
class PAOMMOHKLCO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PAOMMOHKLCO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEF2720)
#define PAOMMOHKLCO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2BA0)
#define PAOMMOHKLCO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEF21F0)
#define PAOMMOHKLCO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEF2150)
#define PAOMMOHKLCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2110)
#define PAOMMOHKLCO_EHEPKECPKFL_OFFSET UNITYSDK_OFFSET(0x1DEF2220)
#define PAOMMOHKLCO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEF23D0)
#define PAOMMOHKLCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEF2270)
#define PAOMMOHKLCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEF2500)
#define PAOMMOHKLCO_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1DEF2260)
#define PAOMMOHKLCO_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1DEF2250)
#define PAOMMOHKLCO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEF20D0)
#define PAOMMOHKLCO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF29C0)
#define PAOMMOHKLCO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF2910)
#define PAOMMOHKLCO_OIFCKGODKON_OFFSET UNITYSDK_OFFSET(0x1DEF2240)
#define PAOMMOHKLCO_OPFINOFMACO_OFFSET UNITYSDK_OFFSET(0x1DEF2230)
#define PAOMMOHKLCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEF2100)
#define PAOMMOHKLCO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEF2580)
#define PAOMMOHKLCO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEF25E0)

	class PAOMMOHKLCO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>* BDNMIHJHJHF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MIJMCFOKJCH; // 0x20
		::System::Byte _padding0[0x4];
		::System::UInt64 JEHBHEOHGLN; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_CMBNFCPMEDK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PAOMMOHKLCO")->GetStaticField(0x32BE0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PAOMMOHKLCO")->GetStaticField(0x32BE8);
		}

		// static const ::System::Object BNOLPINGBKL; // 0x0
		// static const ::System::Object ELMGEBCLLFP; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PAOMMOHKLCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAOMMOHKLCO*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PAOMMOHKLCO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PAOMMOHKLCO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PAOMMOHKLCO* Clone()
		{
			return ((::PAOMMOHKLCO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>* EHEPKECPKFL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DAGBNGJFCMG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_EHEPKECPKFL_OFFSET))(this);
		}

		::System::UInt32 OPFINOFMACO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_OPFINOFMACO_OFFSET))(this);
		}

		::System::Void OIFCKGODKON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_OIFCKGODKON_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PAOMMOHKLCO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PAOMMOHKLCO*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PAOMMOHKLCO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAOMMOHKLCO*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PAOMMOHKLCO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
