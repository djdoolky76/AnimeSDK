#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
class PONEDAONOJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PONEDAONOJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCC5130)
#define PONEDAONOJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCC5480)
#define PONEDAONOJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCC4BE0)
#define PONEDAONOJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCC4B70)
#define PONEDAONOJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCC4B60)
#define PONEDAONOJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCC4E20)
#define PONEDAONOJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCC4CA0)
#define PONEDAONOJI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FCC4C90)
#define PONEDAONOJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCC4FA0)
#define PONEDAONOJI_IJFEDLKDDBE_OFFSET UNITYSDK_OFFSET(0x1FCC4C70)
#define PONEDAONOJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCC4B20)
#define PONEDAONOJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCC52B0)
#define PONEDAONOJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCC5200)
#define PONEDAONOJI_NEHCKMJHBIP_OFFSET UNITYSDK_OFFSET(0x1FCC4C60)
#define PONEDAONOJI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FCC4C80)
#define PONEDAONOJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCC4B50)
#define PONEDAONOJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCC4FF0)
#define PONEDAONOJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCC5050)

inline static constexpr unsigned int PONEDAONOJI_TypeDefinitionIndex = 35269;

	class PONEDAONOJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ENHOPAHGCMA* PKBJKBGPIEL; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PONEDAONOJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PONEDAONOJI*>**)UnitySDK::FromName("", "PONEDAONOJI")->GetStaticField(0x507C0);
		}

		// static const ::System::Object DLELDGKBCOC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PONEDAONOJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PONEDAONOJI*))((::PBYTE)hIl2Cpp + PONEDAONOJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PONEDAONOJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PONEDAONOJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PONEDAONOJI*>*(*)())((::PBYTE)hIl2Cpp + PONEDAONOJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PONEDAONOJI* Clone()
		{
			return ((::PONEDAONOJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_CLONE_OFFSET))(this);
		}

		::ENHOPAHGCMA* NEHCKMJHBIP()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_NEHCKMJHBIP_OFFSET))(this);
		}

		::System::Void IJFEDLKDDBE(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + PONEDAONOJI_IJFEDLKDDBE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PONEDAONOJI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PONEDAONOJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PONEDAONOJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PONEDAONOJI*))((::PBYTE)hIl2Cpp + PONEDAONOJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PONEDAONOJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PONEDAONOJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PONEDAONOJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PONEDAONOJI*))((::PBYTE)hIl2Cpp + PONEDAONOJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PONEDAONOJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
