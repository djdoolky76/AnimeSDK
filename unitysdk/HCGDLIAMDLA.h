#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGDLIAMDLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HCGDLIAMDLA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E53CB10)
#define HCGDLIAMDLA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E53CB20)
#define HCGDLIAMDLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E53CE80)
#define HCGDLIAMDLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53D200)
#define HCGDLIAMDLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E53CA90)
#define HCGDLIAMDLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E53CA50)
#define HCGDLIAMDLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53CA40)
#define HCGDLIAMDLA_DANEAEBNFDH_OFFSET UNITYSDK_OFFSET(0x1E53CB60)
#define HCGDLIAMDLA_DFKDHGDLDPJ_OFFSET UNITYSDK_OFFSET(0x1E53CB30)
#define HCGDLIAMDLA_DMMFMBIIIDP_OFFSET UNITYSDK_OFFSET(0x1E53CB40)
#define HCGDLIAMDLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E53CBF0)
#define HCGDLIAMDLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E53CB70)
#define HCGDLIAMDLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E53CCC0)
#define HCGDLIAMDLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E53C9D0)
#define HCGDLIAMDLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E53D060)
#define HCGDLIAMDLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E53D010)
#define HCGDLIAMDLA_OINPICOLNKD_OFFSET UNITYSDK_OFFSET(0x1E53CB50)
#define HCGDLIAMDLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E53CA30)
#define HCGDLIAMDLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E53CCF0)
#define HCGDLIAMDLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E53CD50)

	class HCGDLIAMDLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HBEJPFMACNJ; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		::System::UInt32 KLOONINFBHK; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HCGDLIAMDLA")->GetStaticField(0x2FE40);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object MKOCMMLMFEM; // 0x0
		// static const ::System::Object LDHNEMHEJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HCGDLIAMDLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGDLIAMDLA*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGDLIAMDLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HCGDLIAMDLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HCGDLIAMDLA* Clone()
		{
			return ((::HCGDLIAMDLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 DFKDHGDLDPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_DFKDHGDLDPJ_OFFSET))(this);
		}

		::System::Void DMMFMBIIIDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_DMMFMBIIIDP_OFFSET))(this, a1);
		}

		::System::UInt32 OINPICOLNKD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_OINPICOLNKD_OFFSET))(this);
		}

		::System::Void DANEAEBNFDH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_DANEAEBNFDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HCGDLIAMDLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HCGDLIAMDLA*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HCGDLIAMDLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCGDLIAMDLA*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HCGDLIAMDLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
