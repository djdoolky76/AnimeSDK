#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPKGHJGOCC.h"
#include "unitysdk/System/Object.h"
class FHLEBDMFCHL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHLEBDMFCHL_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x1E38F000)
#define FHLEBDMFCHL_BKMJJABNDMA_OFFSET UNITYSDK_OFFSET(0x1E38F010)
#define FHLEBDMFCHL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38F380)
#define FHLEBDMFCHL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38F690)
#define FHLEBDMFCHL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38EF70)
#define FHLEBDMFCHL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38EF40)
#define FHLEBDMFCHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38EF30)
#define FHLEBDMFCHL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38F130)
#define FHLEBDMFCHL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38F020)
#define FHLEBDMFCHL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38F200)
#define FHLEBDMFCHL_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E38EFF0)
#define FHLEBDMFCHL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38EEC0)
#define FHLEBDMFCHL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38F510)
#define FHLEBDMFCHL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38F4D0)
#define FHLEBDMFCHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38EF20)
#define FHLEBDMFCHL_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E38EFE0)
#define FHLEBDMFCHL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38F230)
#define FHLEBDMFCHL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38F290)

	class FHLEBDMFCHL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAPNIOGIGPL; // 0x18
		::LPPKGHJGOCC ADOPAOCMEOG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHLEBDMFCHL")->GetStaticField(0x5F800);
		}

		// static const ::System::Object ODHBDFKGPJO; // 0x0
		// static const ::System::Object ELFGGGHJCFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHLEBDMFCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLEBDMFCHL*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLEBDMFCHL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHLEBDMFCHL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHLEBDMFCHL* Clone()
		{
			return ((::FHLEBDMFCHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_CLONE_OFFSET))(this);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::LPPKGHJGOCC AJOPEKGIJFO()
		{
			return ((::LPPKGHJGOCC(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_AJOPEKGIJFO_OFFSET))(this);
		}

		::System::Void BKMJJABNDMA(::LPPKGHJGOCC a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPPKGHJGOCC))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_BKMJJABNDMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHLEBDMFCHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHLEBDMFCHL*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHLEBDMFCHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLEBDMFCHL*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHLEBDMFCHL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
