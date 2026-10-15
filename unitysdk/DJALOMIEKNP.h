#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDCCPHILOCC;
class DJALOMIEKNP;
class FGFGINEFBBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJALOMIEKNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C52A0)
#define DJALOMIEKNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C5740)
#define DJALOMIEKNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C4E80)
#define DJALOMIEKNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C4D70)
#define DJALOMIEKNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C4D00)
#define DJALOMIEKNP_EFIFICGHNMJ_OFFSET UNITYSDK_OFFSET(0x1E1C4EB0)
#define DJALOMIEKNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C4F20)
#define DJALOMIEKNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C4EF0)
#define DJALOMIEKNP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1C4EE0)
#define DJALOMIEKNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C5070)
#define DJALOMIEKNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C4CC0)
#define DJALOMIEKNP_KBKHGBNMMEC_OFFSET UNITYSDK_OFFSET(0x1E1C4EC0)
#define DJALOMIEKNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C5510)
#define DJALOMIEKNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C5400)
#define DJALOMIEKNP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1C4ED0)
#define DJALOMIEKNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C4CF0)
#define DJALOMIEKNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C5100)
#define DJALOMIEKNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C5160)

	class DJALOMIEKNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* GFMLFMHIPGK; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>* JPIGHANDECG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x36E50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AIAFFAPJAAC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x36E58);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NOOIIDLHMPH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DJALOMIEKNP")->GetStaticField(0x36E60);
		}

		// static const ::System::Object IJEHLKNDMCO; // 0x0
		// static const ::System::Object EBCAIGBNCLL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJALOMIEKNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJALOMIEKNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJALOMIEKNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJALOMIEKNP* Clone()
		{
			return ((::DJALOMIEKNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>* EFIFICGHNMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CDCCPHILOCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EFIFICGHNMJ_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>* KBKHGBNMMEC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FGFGINEFBBK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_KBKHGBNMMEC_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJALOMIEKNP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJALOMIEKNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJALOMIEKNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJALOMIEKNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJALOMIEKNP*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJALOMIEKNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
