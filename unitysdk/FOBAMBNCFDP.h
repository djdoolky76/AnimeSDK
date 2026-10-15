#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOBAMBNCFDP;
class HODNCFNOPDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOBAMBNCFDP_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E3F6FE0)
#define FOBAMBNCFDP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3F74E0)
#define FOBAMBNCFDP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3F7800)
#define FOBAMBNCFDP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3F6F40)
#define FOBAMBNCFDP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3F6ED0)
#define FOBAMBNCFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6EC0)
#define FOBAMBNCFDP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3F7180)
#define FOBAMBNCFDP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3F7000)
#define FOBAMBNCFDP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3F6FD0)
#define FOBAMBNCFDP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3F7300)
#define FOBAMBNCFDP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3F6E80)
#define FOBAMBNCFDP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3F7640)
#define FOBAMBNCFDP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3F75B0)
#define FOBAMBNCFDP_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E3F6FF0)
#define FOBAMBNCFDP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3F6FC0)
#define FOBAMBNCFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3F6EB0)
#define FOBAMBNCFDP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3F73A0)
#define FOBAMBNCFDP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3F7400)

	class FOBAMBNCFDP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HODNCFNOPDA* CMDGAIOLHKP; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FOBAMBNCFDP")->GetStaticField(0x65AD0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOBAMBNCFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FOBAMBNCFDP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOBAMBNCFDP* Clone()
		{
			return ((::FOBAMBNCFDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HODNCFNOPDA* ANALOEDDDHD()
		{
			return ((::HODNCFNOPDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::HODNCFNOPDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HODNCFNOPDA*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOBAMBNCFDP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOBAMBNCFDP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOBAMBNCFDP*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOBAMBNCFDP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
