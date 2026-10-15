#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNGLCIGBNGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNGLCIGBNGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5DD8F0)
#define HNGLCIGBNGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5DDB80)
#define HNGLCIGBNGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5DD510)
#define HNGLCIGBNGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5DD4E0)
#define HNGLCIGBNGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD4D0)
#define HNGLCIGBNGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5DD650)
#define HNGLCIGBNGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5DD580)
#define HNGLCIGBNGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5DD7C0)
#define HNGLCIGBNGB_HOMDOPBDPHK_OFFSET UNITYSDK_OFFSET(0x1E5DD570)
#define HNGLCIGBNGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5DD490)
#define HNGLCIGBNGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5DDA20)
#define HNGLCIGBNGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5DD9E0)
#define HNGLCIGBNGB_NMJMLBDGLHB_OFFSET UNITYSDK_OFFSET(0x1E5DD560)
#define HNGLCIGBNGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5DD4C0)
#define HNGLCIGBNGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5DD800)
#define HNGLCIGBNGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5DD860)

inline static constexpr unsigned int HNGLCIGBNGB_TypeDefinitionIndex = 34011;

	class HNGLCIGBNGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 EIIPHHAJCHO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HNGLCIGBNGB")->GetStaticField(0x4BC10);
		}

		// static const ::System::Object NGOBEHFKJHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNGLCIGBNGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNGLCIGBNGB*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNGLCIGBNGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HNGLCIGBNGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNGLCIGBNGB* Clone()
		{
			return ((::HNGLCIGBNGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_CLONE_OFFSET))(this);
		}

		::System::Int64 NMJMLBDGLHB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_NMJMLBDGLHB_OFFSET))(this);
		}

		::System::Void HOMDOPBDPHK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_HOMDOPBDPHK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNGLCIGBNGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNGLCIGBNGB*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNGLCIGBNGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNGLCIGBNGB*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNGLCIGBNGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
