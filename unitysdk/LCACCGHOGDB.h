#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCACCGHOGDB;
class NPIJFFFFKBK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LCACCGHOGDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E1EC0)
#define LCACCGHOGDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E2280)
#define LCACCGHOGDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E1980)
#define LCACCGHOGDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E1910)
#define LCACCGHOGDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E1900)
#define LCACCGHOGDB_EMLCAKJEFLC_OFFSET UNITYSDK_OFFSET(0x1E8E1A20)
#define LCACCGHOGDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E1BC0)
#define LCACCGHOGDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E1A40)
#define LCACCGHOGDB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8E1A10)
#define LCACCGHOGDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E1D40)
#define LCACCGHOGDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E18C0)
#define LCACCGHOGDB_KKOLIFGKJAO_OFFSET UNITYSDK_OFFSET(0x1E8E1A30)
#define LCACCGHOGDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E20A0)
#define LCACCGHOGDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E1F90)
#define LCACCGHOGDB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8E1A00)
#define LCACCGHOGDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E18F0)
#define LCACCGHOGDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E1D80)
#define LCACCGHOGDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E1DE0)

	class LCACCGHOGDB : public ::System::Object
	{
	public:
		::NPIJFFFFKBK* FPOBAIOBMDK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LCACCGHOGDB")->GetStaticField(0x30F30);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NEEILLMPGMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LCACCGHOGDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCACCGHOGDB*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCACCGHOGDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LCACCGHOGDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LCACCGHOGDB* Clone()
		{
			return ((::LCACCGHOGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LCACCGHOGDB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NPIJFFFFKBK* EMLCAKJEFLC()
		{
			return ((::NPIJFFFFKBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_EMLCAKJEFLC_OFFSET))(this);
		}

		::System::Void KKOLIFGKJAO(::NPIJFFFFKBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPIJFFFFKBK*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_KKOLIFGKJAO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LCACCGHOGDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LCACCGHOGDB*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LCACCGHOGDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LCACCGHOGDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCACCGHOGDB*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LCACCGHOGDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
