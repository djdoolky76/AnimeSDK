#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPFNJLAONFF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPFNJLAONFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9CBA00)
#define LPFNJLAONFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CBC60)
#define LPFNJLAONFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9CB610)
#define LPFNJLAONFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9CB5D0)
#define LPFNJLAONFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB5C0)
#define LPFNJLAONFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9CB780)
#define LPFNJLAONFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9CB6A0)
#define LPFNJLAONFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9CB860)
#define LPFNJLAONFF_IKBMOHDLJGD_OFFSET UNITYSDK_OFFSET(0x1E9CB690)
#define LPFNJLAONFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9CB580)
#define LPFNJLAONFF_JKCPFFEIMPL_OFFSET UNITYSDK_OFFSET(0x1E9CB660)
#define LPFNJLAONFF_KDOOLLFFFLB_OFFSET UNITYSDK_OFFSET(0x1E9CB670)
#define LPFNJLAONFF_LHKONDIHGHA_OFFSET UNITYSDK_OFFSET(0x1E9CB680)
#define LPFNJLAONFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9CBAE0)
#define LPFNJLAONFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9CBAA0)
#define LPFNJLAONFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB5B0)
#define LPFNJLAONFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9CB890)
#define LPFNJLAONFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9CB8F0)

	class LPFNJLAONFF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PKEKKILJBJF; // 0x18
		::System::Boolean HJLFLLMAOID; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LPFNJLAONFF")->GetStaticField(0x41340);
		}

		// static const ::System::Object ILCHGFLIDAL; // 0x0
		// static const ::System::Object GCKAPDLIGJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPFNJLAONFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPFNJLAONFF*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPFNJLAONFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LPFNJLAONFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPFNJLAONFF* Clone()
		{
			return ((::LPFNJLAONFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_CLONE_OFFSET))(this);
		}

		::System::Boolean JKCPFFEIMPL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_JKCPFFEIMPL_OFFSET))(this);
		}

		::System::Void KDOOLLFFFLB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPFNJLAONFF_KDOOLLFFFLB_OFFSET))(this, a1);
		}

		::System::UInt32 LHKONDIHGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_LHKONDIHGHA_OFFSET))(this);
		}

		::System::Void IKBMOHDLJGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPFNJLAONFF_IKBMOHDLJGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPFNJLAONFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPFNJLAONFF*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFNJLAONFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPFNJLAONFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPFNJLAONFF*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPFNJLAONFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
