#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEPEHIDAKKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEPEHIDAKKK_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF1FC70)
#define PEPEHIDAKKK_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF1FC80)
#define PEPEHIDAKKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1FFE0)
#define PEPEHIDAKKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF202B0)
#define PEPEHIDAKKK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1FBE0)
#define PEPEHIDAKKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1FBB0)
#define PEPEHIDAKKK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1FBA0)
#define PEPEHIDAKKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1FDA0)
#define PEPEHIDAKKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1FC90)
#define PEPEHIDAKKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1FE70)
#define PEPEHIDAKKK_GMAGGLNKKBH_OFFSET UNITYSDK_OFFSET(0x1DF1FC60)
#define PEPEHIDAKKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1FB30)
#define PEPEHIDAKKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF20130)
#define PEPEHIDAKKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF200F0)
#define PEPEHIDAKKK_NJIMLDBEMDF_OFFSET UNITYSDK_OFFSET(0x1DF1FC50)
#define PEPEHIDAKKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1FB90)
#define PEPEHIDAKKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1FEA0)
#define PEPEHIDAKKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1FF00)

	class PEPEHIDAKKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 BJOPBOJDLKF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEPEHIDAKKK")->GetStaticField(0x147A0);
		}

		// static const ::System::Object JHKLNNEKHMN; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEPEHIDAKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPEHIDAKKK*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEPEHIDAKKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEPEHIDAKKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEPEHIDAKKK* Clone()
		{
			return ((::PEPEHIDAKKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 NJIMLDBEMDF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_NJIMLDBEMDF_OFFSET))(this);
		}

		::System::Void GMAGGLNKKBH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_GMAGGLNKKBH_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEPEHIDAKKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEPEHIDAKKK*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEPEHIDAKKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEPEHIDAKKK*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEPEHIDAKKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
