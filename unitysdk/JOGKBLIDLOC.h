#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGKBLIDLOC;
class MKCBFFIOBAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOGKBLIDLOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7A2320)
#define JOGKBLIDLOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A2680)
#define JOGKBLIDLOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7A1D70)
#define JOGKBLIDLOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7A1CD0)
#define JOGKBLIDLOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1CC0)
#define JOGKBLIDLOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7A1FE0)
#define JOGKBLIDLOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7A1E60)
#define JOGKBLIDLOC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7A1E50)
#define JOGKBLIDLOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7A2160)
#define JOGKBLIDLOC_GFNAIKCBHNO_OFFSET UNITYSDK_OFFSET(0x1E7A1E30)
#define JOGKBLIDLOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7A1C80)
#define JOGKBLIDLOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7A24D0)
#define JOGKBLIDLOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7A23F0)
#define JOGKBLIDLOC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7A1E40)
#define JOGKBLIDLOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1CB0)
#define JOGKBLIDLOC_PDGHKFIPNHC_OFFSET UNITYSDK_OFFSET(0x1E7A1E20)
#define JOGKBLIDLOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7A21E0)
#define JOGKBLIDLOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7A2240)

	class JOGKBLIDLOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MKCBFFIOBAB* LNCJBCJGOFP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JOGKBLIDLOC")->GetStaticField(0x6CF10);
		}

		// static const ::System::Object MPMEBEMMDPL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOGKBLIDLOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGKBLIDLOC*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOGKBLIDLOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JOGKBLIDLOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOGKBLIDLOC* Clone()
		{
			return ((::JOGKBLIDLOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_CLONE_OFFSET))(this);
		}

		::MKCBFFIOBAB* PDGHKFIPNHC()
		{
			return ((::MKCBFFIOBAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_PDGHKFIPNHC_OFFSET))(this);
		}

		::System::Void GFNAIKCBHNO(::MKCBFFIOBAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKCBFFIOBAB*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_GFNAIKCBHNO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOGKBLIDLOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOGKBLIDLOC*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOGKBLIDLOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOGKBLIDLOC*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOGKBLIDLOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
