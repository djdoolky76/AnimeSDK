#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJGBAAOPAOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NJGBAAOPAOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD3E60)
#define NJGBAAOPAOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD4130)
#define NJGBAAOPAOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD3A60)
#define NJGBAAOPAOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD3A30)
#define NJGBAAOPAOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD3A20)
#define NJGBAAOPAOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD3C20)
#define NJGBAAOPAOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD3B10)
#define NJGBAAOPAOI_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1EAD3AD0)
#define NJGBAAOPAOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD3CF0)
#define NJGBAAOPAOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD39B0)
#define NJGBAAOPAOI_MAEOEFHFLLA_OFFSET UNITYSDK_OFFSET(0x1EAD3AF0)
#define NJGBAAOPAOI_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1EAD3AE0)
#define NJGBAAOPAOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD3FB0)
#define NJGBAAOPAOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD3F70)
#define NJGBAAOPAOI_OMIEIJKJLOJ_OFFSET UNITYSDK_OFFSET(0x1EAD3B00)
#define NJGBAAOPAOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD3A10)
#define NJGBAAOPAOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD3D20)
#define NJGBAAOPAOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD3D80)

inline static constexpr unsigned int NJGBAAOPAOI_TypeDefinitionIndex = 29784;

	class NJGBAAOPAOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 OMDOBBBCOBN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NJGBAAOPAOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NJGBAAOPAOI*>**)UnitySDK::FromName("", "NJGBAAOPAOI")->GetStaticField(0x588B0);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object DEJBANICHDF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NJGBAAOPAOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJGBAAOPAOI*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJGBAAOPAOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NJGBAAOPAOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NJGBAAOPAOI*>*(*)())((::PBYTE)hIl2Cpp + NJGBAAOPAOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NJGBAAOPAOI* Clone()
		{
			return ((::NJGBAAOPAOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 MAEOEFHFLLA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_MAEOEFHFLLA_OFFSET))(this);
		}

		::System::Void OMIEIJKJLOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_OMIEIJKJLOJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NJGBAAOPAOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NJGBAAOPAOI*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NJGBAAOPAOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJGBAAOPAOI*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NJGBAAOPAOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
