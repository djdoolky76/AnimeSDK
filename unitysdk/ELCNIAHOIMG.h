#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELCNIAHOIMG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELCNIAHOIMG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2CB4D0)
#define ELCNIAHOIMG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB6F0)
#define ELCNIAHOIMG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2CB120)
#define ELCNIAHOIMG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2CB0F0)
#define ELCNIAHOIMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB0E0)
#define ELCNIAHOIMG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2CB250)
#define ELCNIAHOIMG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2CB180)
#define ELCNIAHOIMG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2CB170)
#define ELCNIAHOIMG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2CB3C0)
#define ELCNIAHOIMG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2CB0A0)
#define ELCNIAHOIMG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2CB590)
#define ELCNIAHOIMG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2CB560)
#define ELCNIAHOIMG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2CB160)
#define ELCNIAHOIMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2CB0D0)
#define ELCNIAHOIMG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2CB3F0)
#define ELCNIAHOIMG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2CB450)

inline static constexpr unsigned int ELCNIAHOIMG_TypeDefinitionIndex = 32124;

	class ELCNIAHOIMG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ELCNIAHOIMG")->GetStaticField(0x4FBC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELCNIAHOIMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELCNIAHOIMG*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELCNIAHOIMG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ELCNIAHOIMG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELCNIAHOIMG* Clone()
		{
			return ((::ELCNIAHOIMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELCNIAHOIMG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELCNIAHOIMG*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELCNIAHOIMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELCNIAHOIMG*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELCNIAHOIMG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
