#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLBNCPOFNPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLBNCPOFNPB_BMIKELJDNGF_OFFSET UNITYSDK_OFFSET(0x1E0F3210)
#define CLBNCPOFNPB_BPHAFCAHJPG_OFFSET UNITYSDK_OFFSET(0x1E0F31F0)
#define CLBNCPOFNPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0F3560)
#define CLBNCPOFNPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F38E0)
#define CLBNCPOFNPB_CDCJLKGHMBK_OFFSET UNITYSDK_OFFSET(0x1E0F3240)
#define CLBNCPOFNPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0F3170)
#define CLBNCPOFNPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0F3130)
#define CLBNCPOFNPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F3120)
#define CLBNCPOFNPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0F32D0)
#define CLBNCPOFNPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0F3250)
#define CLBNCPOFNPB_GEILLPDBLJG_OFFSET UNITYSDK_OFFSET(0x1E0F3200)
#define CLBNCPOFNPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0F33A0)
#define CLBNCPOFNPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0F30B0)
#define CLBNCPOFNPB_LJOKPIJMOKM_OFFSET UNITYSDK_OFFSET(0x1E0F3230)
#define CLBNCPOFNPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0F3740)
#define CLBNCPOFNPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0F36F0)
#define CLBNCPOFNPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0F3110)
#define CLBNCPOFNPB_PMJCHFFJLMA_OFFSET UNITYSDK_OFFSET(0x1E0F3220)
#define CLBNCPOFNPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0F33D0)
#define CLBNCPOFNPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0F3430)

	class CLBNCPOFNPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KKAMCECFCMF; // 0x18
		::System::UInt32 HGECOJIAJOA; // 0x1C
		::System::UInt32 JENPCDALEMN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CLBNCPOFNPB")->GetStaticField(0x1C840);
		}

		// static const ::System::Object KHDBNNKGJCC; // 0x0
		// static const ::System::Object PJJPPFPODDM; // 0x0
		// static const ::System::Object IJBBKPNMLMM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLBNCPOFNPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLBNCPOFNPB*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CLBNCPOFNPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLBNCPOFNPB* Clone()
		{
			return ((::CLBNCPOFNPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPHAFCAHJPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_BPHAFCAHJPG_OFFSET))(this);
		}

		::System::Void GEILLPDBLJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_GEILLPDBLJG_OFFSET))(this, a1);
		}

		::System::UInt32 BMIKELJDNGF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_BMIKELJDNGF_OFFSET))(this);
		}

		::System::Void PMJCHFFJLMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_PMJCHFFJLMA_OFFSET))(this, a1);
		}

		::System::UInt32 LJOKPIJMOKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_LJOKPIJMOKM_OFFSET))(this);
		}

		::System::Void CDCJLKGHMBK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CDCJLKGHMBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLBNCPOFNPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLBNCPOFNPB*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLBNCPOFNPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLBNCPOFNPB*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLBNCPOFNPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
