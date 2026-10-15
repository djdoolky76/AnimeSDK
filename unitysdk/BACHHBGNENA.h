#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BACHHBGNENA;
class PGPHEKKPBLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BACHHBGNENA_BGHKDLONBOD_OFFSET UNITYSDK_OFFSET(0x1E7AECF0)
#define BACHHBGNENA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7AF200)
#define BACHHBGNENA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7AF5D0)
#define BACHHBGNENA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7AEC10)
#define BACHHBGNENA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7AEB80)
#define BACHHBGNENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEB70)
#define BACHHBGNENA_DBJPBEJHKFF_OFFSET UNITYSDK_OFFSET(0x1E7AED40)
#define BACHHBGNENA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7AEE80)
#define BACHHBGNENA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7AED50)
#define BACHHBGNENA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7AF010)
#define BACHHBGNENA_IBAGHDNPGCO_OFFSET UNITYSDK_OFFSET(0x1E7AED00)
#define BACHHBGNENA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7AEB00)
#define BACHHBGNENA_LOOMPBFMBCN_OFFSET UNITYSDK_OFFSET(0x1E7AED20)
#define BACHHBGNENA_MCKAAMENFCE_OFFSET UNITYSDK_OFFSET(0x1E7AED10)
#define BACHHBGNENA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7AF400)
#define BACHHBGNENA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7AF360)
#define BACHHBGNENA_NEHAFDOAFIL_OFFSET UNITYSDK_OFFSET(0x1E7AED30)
#define BACHHBGNENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7AEB60)
#define BACHHBGNENA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7AF060)
#define BACHHBGNENA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7AF0C0)

inline static constexpr unsigned int BACHHBGNENA_TypeDefinitionIndex = 31871;

	class BACHHBGNENA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::PGPHEKKPBLD* JIHIDBNIKAG; // 0x18
		::System::UInt32 BDHFEEHNNDD; // 0x20
		::System::UInt32 CPHKLPMPADB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BACHHBGNENA")->GetStaticField(0x442D0);
		}

		// static const ::System::Object MCEJJGELGPI; // 0x0
		// static const ::System::Object MCCPOKCDGKE; // 0x0
		// static const ::System::Object JIFOPJNKLLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BACHHBGNENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + BACHHBGNENA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BACHHBGNENA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BACHHBGNENA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BACHHBGNENA* Clone()
		{
			return ((::BACHHBGNENA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_CLONE_OFFSET))(this);
		}

		::PGPHEKKPBLD* BGHKDLONBOD()
		{
			return ((::PGPHEKKPBLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_BGHKDLONBOD_OFFSET))(this);
		}

		::System::Void IBAGHDNPGCO(::PGPHEKKPBLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGPHEKKPBLD*))((::PBYTE)hIl2Cpp + BACHHBGNENA_IBAGHDNPGCO_OFFSET))(this, a1);
		}

		::System::UInt32 MCKAAMENFCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_MCKAAMENFCE_OFFSET))(this);
		}

		::System::Void LOOMPBFMBCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACHHBGNENA_LOOMPBFMBCN_OFFSET))(this, a1);
		}

		::System::UInt32 NEHAFDOAFIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_NEHAFDOAFIL_OFFSET))(this);
		}

		::System::Void DBJPBEJHKFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BACHHBGNENA_DBJPBEJHKFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BACHHBGNENA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BACHHBGNENA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + BACHHBGNENA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BACHHBGNENA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BACHHBGNENA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BACHHBGNENA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BACHHBGNENA*))((::PBYTE)hIl2Cpp + BACHHBGNENA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BACHHBGNENA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
