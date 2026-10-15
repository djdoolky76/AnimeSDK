#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDFAFAIMJOM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDFAFAIMJOM_BKGOJMIBBPJ_OFFSET UNITYSDK_OFFSET(0x1E708D50)
#define JDFAFAIMJOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7090A0)
#define JDFAFAIMJOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E709370)
#define JDFAFAIMJOM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E708CF0)
#define JDFAFAIMJOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E708CC0)
#define JDFAFAIMJOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E708CB0)
#define JDFAFAIMJOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E708E60)
#define JDFAFAIMJOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E708D80)
#define JDFAFAIMJOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E708F30)
#define JDFAFAIMJOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E708C70)
#define JDFAFAIMJOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7091F0)
#define JDFAFAIMJOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7091B0)
#define JDFAFAIMJOM_MPEEDLNBONK_OFFSET UNITYSDK_OFFSET(0x1E708D70)
#define JDFAFAIMJOM_OLMAHKEJDJE_OFFSET UNITYSDK_OFFSET(0x1E708D40)
#define JDFAFAIMJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E708CA0)
#define JDFAFAIMJOM_PGLNJEILMKB_OFFSET UNITYSDK_OFFSET(0x1E708D60)
#define JDFAFAIMJOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E708F60)
#define JDFAFAIMJOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E708FC0)

	class JDFAFAIMJOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MMOEKGNHACP; // 0x18
		::System::UInt32 NFGNEEGBNIF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JDFAFAIMJOM")->GetStaticField(0x5DB90);
		}

		// static const ::System::Object FPKJMJADEBI; // 0x0
		// static const ::System::Object KPGNEGMDKCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDFAFAIMJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JDFAFAIMJOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDFAFAIMJOM* Clone()
		{
			return ((::JDFAFAIMJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLMAHKEJDJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_OLMAHKEJDJE_OFFSET))(this);
		}

		::System::Void BKGOJMIBBPJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_BKGOJMIBBPJ_OFFSET))(this, a1);
		}

		::System::UInt32 PGLNJEILMKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_PGLNJEILMKB_OFFSET))(this);
		}

		::System::Void MPEEDLNBONK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MPEEDLNBONK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDFAFAIMJOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDFAFAIMJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDFAFAIMJOM*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDFAFAIMJOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
