#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PAAIMLDHJCI;
class PNMLKLLEEFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNMLKLLEEFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFBEA70)
#define PNMLKLLEEFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBEDF0)
#define PNMLKLLEEFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFBE5B0)
#define PNMLKLLEEFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFBE520)
#define PNMLKLLEEFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE4E0)
#define PNMLKLLEEFE_EJMPJEBBNNL_OFFSET UNITYSDK_OFFSET(0x1DFBE600)
#define PNMLKLLEEFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFBE760)
#define PNMLKLLEEFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFBE610)
#define PNMLKLLEEFE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFBE5F0)
#define PNMLKLLEEFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFBE890)
#define PNMLKLLEEFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFBE4A0)
#define PNMLKLLEEFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFBEC20)
#define PNMLKLLEEFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFBEB80)
#define PNMLKLLEEFE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFBE5E0)
#define PNMLKLLEEFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE4D0)
#define PNMLKLLEEFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFBE900)
#define PNMLKLLEEFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFBE960)

	class PNMLKLLEEFE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PAAIMLDHJCI*>* NFIMOKBPFFF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MAJCDKIPOLF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PNMLKLLEEFE")->GetStaticField(0x51D80);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PNMLKLLEEFE")->GetStaticField(0x51D88);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NHDGEOGGHFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNMLKLLEEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMLKLLEEFE*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNMLKLLEEFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PNMLKLLEEFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNMLKLLEEFE* Clone()
		{
			return ((::PNMLKLLEEFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PAAIMLDHJCI*>* EJMPJEBBNNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PAAIMLDHJCI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_EJMPJEBBNNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNMLKLLEEFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNMLKLLEEFE*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNMLKLLEEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNMLKLLEEFE*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNMLKLLEEFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
