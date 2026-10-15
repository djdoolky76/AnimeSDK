#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKMMGCDNILJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HKMMGCDNILJ_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E5B51E0)
#define HKMMGCDNILJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5B5520)
#define HKMMGCDNILJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5B57F0)
#define HKMMGCDNILJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5B5170)
#define HKMMGCDNILJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5B5140)
#define HKMMGCDNILJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5130)
#define HKMMGCDNILJ_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E5B51F0)
#define HKMMGCDNILJ_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E5B51C0)
#define HKMMGCDNILJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5B52E0)
#define HKMMGCDNILJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5B5200)
#define HKMMGCDNILJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5B53B0)
#define HKMMGCDNILJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5B50F0)
#define HKMMGCDNILJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5B5670)
#define HKMMGCDNILJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5B5630)
#define HKMMGCDNILJ_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E5B51D0)
#define HKMMGCDNILJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5B5120)
#define HKMMGCDNILJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5B53E0)
#define HKMMGCDNILJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5B5440)

	class HKMMGCDNILJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::UInt32 AIKAJDGKENP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HKMMGCDNILJ")->GetStaticField(0x45C10);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HKMMGCDNILJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKMMGCDNILJ*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HKMMGCDNILJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HKMMGCDNILJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HKMMGCDNILJ* Clone()
		{
			return ((::HKMMGCDNILJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HKMMGCDNILJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HKMMGCDNILJ*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HKMMGCDNILJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HKMMGCDNILJ*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HKMMGCDNILJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
