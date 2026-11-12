#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHONLLCHIFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OHONLLCHIFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F10F210)
#define OHONLLCHIFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F10F430)
#define OHONLLCHIFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F10EE60)
#define OHONLLCHIFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F10EE30)
#define OHONLLCHIFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F10EE20)
#define OHONLLCHIFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F10EF90)
#define OHONLLCHIFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F10EEC0)
#define OHONLLCHIFJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F10EEB0)
#define OHONLLCHIFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F10F100)
#define OHONLLCHIFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F10EDE0)
#define OHONLLCHIFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F10F2D0)
#define OHONLLCHIFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F10F2A0)
#define OHONLLCHIFJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F10EEA0)
#define OHONLLCHIFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F10EE10)
#define OHONLLCHIFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F10F130)
#define OHONLLCHIFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F10F190)

inline static constexpr unsigned int OHONLLCHIFJ_TypeDefinitionIndex = 34486;

	class OHONLLCHIFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OHONLLCHIFJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OHONLLCHIFJ*>**)UnitySDK::FromName("", "OHONLLCHIFJ")->GetStaticField(0x16650);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OHONLLCHIFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHONLLCHIFJ*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHONLLCHIFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OHONLLCHIFJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OHONLLCHIFJ*>*(*)())((::PBYTE)hIl2Cpp + OHONLLCHIFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OHONLLCHIFJ* Clone()
		{
			return ((::OHONLLCHIFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OHONLLCHIFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OHONLLCHIFJ*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OHONLLCHIFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OHONLLCHIFJ*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OHONLLCHIFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
