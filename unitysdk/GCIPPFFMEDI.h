#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCIPPFFMEDI;
class HANFHCOHGBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCIPPFFMEDI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E43EC30)
#define GCIPPFFMEDI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43EF30)
#define GCIPPFFMEDI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E43E5A0)
#define GCIPPFFMEDI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E43E510)
#define GCIPPFFMEDI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43E500)
#define GCIPPFFMEDI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E43E7D0)
#define GCIPPFFMEDI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E43E660)
#define GCIPPFFMEDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E43EAA0)
#define GCIPPFFMEDI_GNICFMOENOL_OFFSET UNITYSDK_OFFSET(0x1E43E650)
#define GCIPPFFMEDI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E43E4C0)
#define GCIPPFFMEDI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E43ED60)
#define GCIPPFFMEDI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E43EC90)
#define GCIPPFFMEDI_OPPDKNHKNEN_OFFSET UNITYSDK_OFFSET(0x1E43E640)
#define GCIPPFFMEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E43E4F0)
#define GCIPPFFMEDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E43EB40)
#define GCIPPFFMEDI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E43EBA0)

	class GCIPPFFMEDI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HANFHCOHGBP* LCJFJKEMBEM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GCIPPFFMEDI")->GetStaticField(0xF4F0);
		}

		// static const ::System::Object MNHKGFHHJBB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCIPPFFMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GCIPPFFMEDI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCIPPFFMEDI* Clone()
		{
			return ((::GCIPPFFMEDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CLONE_OFFSET))(this);
		}

		::HANFHCOHGBP* OPPDKNHKNEN()
		{
			return ((::HANFHCOHGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_OPPDKNHKNEN_OFFSET))(this);
		}

		::System::Void GNICFMOENOL(::HANFHCOHGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HANFHCOHGBP*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_GNICFMOENOL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCIPPFFMEDI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCIPPFFMEDI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCIPPFFMEDI*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCIPPFFMEDI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
