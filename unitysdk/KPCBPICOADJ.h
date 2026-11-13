#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPCBPICOADJ;
class OHLGEHNPAAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPCBPICOADJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205B66A0)
#define KPCBPICOADJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x205B6A40)
#define KPCBPICOADJ_CLONE_OFFSET UNITYSDK_OFFSET(0x205B61F0)
#define KPCBPICOADJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205B6160)
#define KPCBPICOADJ_CTOR_OFFSET UNITYSDK_OFFSET(0x205B6120)
#define KPCBPICOADJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205B63A0)
#define KPCBPICOADJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x205B6250)
#define KPCBPICOADJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205B6240)
#define KPCBPICOADJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205B64C0)
#define KPCBPICOADJ_JGIMDIMNIOJ_OFFSET UNITYSDK_OFFSET(0x205B6220)
#define KPCBPICOADJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205B60E0)
#define KPCBPICOADJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205B6870)
#define KPCBPICOADJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205B67D0)
#define KPCBPICOADJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205B6230)
#define KPCBPICOADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205B6110)
#define KPCBPICOADJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205B6530)
#define KPCBPICOADJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x205B6590)

inline static constexpr unsigned int KPCBPICOADJ_TypeDefinitionIndex = 31822;

	class KPCBPICOADJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>* EFINHGBIHCM; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::OHLGEHNPAAL*>** StaticGet_BMJAEIGGFCK()
		{
			return (::Google::Protobuf::FieldCodec_1<::OHLGEHNPAAL*>**)UnitySDK::FromName("", "KPCBPICOADJ")->GetStaticField(0x21900);
		}

		static ::Google::Protobuf::MessageParser_1<::KPCBPICOADJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPCBPICOADJ*>**)UnitySDK::FromName("", "KPCBPICOADJ")->GetStaticField(0x21908);
		}

		// static const ::System::Object KIDAAPMDPMB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPCBPICOADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCBPICOADJ*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPCBPICOADJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPCBPICOADJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPCBPICOADJ*>*(*)())((::PBYTE)hIl2Cpp + KPCBPICOADJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPCBPICOADJ* Clone()
		{
			return ((::KPCBPICOADJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>* JGIMDIMNIOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OHLGEHNPAAL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_JGIMDIMNIOJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPCBPICOADJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPCBPICOADJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPCBPICOADJ*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPCBPICOADJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPCBPICOADJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCBPICOADJ*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPCBPICOADJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
