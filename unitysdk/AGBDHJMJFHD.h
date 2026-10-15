#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBDHJMJFHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGBDHJMJFHD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E126E00)
#define AGBDHJMJFHD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E127020)
#define AGBDHJMJFHD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E126A50)
#define AGBDHJMJFHD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E126A20)
#define AGBDHJMJFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E126A10)
#define AGBDHJMJFHD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E126B80)
#define AGBDHJMJFHD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E126AB0)
#define AGBDHJMJFHD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E126AA0)
#define AGBDHJMJFHD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E126CF0)
#define AGBDHJMJFHD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1269D0)
#define AGBDHJMJFHD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E126EC0)
#define AGBDHJMJFHD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E126E90)
#define AGBDHJMJFHD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E126A90)
#define AGBDHJMJFHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E126A00)
#define AGBDHJMJFHD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E126D20)
#define AGBDHJMJFHD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E126D80)

inline static constexpr unsigned int AGBDHJMJFHD_TypeDefinitionIndex = 28849;

	class AGBDHJMJFHD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AGBDHJMJFHD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGBDHJMJFHD*>**)UnitySDK::FromName("", "AGBDHJMJFHD")->GetStaticField(0x2FF10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGBDHJMJFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBDHJMJFHD*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBDHJMJFHD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGBDHJMJFHD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGBDHJMJFHD*>*(*)())((::PBYTE)hIl2Cpp + AGBDHJMJFHD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGBDHJMJFHD* Clone()
		{
			return ((::AGBDHJMJFHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGBDHJMJFHD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGBDHJMJFHD*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGBDHJMJFHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBDHJMJFHD*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGBDHJMJFHD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
