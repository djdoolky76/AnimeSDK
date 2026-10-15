#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCMOMHFNFAH;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCMOMHFNFAH_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E175CC0)
#define DCMOMHFNFAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E176200)
#define DCMOMHFNFAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1765A0)
#define DCMOMHFNFAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E175C20)
#define DCMOMHFNFAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E175BB0)
#define DCMOMHFNFAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E175BA0)
#define DCMOMHFNFAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E175E90)
#define DCMOMHFNFAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E175D00)
#define DCMOMHFNFAH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E175CF0)
#define DCMOMHFNFAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E176020)
#define DCMOMHFNFAH_HDEJJEDGFHA_OFFSET UNITYSDK_OFFSET(0x1E175CA0)
#define DCMOMHFNFAH_HFJCFBIMLMP_OFFSET UNITYSDK_OFFSET(0x1E175CB0)
#define DCMOMHFNFAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E175B60)
#define DCMOMHFNFAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1763E0)
#define DCMOMHFNFAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E176350)
#define DCMOMHFNFAH_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E175CD0)
#define DCMOMHFNFAH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E175CE0)
#define DCMOMHFNFAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E175B90)
#define DCMOMHFNFAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E176060)
#define DCMOMHFNFAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1760C0)

inline static constexpr unsigned int DCMOMHFNFAH_TypeDefinitionIndex = 34617;

	class DCMOMHFNFAH : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 ILBGKJHIEJA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCMOMHFNFAH")->GetStaticField(0x2CD50);
		}

		// static const ::System::Object JAAODGJBLJH; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCMOMHFNFAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMOMHFNFAH*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCMOMHFNFAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCMOMHFNFAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCMOMHFNFAH* Clone()
		{
			return ((::DCMOMHFNFAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 HDEJJEDGFHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_HDEJJEDGFHA_OFFSET))(this);
		}

		::System::Void HFJCFBIMLMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_HFJCFBIMLMP_OFFSET))(this, a1);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCMOMHFNFAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCMOMHFNFAH*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCMOMHFNFAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCMOMHFNFAH*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCMOMHFNFAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
