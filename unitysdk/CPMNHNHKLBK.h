#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPMNHNHKLBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPMNHNHKLBK_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E144980)
#define CPMNHNHKLBK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E144D10)
#define CPMNHNHKLBK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E144F30)
#define CPMNHNHKLBK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E144900)
#define CPMNHNHKLBK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1448D0)
#define CPMNHNHKLBK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1448C0)
#define CPMNHNHKLBK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E144A90)
#define CPMNHNHKLBK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E144990)
#define CPMNHNHKLBK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E144C00)
#define CPMNHNHKLBK_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E144970)
#define CPMNHNHKLBK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E144850)
#define CPMNHNHKLBK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E144DD0)
#define CPMNHNHKLBK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E144DA0)
#define CPMNHNHKLBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1448B0)
#define CPMNHNHKLBK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E144C30)
#define CPMNHNHKLBK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E144C90)

	class CPMNHNHKLBK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPMNHNHKLBK")->GetStaticField(0x22F10);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPMNHNHKLBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPMNHNHKLBK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPMNHNHKLBK* Clone()
		{
			return ((::CPMNHNHKLBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPMNHNHKLBK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPMNHNHKLBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMNHNHKLBK*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPMNHNHKLBK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
