#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCFKMMCAFKA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCFKMMCAFKA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8A5B30)
#define FCFKMMCAFKA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8A5DD0)
#define FCFKMMCAFKA_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8A56A0)
#define FCFKMMCAFKA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8A5600)
#define FCFKMMCAFKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A55B0)
#define FCFKMMCAFKA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8A57A0)
#define FCFKMMCAFKA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8A5720)
#define FCFKMMCAFKA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F8A56E0)
#define FCFKMMCAFKA_FPNMNBPECPL_OFFSET UNITYSDK_OFFSET(0x1F8A5710)
#define FCFKMMCAFKA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8A58A0)
#define FCFKMMCAFKA_GNKECPCFJOO_OFFSET UNITYSDK_OFFSET(0x1F8A5700)
#define FCFKMMCAFKA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8A5570)
#define FCFKMMCAFKA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8A5D00)
#define FCFKMMCAFKA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8A5CA0)
#define FCFKMMCAFKA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F8A56D0)
#define FCFKMMCAFKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8A55A0)
#define FCFKMMCAFKA_PNCJFOIAGAP_OFFSET UNITYSDK_OFFSET(0x1F8A56F0)
#define FCFKMMCAFKA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8A59A0)
#define FCFKMMCAFKA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8A5A00)

inline static constexpr unsigned int FCFKMMCAFKA_TypeDefinitionIndex = 32373;

	class FCFKMMCAFKA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGPEFPCLMAA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MGIDMFIPDHE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FCFKMMCAFKA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCFKMMCAFKA*>**)UnitySDK::FromName("", "FCFKMMCAFKA")->GetStaticField(0x43500);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OANECFBDLAL()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FCFKMMCAFKA")->GetStaticField(0x43508);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AIHMFAABICO; // 0x0
		// static const ::System::Object LMLEBMGFKJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCFKMMCAFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCFKMMCAFKA*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCFKMMCAFKA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCFKMMCAFKA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCFKMMCAFKA*>*(*)())((::PBYTE)hIl2Cpp + FCFKMMCAFKA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCFKMMCAFKA* Clone()
		{
			return ((::FCFKMMCAFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNCJFOIAGAP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_PNCJFOIAGAP_OFFSET))(this);
		}

		::System::UInt32 GNKECPCFJOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_GNKECPCFJOO_OFFSET))(this);
		}

		::System::Void FPNMNBPECPL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_FPNMNBPECPL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCFKMMCAFKA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCFKMMCAFKA*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCFKMMCAFKA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCFKMMCAFKA*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCFKMMCAFKA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
