#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKEDFNJJGHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKEDFNJJGHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE93370)
#define OKEDFNJJGHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE93590)
#define OKEDFNJJGHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE92FC0)
#define OKEDFNJJGHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE92F90)
#define OKEDFNJJGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE92F80)
#define OKEDFNJJGHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE930F0)
#define OKEDFNJJGHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE93020)
#define OKEDFNJJGHB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE93010)
#define OKEDFNJJGHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE93260)
#define OKEDFNJJGHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE92F40)
#define OKEDFNJJGHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE93430)
#define OKEDFNJJGHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE93400)
#define OKEDFNJJGHB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE93000)
#define OKEDFNJJGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE92F70)
#define OKEDFNJJGHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE93290)
#define OKEDFNJJGHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE932F0)

inline static constexpr unsigned int OKEDFNJJGHB_TypeDefinitionIndex = 26955;

	class OKEDFNJJGHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKEDFNJJGHB")->GetStaticField(0x21040);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKEDFNJJGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKEDFNJJGHB*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKEDFNJJGHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKEDFNJJGHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKEDFNJJGHB* Clone()
		{
			return ((::OKEDFNJJGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKEDFNJJGHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKEDFNJJGHB*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKEDFNJJGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKEDFNJJGHB*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKEDFNJJGHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
