#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPLJJHFFODO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPLJJHFFODO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D8EA0)
#define JPLJJHFFODO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9170)
#define JPLJJHFFODO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D8AA0)
#define JPLJJHFFODO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D8A70)
#define JPLJJHFFODO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D8A60)
#define JPLJJHFFODO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D8C60)
#define JPLJJHFFODO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D8B50)
#define JPLJJHFFODO_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E7D8B30)
#define JPLJJHFFODO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D8D30)
#define JPLJJHFFODO_IMGJKLCIGEL_OFFSET UNITYSDK_OFFSET(0x1E7D8B10)
#define JPLJJHFFODO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D89F0)
#define JPLJJHFFODO_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E7D8B40)
#define JPLJJHFFODO_MDGCDKHDKEB_OFFSET UNITYSDK_OFFSET(0x1E7D8B20)
#define JPLJJHFFODO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D8FF0)
#define JPLJJHFFODO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D8FB0)
#define JPLJJHFFODO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D8A50)
#define JPLJJHFFODO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D8D60)
#define JPLJJHFFODO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D8DC0)

inline static constexpr unsigned int JPLJJHFFODO_TypeDefinitionIndex = 28076;

	class JPLJJHFFODO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 ONPFGKIELHM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JPLJJHFFODO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPLJJHFFODO*>**)UnitySDK::FromName("", "JPLJJHFFODO")->GetStaticField(0xC3A0);
		}

		// static const ::System::Object NDBLLNDJADG; // 0x0
		// static const ::System::Object EAEDBOGGHCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPLJJHFFODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPLJJHFFODO*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPLJJHFFODO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPLJJHFFODO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPLJJHFFODO*>*(*)())((::PBYTE)hIl2Cpp + JPLJJHFFODO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPLJJHFFODO* Clone()
		{
			return ((::JPLJJHFFODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_CLONE_OFFSET))(this);
		}

		::System::UInt32 IMGJKLCIGEL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_IMGJKLCIGEL_OFFSET))(this);
		}

		::System::Void MDGCDKHDKEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPLJJHFFODO_MDGCDKHDKEB_OFFSET))(this, a1);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPLJJHFFODO_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPLJJHFFODO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPLJJHFFODO*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPLJJHFFODO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPLJJHFFODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPLJJHFFODO*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPLJJHFFODO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
