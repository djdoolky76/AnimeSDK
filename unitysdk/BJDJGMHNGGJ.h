#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJDJGMHNGGJ;
class OMNDOECFBEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJDJGMHNGGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE07AF0)
#define BJDJGMHNGGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE07E60)
#define BJDJGMHNGGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE07640)
#define BJDJGMHNGGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE075B0)
#define BJDJGMHNGGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE07570)
#define BJDJGMHNGGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE077F0)
#define BJDJGMHNGGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE076A0)
#define BJDJGMHNGGJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE07680)
#define BJDJGMHNGGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE07920)
#define BJDJGMHNGGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE07530)
#define BJDJGMHNGGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE07CA0)
#define BJDJGMHNGGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE07C00)
#define BJDJGMHNGGJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE07670)
#define BJDJGMHNGGJ_OIGKCPKLCHI_OFFSET UNITYSDK_OFFSET(0x1DE07690)
#define BJDJGMHNGGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE07560)
#define BJDJGMHNGGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE07990)
#define BJDJGMHNGGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE079F0)

	class BJDJGMHNGGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OMNDOECFBEA*>* DBHBGABLOFO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_GGBLNBHJNJC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BJDJGMHNGGJ")->GetStaticField(0x48E30);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BJDJGMHNGGJ")->GetStaticField(0x48E38);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KCPCCIAJEMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJDJGMHNGGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJDJGMHNGGJ*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJDJGMHNGGJ* Clone()
		{
			return ((::BJDJGMHNGGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OMNDOECFBEA*>* OIGKCPKLCHI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OMNDOECFBEA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_OIGKCPKLCHI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJDJGMHNGGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJDJGMHNGGJ*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJDJGMHNGGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJDJGMHNGGJ*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJDJGMHNGGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
