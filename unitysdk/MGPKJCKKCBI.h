#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGPKJCKKCBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGPKJCKKCBI_BIKLNOEMCJO_OFFSET UNITYSDK_OFFSET(0x1EA2B6C0)
#define MGPKJCKKCBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2BA70)
#define MGPKJCKKCBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2BDF0)
#define MGPKJCKKCBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2B650)
#define MGPKJCKKCBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2B610)
#define MGPKJCKKCBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B600)
#define MGPKJCKKCBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2B7E0)
#define MGPKJCKKCBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2B700)
#define MGPKJCKKCBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA2B6F0)
#define MGPKJCKKCBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2B8B0)
#define MGPKJCKKCBI_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1EA2B6A0)
#define MGPKJCKKCBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2B5C0)
#define MGPKJCKKCBI_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1EA2B6B0)
#define MGPKJCKKCBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2BC50)
#define MGPKJCKKCBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2BC00)
#define MGPKJCKKCBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA2B6E0)
#define MGPKJCKKCBI_OCBHPCJNLGL_OFFSET UNITYSDK_OFFSET(0x1EA2B6D0)
#define MGPKJCKKCBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B5F0)
#define MGPKJCKKCBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2B8E0)
#define MGPKJCKKCBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2B940)

	class MGPKJCKKCBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EMEDPJEGFNE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		::System::UInt32 KBBFPCGLDCN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGPKJCKKCBI")->GetStaticField(0x50420);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object AKNOMJNFBPP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGPKJCKKCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGPKJCKKCBI*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGPKJCKKCBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGPKJCKKCBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGPKJCKKCBI* Clone()
		{
			return ((::MGPKJCKKCBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 BIKLNOEMCJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_BIKLNOEMCJO_OFFSET))(this);
		}

		::System::Void OCBHPCJNLGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_OCBHPCJNLGL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGPKJCKKCBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGPKJCKKCBI*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGPKJCKKCBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGPKJCKKCBI*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGPKJCKKCBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
