#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIJPHAAONFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIJPHAAONFB_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1EAC9600)
#define NIJPHAAONFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC9980)
#define NIJPHAAONFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9C50)
#define NIJPHAAONFB_CKPDGGDDPLB_OFFSET UNITYSDK_OFFSET(0x1EAC9620)
#define NIJPHAAONFB_CLKLHEIJMKB_OFFSET UNITYSDK_OFFSET(0x1EAC9610)
#define NIJPHAAONFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC9580)
#define NIJPHAAONFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC9550)
#define NIJPHAAONFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9540)
#define NIJPHAAONFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC9740)
#define NIJPHAAONFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC9630)
#define NIJPHAAONFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC9810)
#define NIJPHAAONFB_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1EAC95F0)
#define NIJPHAAONFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC94D0)
#define NIJPHAAONFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC9AD0)
#define NIJPHAAONFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC9A90)
#define NIJPHAAONFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC9530)
#define NIJPHAAONFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC9840)
#define NIJPHAAONFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC98A0)

inline static constexpr unsigned int NIJPHAAONFB_TypeDefinitionIndex = 30594;

	class NIJPHAAONFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		::System::UInt32 DNAGOBDKKEJ; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::NIJPHAAONFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIJPHAAONFB*>**)UnitySDK::FromName("", "NIJPHAAONFB")->GetStaticField(0x62EA0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object ONCNEMGOHKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIJPHAAONFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIJPHAAONFB*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIJPHAAONFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NIJPHAAONFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIJPHAAONFB*>*(*)())((::PBYTE)hIl2Cpp + NIJPHAAONFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIJPHAAONFB* Clone()
		{
			return ((::NIJPHAAONFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIJPHAAONFB_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 CLKLHEIJMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CLKLHEIJMKB_OFFSET))(this);
		}

		::System::Void CKPDGGDDPLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CKPDGGDDPLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIJPHAAONFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIJPHAAONFB*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJPHAAONFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIJPHAAONFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIJPHAAONFB*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIJPHAAONFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
