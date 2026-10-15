#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPNFCKLHLIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPNFCKLHLIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8C1220)
#define KPNFCKLHLIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8C14F0)
#define KPNFCKLHLIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8C0E70)
#define KPNFCKLHLIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8C0E40)
#define KPNFCKLHLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0E30)
#define KPNFCKLHLIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8C0FE0)
#define KPNFCKLHLIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8C0F00)
#define KPNFCKLHLIP_GEBGKGENFFK_OFFSET UNITYSDK_OFFSET(0x1E8C0ED0)
#define KPNFCKLHLIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8C10B0)
#define KPNFCKLHLIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8C0DF0)
#define KPNFCKLHLIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8C1370)
#define KPNFCKLHLIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8C1330)
#define KPNFCKLHLIP_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E8C0EF0)
#define KPNFCKLHLIP_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E8C0EE0)
#define KPNFCKLHLIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8C0E20)
#define KPNFCKLHLIP_PPLGOFNBHJA_OFFSET UNITYSDK_OFFSET(0x1E8C0EC0)
#define KPNFCKLHLIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8C10E0)
#define KPNFCKLHLIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8C1140)

inline static constexpr unsigned int KPNFCKLHLIP_TypeDefinitionIndex = 26087;

	class KPNFCKLHLIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		::System::UInt32 KLGIOJGIEMP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KPNFCKLHLIP")->GetStaticField(0x2D440);
		}

		// static const ::System::Object DDPJJHAGHOF; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPNFCKLHLIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNFCKLHLIP*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNFCKLHLIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KPNFCKLHLIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPNFCKLHLIP* Clone()
		{
			return ((::KPNFCKLHLIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPLGOFNBHJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_PPLGOFNBHJA_OFFSET))(this);
		}

		::System::Void GEBGKGENFFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_GEBGKGENFFK_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPNFCKLHLIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPNFCKLHLIP*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPNFCKLHLIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPNFCKLHLIP*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPNFCKLHLIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
