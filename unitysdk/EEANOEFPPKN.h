#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEANOEFPPKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEANOEFPPKN_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E264BD0)
#define EEANOEFPPKN_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E264BE0)
#define EEANOEFPPKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E264F10)
#define EEANOEFPPKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2651E0)
#define EEANOEFPPKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E264B60)
#define EEANOEFPPKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E264B30)
#define EEANOEFPPKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E264B20)
#define EEANOEFPPKN_DANEAEBNFDH_OFFSET UNITYSDK_OFFSET(0x1E264BC0)
#define EEANOEFPPKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E264CD0)
#define EEANOEFPPKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E264BF0)
#define EEANOEFPPKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E264DA0)
#define EEANOEFPPKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E264AE0)
#define EEANOEFPPKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E265060)
#define EEANOEFPPKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E265020)
#define EEANOEFPPKN_OINPICOLNKD_OFFSET UNITYSDK_OFFSET(0x1E264BB0)
#define EEANOEFPPKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E264B10)
#define EEANOEFPPKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E264DD0)
#define EEANOEFPPKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E264E30)

inline static constexpr unsigned int EEANOEFPPKN_TypeDefinitionIndex = 31900;

	class EEANOEFPPKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 HBEJPFMACNJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EEANOEFPPKN")->GetStaticField(0x41150);
		}

		// static const ::System::Object LDHNEMHEJLL; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEANOEFPPKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEANOEFPPKN*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEANOEFPPKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EEANOEFPPKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEANOEFPPKN* Clone()
		{
			return ((::EEANOEFPPKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OINPICOLNKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_OINPICOLNKD_OFFSET))(this);
		}

		::System::Void DANEAEBNFDH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEANOEFPPKN_DANEAEBNFDH_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEANOEFPPKN_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEANOEFPPKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEANOEFPPKN*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANOEFPPKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEANOEFPPKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEANOEFPPKN*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEANOEFPPKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
