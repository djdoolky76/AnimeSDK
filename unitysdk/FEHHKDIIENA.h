#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEHHKDIIENA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEHHKDIIENA_BAPJBIDLBOI_OFFSET UNITYSDK_OFFSET(0x1E366200)
#define FEHHKDIIENA_BFCKKDBJEEJ_OFFSET UNITYSDK_OFFSET(0x1E366220)
#define FEHHKDIIENA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E366560)
#define FEHHKDIIENA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E366830)
#define FEHHKDIIENA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3661B0)
#define FEHHKDIIENA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E366180)
#define FEHHKDIIENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E366170)
#define FEHHKDIIENA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E366320)
#define FEHHKDIIENA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E366240)
#define FEHHKDIIENA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3663F0)
#define FEHHKDIIENA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E366130)
#define FEHHKDIIENA_KHJBJLDEDEB_OFFSET UNITYSDK_OFFSET(0x1E366210)
#define FEHHKDIIENA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3666B0)
#define FEHHKDIIENA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E366670)
#define FEHHKDIIENA_PBKMFMDLLKJ_OFFSET UNITYSDK_OFFSET(0x1E366230)
#define FEHHKDIIENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E366160)
#define FEHHKDIIENA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E366420)
#define FEHHKDIIENA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E366480)

inline static constexpr unsigned int FEHHKDIIENA_TypeDefinitionIndex = 31340;

	class FEHHKDIIENA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGDIKGKCCFN; // 0x18
		::System::UInt32 DEFFFGHCOEH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FEHHKDIIENA")->GetStaticField(0x4D390);
		}

		// static const ::System::Object EDJKPMEHMEG; // 0x0
		// static const ::System::Object CLJJLLDPMBN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEHHKDIIENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEHHKDIIENA*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEHHKDIIENA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FEHHKDIIENA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEHHKDIIENA* Clone()
		{
			return ((::FEHHKDIIENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_CLONE_OFFSET))(this);
		}

		::System::UInt32 BAPJBIDLBOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_BAPJBIDLBOI_OFFSET))(this);
		}

		::System::Void KHJBJLDEDEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEHHKDIIENA_KHJBJLDEDEB_OFFSET))(this, a1);
		}

		::System::UInt32 BFCKKDBJEEJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_BFCKKDBJEEJ_OFFSET))(this);
		}

		::System::Void PBKMFMDLLKJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEHHKDIIENA_PBKMFMDLLKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEHHKDIIENA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEHHKDIIENA*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHHKDIIENA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEHHKDIIENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEHHKDIIENA*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEHHKDIIENA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
