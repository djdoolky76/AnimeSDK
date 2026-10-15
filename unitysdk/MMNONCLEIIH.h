#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CJLFDFFBOHM.h"
#include "unitysdk/System/Object.h"
class MMNONCLEIIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMNONCLEIIH_BHCGNNPIAJG_OFFSET UNITYSDK_OFFSET(0x1EA8ED80)
#define MMNONCLEIIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8F0D0)
#define MMNONCLEIIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F3E0)
#define MMNONCLEIIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8ED10)
#define MMNONCLEIIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8ECE0)
#define MMNONCLEIIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8ECD0)
#define MMNONCLEIIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8EE80)
#define MMNONCLEIIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8EDA0)
#define MMNONCLEIIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8EF50)
#define MMNONCLEIIH_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1EA8ED60)
#define MMNONCLEIIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8EC90)
#define MMNONCLEIIH_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1EA8ED70)
#define MMNONCLEIIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8F260)
#define MMNONCLEIIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8F220)
#define MMNONCLEIIH_OLFFAPLBHMG_OFFSET UNITYSDK_OFFSET(0x1EA8ED90)
#define MMNONCLEIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8ECC0)
#define MMNONCLEIIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8EF80)
#define MMNONCLEIIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8EFE0)

inline static constexpr unsigned int MMNONCLEIIH_TypeDefinitionIndex = 33990;

	class MMNONCLEIIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		::CJLFDFFBOHM LLNJDFDFMDM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MMNONCLEIIH")->GetStaticField(0x59160);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object OFAPNMPMGIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMNONCLEIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNONCLEIIH*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMNONCLEIIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MMNONCLEIIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMNONCLEIIH* Clone()
		{
			return ((::MMNONCLEIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMNONCLEIIH_KAADEPADNMH_OFFSET))(this, a1);
		}

		::CJLFDFFBOHM BHCGNNPIAJG()
		{
			return ((::CJLFDFFBOHM(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_BHCGNNPIAJG_OFFSET))(this);
		}

		::System::Void OLFFAPLBHMG(::CJLFDFFBOHM a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJLFDFFBOHM))((::PBYTE)hIl2Cpp + MMNONCLEIIH_OLFFAPLBHMG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMNONCLEIIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMNONCLEIIH*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMNONCLEIIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMNONCLEIIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMNONCLEIIH*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMNONCLEIIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
