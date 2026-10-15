#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCGJJCCJBCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BCGJJCCJBCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E907B10)
#define BCGJJCCJBCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E907E90)
#define BCGJJCCJBCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E907630)
#define BCGJJCCJBCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9075B0)
#define BCGJJCCJBCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E907580)
#define BCGJJCCJBCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9077A0)
#define BCGJJCCJBCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9076F0)
#define BCGJJCCJBCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9078B0)
#define BCGJJCCJBCG_GGCNIHNLFAC_OFFSET UNITYSDK_OFFSET(0x1E9076C0)
#define BCGJJCCJBCG_HGACDJJMLCK_OFFSET UNITYSDK_OFFSET(0x1E907690)
#define BCGJJCCJBCG_HJJBNNMJIIH_OFFSET UNITYSDK_OFFSET(0x1E9076D0)
#define BCGJJCCJBCG_IFEBJOLPONJ_OFFSET UNITYSDK_OFFSET(0x1E9076A0)
#define BCGJJCCJBCG_ILDMDIDOPLP_OFFSET UNITYSDK_OFFSET(0x1E907680)
#define BCGJJCCJBCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E907510)
#define BCGJJCCJBCG_LGCKLBMMANK_OFFSET UNITYSDK_OFFSET(0x1E9076B0)
#define BCGJJCCJBCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E907D90)
#define BCGJJCCJBCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E907D20)
#define BCGJJCCJBCG_NBODEBOKOBB_OFFSET UNITYSDK_OFFSET(0x1E9076E0)
#define BCGJJCCJBCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E907570)
#define BCGJJCCJBCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E907900)
#define BCGJJCCJBCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E907960)

	class BCGJJCCJBCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BDCIMBJENAC; // 0x18
		::System::UInt32 OPMFCCLBNIC; // 0x20
		::System::UInt32 EKILIGEKABL; // 0x24
		::System::UInt32 GGKMDMICMCP; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BCGJJCCJBCG")->GetStaticField(0x3B750);
		}

		static ::System::Object** StaticGet_BOAOBACPCGK()
		{
			return (::System::Object**)UnitySDK::FromName("", "BCGJJCCJBCG")->GetStaticField(0x3B758);
		}

		// static const ::System::Object KDBKICGMNCL; // 0x0
		// static const ::System::Object LEIGKMCKFHC; // 0x0
		// static const ::System::Object FECEJHOAJDD; // 0x0
		// static const ::System::Object IPNDFMMKPEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BCGJJCCJBCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGJJCCJBCG*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCGJJCCJBCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BCGJJCCJBCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BCGJJCCJBCG* Clone()
		{
			return ((::BCGJJCCJBCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ILDMDIDOPLP()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_ILDMDIDOPLP_OFFSET))(this);
		}

		::System::UInt32 HGACDJJMLCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_HGACDJJMLCK_OFFSET))(this);
		}

		::System::Void IFEBJOLPONJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_IFEBJOLPONJ_OFFSET))(this, a1);
		}

		::System::UInt32 LGCKLBMMANK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_LGCKLBMMANK_OFFSET))(this);
		}

		::System::Void GGCNIHNLFAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_GGCNIHNLFAC_OFFSET))(this, a1);
		}

		::System::UInt32 HJJBNNMJIIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_HJJBNNMJIIH_OFFSET))(this);
		}

		::System::Void NBODEBOKOBB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_NBODEBOKOBB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BCGJJCCJBCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BCGJJCCJBCG*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BCGJJCCJBCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BCGJJCCJBCG*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BCGJJCCJBCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
