#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IONJONGACJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IONJONGACJL_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E6DAAB0)
#define IONJONGACJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DAED0)
#define IONJONGACJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB1E0)
#define IONJONGACJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DAA50)
#define IONJONGACJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DAA10)
#define IONJONGACJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DAA00)
#define IONJONGACJL_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E6DAAC0)
#define IONJONGACJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DABF0)
#define IONJONGACJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DAB00)
#define IONJONGACJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DACD0)
#define IONJONGACJL_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E6DAAD0)
#define IONJONGACJL_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E6DAAA0)
#define IONJONGACJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DA9C0)
#define IONJONGACJL_JJHAEJOCKPB_OFFSET UNITYSDK_OFFSET(0x1E6DAAE0)
#define IONJONGACJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DB040)
#define IONJONGACJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DAFF0)
#define IONJONGACJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DA9F0)
#define IONJONGACJL_PLJDMOIAGBN_OFFSET UNITYSDK_OFFSET(0x1E6DAAF0)
#define IONJONGACJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DAD00)
#define IONJONGACJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DAD60)

	class IONJONGACJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean HILCFELNGOM; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 EMHBAOIIKLC; // 0x1C
		::System::UInt32 IBEBBFIHLLP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IONJONGACJL")->GetStaticField(0x5A810);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object IOFFJNOAHAM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IONJONGACJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IONJONGACJL*))((::PBYTE)hIl2Cpp + IONJONGACJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IONJONGACJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IONJONGACJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IONJONGACJL* Clone()
		{
			return ((::IONJONGACJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IONJONGACJL_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 EJDIMEGMAKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IONJONGACJL_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean JJHAEJOCKPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_JJHAEJOCKPB_OFFSET))(this);
		}

		::System::Void PLJDMOIAGBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IONJONGACJL_PLJDMOIAGBN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IONJONGACJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IONJONGACJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IONJONGACJL*))((::PBYTE)hIl2Cpp + IONJONGACJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IONJONGACJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IONJONGACJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IONJONGACJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IONJONGACJL*))((::PBYTE)hIl2Cpp + IONJONGACJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IONJONGACJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
