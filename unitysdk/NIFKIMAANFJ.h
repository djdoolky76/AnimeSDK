#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIFKIMAANFJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIFKIMAANFJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB2CE80)
#define NIFKIMAANFJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB2D0A0)
#define NIFKIMAANFJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB2CA70)
#define NIFKIMAANFJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB2CA40)
#define NIFKIMAANFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CA30)
#define NIFKIMAANFJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB2CC00)
#define NIFKIMAANFJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB2CB00)
#define NIFKIMAANFJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB2CD70)
#define NIFKIMAANFJ_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1EB2CAE0)
#define NIFKIMAANFJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB2C9C0)
#define NIFKIMAANFJ_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1EB2CAF0)
#define NIFKIMAANFJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB2CF40)
#define NIFKIMAANFJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB2CF10)
#define NIFKIMAANFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB2CA20)
#define NIFKIMAANFJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB2CDA0)
#define NIFKIMAANFJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB2CE00)

	class NIFKIMAANFJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NIFKIMAANFJ")->GetStaticField(0x611D0);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIFKIMAANFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFKIMAANFJ*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFKIMAANFJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NIFKIMAANFJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIFKIMAANFJ* Clone()
		{
			return ((::NIFKIMAANFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIFKIMAANFJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIFKIMAANFJ*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIFKIMAANFJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIFKIMAANFJ*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIFKIMAANFJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
