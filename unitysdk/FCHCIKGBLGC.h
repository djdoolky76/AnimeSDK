#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCHCIKGBLGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCHCIKGBLGC_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1E319CA0)
#define FCHCIKGBLGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E31A150)
#define FCHCIKGBLGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E31A4F0)
#define FCHCIKGBLGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E319BD0)
#define FCHCIKGBLGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E319B80)
#define FCHCIKGBLGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E319B70)
#define FCHCIKGBLGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E319DE0)
#define FCHCIKGBLGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E319CD0)
#define FCHCIKGBLGC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E319CC0)
#define FCHCIKGBLGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E319EF0)
#define FCHCIKGBLGC_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1E319C90)
#define FCHCIKGBLGC_HABCMACJEIN_OFFSET UNITYSDK_OFFSET(0x1E319C40)
#define FCHCIKGBLGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E319B30)
#define FCHCIKGBLGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E31A320)
#define FCHCIKGBLGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E31A2C0)
#define FCHCIKGBLGC_MLMGEFIOION_OFFSET UNITYSDK_OFFSET(0x1E319C30)
#define FCHCIKGBLGC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E319CB0)
#define FCHCIKGBLGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E319B60)
#define FCHCIKGBLGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E319FB0)
#define FCHCIKGBLGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E31A010)

inline static constexpr unsigned int FCHCIKGBLGC_TypeDefinitionIndex = 33744;

	class FCHCIKGBLGC : public ::System::Object
	{
	public:
		::System::String* IOGCODPGEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MDHELICKNPE; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FCHCIKGBLGC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCHCIKGBLGC*>**)UnitySDK::FromName("", "FCHCIKGBLGC")->GetStaticField(0x51060);
		}

		// static const ::System::Object OLMIFJKILJG; // 0x0
		// static const ::System::Object HLKDEGJOKIO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCHCIKGBLGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHCIKGBLGC*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCHCIKGBLGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCHCIKGBLGC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCHCIKGBLGC*>*(*)())((::PBYTE)hIl2Cpp + FCHCIKGBLGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCHCIKGBLGC* Clone()
		{
			return ((::FCHCIKGBLGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_CLONE_OFFSET))(this);
		}

		::System::String* MLMGEFIOION()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_MLMGEFIOION_OFFSET))(this);
		}

		::System::Void HABCMACJEIN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_HABCMACJEIN_OFFSET))(this, a1);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCHCIKGBLGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCHCIKGBLGC*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCHCIKGBLGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCHCIKGBLGC*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCHCIKGBLGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
