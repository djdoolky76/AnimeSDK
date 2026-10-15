#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMAMEFJBCLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMAMEFJBCLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E8E20)
#define DMAMEFJBCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E9040)
#define DMAMEFJBCLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E8A70)
#define DMAMEFJBCLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E8A40)
#define DMAMEFJBCLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E8A30)
#define DMAMEFJBCLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E8BA0)
#define DMAMEFJBCLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E8AD0)
#define DMAMEFJBCLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1E8AC0)
#define DMAMEFJBCLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E8D10)
#define DMAMEFJBCLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E89F0)
#define DMAMEFJBCLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E8EE0)
#define DMAMEFJBCLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E8EB0)
#define DMAMEFJBCLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1E8AB0)
#define DMAMEFJBCLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E8A20)
#define DMAMEFJBCLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E8D40)
#define DMAMEFJBCLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E8DA0)

	class DMAMEFJBCLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMAMEFJBCLE")->GetStaticField(0x3E950);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMAMEFJBCLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMAMEFJBCLE*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMAMEFJBCLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMAMEFJBCLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMAMEFJBCLE* Clone()
		{
			return ((::DMAMEFJBCLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMAMEFJBCLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMAMEFJBCLE*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMAMEFJBCLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMAMEFJBCLE*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMAMEFJBCLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
