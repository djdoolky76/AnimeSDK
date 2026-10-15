#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJMFOOIHFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEJMFOOIHFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E934720)
#define LEJMFOOIHFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9349F0)
#define LEJMFOOIHFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E934370)
#define LEJMFOOIHFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E934340)
#define LEJMFOOIHFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E934330)
#define LEJMFOOIHFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9344E0)
#define LEJMFOOIHFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E934400)
#define LEJMFOOIHFN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9343D0)
#define LEJMFOOIHFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9345B0)
#define LEJMFOOIHFN_IFGMGBAAKBM_OFFSET UNITYSDK_OFFSET(0x1E9343F0)
#define LEJMFOOIHFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9342F0)
#define LEJMFOOIHFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E934870)
#define LEJMFOOIHFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E934830)
#define LEJMFOOIHFN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9343C0)
#define LEJMFOOIHFN_OPDMPOKGBCA_OFFSET UNITYSDK_OFFSET(0x1E9343E0)
#define LEJMFOOIHFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E934320)
#define LEJMFOOIHFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9345E0)
#define LEJMFOOIHFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E934640)

	class LEJMFOOIHFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CHMFPHPJAIA; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LEJMFOOIHFN")->GetStaticField(0x39100);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NKLILADIPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEJMFOOIHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJMFOOIHFN*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJMFOOIHFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LEJMFOOIHFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEJMFOOIHFN* Clone()
		{
			return ((::LEJMFOOIHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OPDMPOKGBCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_OPDMPOKGBCA_OFFSET))(this);
		}

		::System::Void IFGMGBAAKBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_IFGMGBAAKBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEJMFOOIHFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEJMFOOIHFN*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEJMFOOIHFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJMFOOIHFN*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEJMFOOIHFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
