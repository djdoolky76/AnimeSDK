#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
class EMKANKKOICP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMKANKKOICP_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1F5C83F0)
#define EMKANKKOICP_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1F5C8400)
#define EMKANKKOICP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5C88D0)
#define EMKANKKOICP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5C8D10)
#define EMKANKKOICP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5C8390)
#define EMKANKKOICP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5C82D0)
#define EMKANKKOICP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C8280)
#define EMKANKKOICP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5C8570)
#define EMKANKKOICP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5C8410)
#define EMKANKKOICP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F5C83E0)
#define EMKANKKOICP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5C86A0)
#define EMKANKKOICP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5C8240)
#define EMKANKKOICP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5C8B20)
#define EMKANKKOICP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5C8A70)
#define EMKANKKOICP_MLEOIBHEBMI_OFFSET UNITYSDK_OFFSET(0x1F5C83C0)
#define EMKANKKOICP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F5C83D0)
#define EMKANKKOICP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5C8270)
#define EMKANKKOICP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5C8710)
#define EMKANKKOICP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5C8770)

inline static constexpr unsigned int EMKANKKOICP_TypeDefinitionIndex = 33518;

	class EMKANKKOICP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CABBOOKAODO*>* JIOBCCKNLBC; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::EMKANKKOICP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMKANKKOICP*>**)UnitySDK::FromName("", "EMKANKKOICP")->GetStaticField(0x4D780);
		}

		static ::Google::Protobuf::FieldCodec_1<::CABBOOKAODO*>** StaticGet_CCIGJEEAFEM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CABBOOKAODO*>**)UnitySDK::FromName("", "EMKANKKOICP")->GetStaticField(0x4D788);
		}

		// static const ::System::Object IGNIEJLFFCK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMKANKKOICP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKANKKOICP*))((::PBYTE)hIl2Cpp + EMKANKKOICP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKANKKOICP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMKANKKOICP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMKANKKOICP*>*(*)())((::PBYTE)hIl2Cpp + EMKANKKOICP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMKANKKOICP* Clone()
		{
			return ((::EMKANKKOICP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CABBOOKAODO*>* MLEOIBHEBMI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CABBOOKAODO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_MLEOIBHEBMI_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMKANKKOICP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMKANKKOICP_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMKANKKOICP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMKANKKOICP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMKANKKOICP*))((::PBYTE)hIl2Cpp + EMKANKKOICP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMKANKKOICP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKANKKOICP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMKANKKOICP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMKANKKOICP*))((::PBYTE)hIl2Cpp + EMKANKKOICP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMKANKKOICP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
