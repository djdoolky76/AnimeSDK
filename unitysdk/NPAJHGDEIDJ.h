#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPCEBDCJBOI.h"
#include "unitysdk/System/Object.h"
class NPAJHGDEIDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NPAJHGDEIDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB92960)
#define NPAJHGDEIDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB92C70)
#define NPAJHGDEIDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB925A0)
#define NPAJHGDEIDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB92570)
#define NPAJHGDEIDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB92560)
#define NPAJHGDEIDJ_EPPIFNICDED_OFFSET UNITYSDK_OFFSET(0x1EB92610)
#define NPAJHGDEIDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB92710)
#define NPAJHGDEIDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB92630)
#define NPAJHGDEIDJ_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1EB92600)
#define NPAJHGDEIDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB927E0)
#define NPAJHGDEIDJ_HFPMAPKAJHB_OFFSET UNITYSDK_OFFSET(0x1EB92620)
#define NPAJHGDEIDJ_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1EB925F0)
#define NPAJHGDEIDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB92520)
#define NPAJHGDEIDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB92AF0)
#define NPAJHGDEIDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB92AB0)
#define NPAJHGDEIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB92550)
#define NPAJHGDEIDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB92810)
#define NPAJHGDEIDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB92870)

	class NPAJHGDEIDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LPCEBDCJBOI AFHHMCKLLAJ; // 0x18
		::System::UInt32 ACOMDMEILHC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NPAJHGDEIDJ")->GetStaticField(0xD570);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object LPJFEABAFED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NPAJHGDEIDJ* Clone()
		{
			return ((::NPAJHGDEIDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CLONE_OFFSET))(this);
		}

		::LPCEBDCJBOI JBENBABCOGB()
		{
			return ((::LPCEBDCJBOI(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::LPCEBDCJBOI a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCEBDCJBOI))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 EPPIFNICDED()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EPPIFNICDED_OFFSET))(this);
		}

		::System::Void HFPMAPKAJHB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_HFPMAPKAJHB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NPAJHGDEIDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPAJHGDEIDJ*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NPAJHGDEIDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
