#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHEMEECJJIB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHEMEECJJIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E486A00)
#define GHEMEECJJIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E486C60)
#define GHEMEECJJIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E486610)
#define GHEMEECJJIB_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E486680)
#define GHEMEECJJIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4865D0)
#define GHEMEECJJIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4865C0)
#define GHEMEECJJIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E486780)
#define GHEMEECJJIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4866A0)
#define GHEMEECJJIB_FDMJPNPGFMP_OFFSET UNITYSDK_OFFSET(0x1E486660)
#define GHEMEECJJIB_FOKJAPODECN_OFFSET UNITYSDK_OFFSET(0x1E486670)
#define GHEMEECJJIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E486860)
#define GHEMEECJJIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E486580)
#define GHEMEECJJIB_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E486690)
#define GHEMEECJJIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E486AE0)
#define GHEMEECJJIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E486AA0)
#define GHEMEECJJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4865B0)
#define GHEMEECJJIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E486890)
#define GHEMEECJJIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4868F0)

	class GHEMEECJJIB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BJJIDCJCOAN; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHEMEECJJIB")->GetStaticField(0x16C90);
		}

		// static const ::System::Object HKEKJPMLKCP; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHEMEECJJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHEMEECJJIB*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHEMEECJJIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHEMEECJJIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHEMEECJJIB* Clone()
		{
			return ((::GHEMEECJJIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_CLONE_OFFSET))(this);
		}

		::System::Boolean FDMJPNPGFMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_FDMJPNPGFMP_OFFSET))(this);
		}

		::System::Void FOKJAPODECN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHEMEECJJIB_FOKJAPODECN_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHEMEECJJIB_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHEMEECJJIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHEMEECJJIB*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHEMEECJJIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHEMEECJJIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHEMEECJJIB*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHEMEECJJIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
