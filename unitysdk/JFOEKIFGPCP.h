#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKGPJOBNMKJ;
class JFOEKIFGPCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFOEKIFGPCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E732560)
#define JFOEKIFGPCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7328D0)
#define JFOEKIFGPCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7320A0)
#define JFOEKIFGPCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E732010)
#define JFOEKIFGPCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E731FD0)
#define JFOEKIFGPCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E732250)
#define JFOEKIFGPCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E732100)
#define JFOEKIFGPCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7320E0)
#define JFOEKIFGPCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E732380)
#define JFOEKIFGPCP_JIPCMKANCHC_OFFSET UNITYSDK_OFFSET(0x1E7320F0)
#define JFOEKIFGPCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E731F90)
#define JFOEKIFGPCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E732710)
#define JFOEKIFGPCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E732670)
#define JFOEKIFGPCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7320D0)
#define JFOEKIFGPCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E731FC0)
#define JFOEKIFGPCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7323F0)
#define JFOEKIFGPCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E732450)

inline static constexpr unsigned int JFOEKIFGPCP_TypeDefinitionIndex = 30170;

	class JFOEKIFGPCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BKGPJOBNMKJ*>* LEMGABLDCFF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::BKGPJOBNMKJ*>** StaticGet_DHPCBMCLEAA()
		{
			return (::Google::Protobuf::FieldCodec_1<::BKGPJOBNMKJ*>**)UnitySDK::FromName("", "JFOEKIFGPCP")->GetStaticField(0x601E0);
		}

		static ::Google::Protobuf::MessageParser_1<::JFOEKIFGPCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFOEKIFGPCP*>**)UnitySDK::FromName("", "JFOEKIFGPCP")->GetStaticField(0x601E8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KMKNBNADCAL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFOEKIFGPCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFOEKIFGPCP*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFOEKIFGPCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFOEKIFGPCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFOEKIFGPCP*>*(*)())((::PBYTE)hIl2Cpp + JFOEKIFGPCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFOEKIFGPCP* Clone()
		{
			return ((::JFOEKIFGPCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BKGPJOBNMKJ*>* JIPCMKANCHC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BKGPJOBNMKJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_JIPCMKANCHC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFOEKIFGPCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFOEKIFGPCP*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFOEKIFGPCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFOEKIFGPCP*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFOEKIFGPCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
