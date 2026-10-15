#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLHIJOAKJCE;
class DAAOIDJDHLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAAOIDJDHLO_AIHNILNPAJG_OFFSET UNITYSDK_OFFSET(0x1E147F40)
#define DAAOIDJDHLO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E148410)
#define DAAOIDJDHLO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E148850)
#define DAAOIDJDHLO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E147EC0)
#define DAAOIDJDHLO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E147E50)
#define DAAOIDJDHLO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E147E40)
#define DAAOIDJDHLO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E148100)
#define DAAOIDJDHLO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E147F80)
#define DAAOIDJDHLO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E147F70)
#define DAAOIDJDHLO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E148280)
#define DAAOIDJDHLO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E147E00)
#define DAAOIDJDHLO_LFIDHCHMELF_OFFSET UNITYSDK_OFFSET(0x1E147F50)
#define DAAOIDJDHLO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E148630)
#define DAAOIDJDHLO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1484E0)
#define DAAOIDJDHLO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E147F60)
#define DAAOIDJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E147E30)
#define DAAOIDJDHLO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1482D0)
#define DAAOIDJDHLO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E148330)

	class DAAOIDJDHLO : public ::System::Object
	{
	public:
		::CLHIJOAKJCE* FPCHABCAHCI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DAAOIDJDHLO")->GetStaticField(0x23370);
		}

		// static const ::System::Object LNACFLNILGM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAAOIDJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DAAOIDJDHLO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAAOIDJDHLO* Clone()
		{
			return ((::DAAOIDJDHLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CLONE_OFFSET))(this);
		}

		::CLHIJOAKJCE* AIHNILNPAJG()
		{
			return ((::CLHIJOAKJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_AIHNILNPAJG_OFFSET))(this);
		}

		::System::Void LFIDHCHMELF(::CLHIJOAKJCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLHIJOAKJCE*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_LFIDHCHMELF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAAOIDJDHLO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAAOIDJDHLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAAOIDJDHLO*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAAOIDJDHLO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
