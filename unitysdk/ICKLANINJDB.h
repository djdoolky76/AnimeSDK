#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICKLANINJDB;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICKLANINJDB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E623BE0)
#define ICKLANINJDB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E623FD0)
#define ICKLANINJDB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E623600)
#define ICKLANINJDB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E623580)
#define ICKLANINJDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E623530)
#define ICKLANINJDB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6237C0)
#define ICKLANINJDB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E623730)
#define ICKLANINJDB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6236A0)
#define ICKLANINJDB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6238E0)
#define ICKLANINJDB_GFKBOGNDAGA_OFFSET UNITYSDK_OFFSET(0x1E6236B0)
#define ICKLANINJDB_IDIJGMBLIMD_OFFSET UNITYSDK_OFFSET(0x1E6236C0)
#define ICKLANINJDB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6234F0)
#define ICKLANINJDB_KGOPCAIHJJJ_OFFSET UNITYSDK_OFFSET(0x1E623720)
#define ICKLANINJDB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E623E00)
#define ICKLANINJDB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E623DA0)
#define ICKLANINJDB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E623690)
#define ICKLANINJDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E623520)
#define ICKLANINJDB_PDPIGGBGMPH_OFFSET UNITYSDK_OFFSET(0x1E623710)
#define ICKLANINJDB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E623A10)
#define ICKLANINJDB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E623A70)

	class ICKLANINJDB : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* NJAIONNHDKJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IPNKLLBIFLC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICKLANINJDB")->GetStaticField(0x44B60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MCBNHKIMPMH; // 0x0
		// static const ::System::Object JIKLFFDOHCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + ICKLANINJDB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICKLANINJDB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICKLANINJDB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICKLANINJDB* Clone()
		{
			return ((::ICKLANINJDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICKLANINJDB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* GFKBOGNDAGA()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_GFKBOGNDAGA_OFFSET))(this);
		}

		::System::Void IDIJGMBLIMD(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + ICKLANINJDB_IDIJGMBLIMD_OFFSET))(this, a1);
		}

		::System::UInt32 PDPIGGBGMPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_PDPIGGBGMPH_OFFSET))(this);
		}

		::System::Void KGOPCAIHJJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICKLANINJDB_KGOPCAIHJJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICKLANINJDB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICKLANINJDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + ICKLANINJDB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICKLANINJDB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICKLANINJDB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICKLANINJDB*))((::PBYTE)hIl2Cpp + ICKLANINJDB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICKLANINJDB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
