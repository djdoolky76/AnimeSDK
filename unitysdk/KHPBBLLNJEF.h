#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHPBBLLNJEF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHPBBLLNJEF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDD8500)
#define KHPBBLLNJEF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDD8720)
#define KHPBBLLNJEF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDD8150)
#define KHPBBLLNJEF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDD8120)
#define KHPBBLLNJEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDD8110)
#define KHPBBLLNJEF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDD8280)
#define KHPBBLLNJEF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDD81B0)
#define KHPBBLLNJEF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDD81A0)
#define KHPBBLLNJEF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDD83F0)
#define KHPBBLLNJEF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDD80D0)
#define KHPBBLLNJEF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDD85C0)
#define KHPBBLLNJEF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDD8590)
#define KHPBBLLNJEF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDD8190)
#define KHPBBLLNJEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDD8100)
#define KHPBBLLNJEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDD8420)
#define KHPBBLLNJEF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDD8480)

inline static constexpr unsigned int KHPBBLLNJEF_TypeDefinitionIndex = 30618;

	class KHPBBLLNJEF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHPBBLLNJEF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHPBBLLNJEF*>**)UnitySDK::FromName("", "KHPBBLLNJEF")->GetStaticField(0x12280);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHPBBLLNJEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPBBLLNJEF*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPBBLLNJEF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHPBBLLNJEF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHPBBLLNJEF*>*(*)())((::PBYTE)hIl2Cpp + KHPBBLLNJEF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHPBBLLNJEF* Clone()
		{
			return ((::KHPBBLLNJEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHPBBLLNJEF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHPBBLLNJEF*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHPBBLLNJEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHPBBLLNJEF*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHPBBLLNJEF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
