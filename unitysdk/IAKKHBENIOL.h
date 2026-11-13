#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAKKHBENIOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IAKKHBENIOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203A0F50)
#define IAKKHBENIOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x203A1170)
#define IAKKHBENIOL_CLONE_OFFSET UNITYSDK_OFFSET(0x203A0BA0)
#define IAKKHBENIOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203A0B70)
#define IAKKHBENIOL_CTOR_OFFSET UNITYSDK_OFFSET(0x203A0B60)
#define IAKKHBENIOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203A0CD0)
#define IAKKHBENIOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x203A0C00)
#define IAKKHBENIOL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203A0BF0)
#define IAKKHBENIOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203A0E40)
#define IAKKHBENIOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203A0B20)
#define IAKKHBENIOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203A1010)
#define IAKKHBENIOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203A0FE0)
#define IAKKHBENIOL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x203A0BE0)
#define IAKKHBENIOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203A0B50)
#define IAKKHBENIOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203A0E70)
#define IAKKHBENIOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x203A0ED0)

inline static constexpr unsigned int IAKKHBENIOL_TypeDefinitionIndex = 27160;

	class IAKKHBENIOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IAKKHBENIOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IAKKHBENIOL*>**)UnitySDK::FromName("", "IAKKHBENIOL")->GetStaticField(0x43100);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IAKKHBENIOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAKKHBENIOL*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IAKKHBENIOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IAKKHBENIOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IAKKHBENIOL*>*(*)())((::PBYTE)hIl2Cpp + IAKKHBENIOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IAKKHBENIOL* Clone()
		{
			return ((::IAKKHBENIOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAKKHBENIOL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IAKKHBENIOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IAKKHBENIOL*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAKKHBENIOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IAKKHBENIOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAKKHBENIOL*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IAKKHBENIOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
