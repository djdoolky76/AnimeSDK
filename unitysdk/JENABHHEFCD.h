#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JENABHHEFCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JENABHHEFCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7200D0)
#define JENABHHEFCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7202F0)
#define JENABHHEFCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E71FD20)
#define JENABHHEFCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E71FCF0)
#define JENABHHEFCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E71FCE0)
#define JENABHHEFCD_DOKCLOPEKLK_OFFSET UNITYSDK_OFFSET(0x1E71FD70)
#define JENABHHEFCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E71FE50)
#define JENABHHEFCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E71FD80)
#define JENABHHEFCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E71FFC0)
#define JENABHHEFCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E71FCA0)
#define JENABHHEFCD_LNACAEMACAD_OFFSET UNITYSDK_OFFSET(0x1E71FD60)
#define JENABHHEFCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E720190)
#define JENABHHEFCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E720160)
#define JENABHHEFCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E71FCD0)
#define JENABHHEFCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E71FFF0)
#define JENABHHEFCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E720050)

	class JENABHHEFCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DJIJMBMGAPB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JENABHHEFCD")->GetStaticField(0x5F350);
		}

		// static const ::System::Object HDEAOOJANDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JENABHHEFCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JENABHHEFCD*))((::PBYTE)hIl2Cpp + JENABHHEFCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENABHHEFCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JENABHHEFCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JENABHHEFCD* Clone()
		{
			return ((::JENABHHEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_CLONE_OFFSET))(this);
		}

		::System::UInt32 LNACAEMACAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_LNACAEMACAD_OFFSET))(this);
		}

		::System::Void DOKCLOPEKLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JENABHHEFCD_DOKCLOPEKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JENABHHEFCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JENABHHEFCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JENABHHEFCD*))((::PBYTE)hIl2Cpp + JENABHHEFCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JENABHHEFCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JENABHHEFCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JENABHHEFCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JENABHHEFCD*))((::PBYTE)hIl2Cpp + JENABHHEFCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JENABHHEFCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
