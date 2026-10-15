#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACGBGKFFAOL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACGBGKFFAOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDDB990)
#define ACGBGKFFAOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDBBB0)
#define ACGBGKFFAOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDDB5E0)
#define ACGBGKFFAOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDDB5B0)
#define ACGBGKFFAOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB5A0)
#define ACGBGKFFAOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDDB710)
#define ACGBGKFFAOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDDB640)
#define ACGBGKFFAOL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDDB630)
#define ACGBGKFFAOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDDB880)
#define ACGBGKFFAOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDDB560)
#define ACGBGKFFAOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDDBA50)
#define ACGBGKFFAOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDDBA20)
#define ACGBGKFFAOL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDDB620)
#define ACGBGKFFAOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDDB590)
#define ACGBGKFFAOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDDB8B0)
#define ACGBGKFFAOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDDB910)

inline static constexpr unsigned int ACGBGKFFAOL_TypeDefinitionIndex = 30314;

	class ACGBGKFFAOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACGBGKFFAOL")->GetStaticField(0x2B260);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACGBGKFFAOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGBGKFFAOL*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACGBGKFFAOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACGBGKFFAOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACGBGKFFAOL* Clone()
		{
			return ((::ACGBGKFFAOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACGBGKFFAOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACGBGKFFAOL*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACGBGKFFAOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACGBGKFFAOL*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACGBGKFFAOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
