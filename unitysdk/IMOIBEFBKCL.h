#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHGFCBMLBL;
class IMOIBEFBKCL;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMOIBEFBKCL_ABGEGMHAOPO_OFFSET UNITYSDK_OFFSET(0x1E6B9D30)
#define IMOIBEFBKCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6BA4B0)
#define IMOIBEFBKCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6BA7C0)
#define IMOIBEFBKCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B9CF0)
#define IMOIBEFBKCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B9BF0)
#define IMOIBEFBKCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9BE0)
#define IMOIBEFBKCL_EJIANIGKCGD_OFFSET UNITYSDK_OFFSET(0x1E6B9D50)
#define IMOIBEFBKCL_EKKNALDEKFF_OFFSET UNITYSDK_OFFSET(0x1E6B9D40)
#define IMOIBEFBKCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B9F60)
#define IMOIBEFBKCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B9DA0)
#define IMOIBEFBKCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6BA220)
#define IMOIBEFBKCL_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E6B9D90)
#define IMOIBEFBKCL_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E6B9D60)
#define IMOIBEFBKCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B9BA0)
#define IMOIBEFBKCL_MBGJFAKGJAL_OFFSET UNITYSDK_OFFSET(0x1E6B9D20)
#define IMOIBEFBKCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6BA6A0)
#define IMOIBEFBKCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6BA570)
#define IMOIBEFBKCL_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E6B9D70)
#define IMOIBEFBKCL_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E6B9D80)
#define IMOIBEFBKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B9BD0)
#define IMOIBEFBKCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6BA280)
#define IMOIBEFBKCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6BA2E0)

	class IMOIBEFBKCL : public ::System::Object
	{
	public:
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x10
		::GKHGFCBMLBL* KPNCLGABAOD; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x28
		::System::Boolean HCGGHDHMGEA; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMOIBEFBKCL")->GetStaticField(0x57A40);
		}

		// static const ::System::Object ALBJBNPCJFD; // 0x0
		// static const ::System::Object LEMCPLEFLBB; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMOIBEFBKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMOIBEFBKCL*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMOIBEFBKCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMOIBEFBKCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMOIBEFBKCL* Clone()
		{
			return ((::IMOIBEFBKCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_CLONE_OFFSET))(this);
		}

		::GKHGFCBMLBL* MBGJFAKGJAL()
		{
			return ((::GKHGFCBMLBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_MBGJFAKGJAL_OFFSET))(this);
		}

		::System::Void ABGEGMHAOPO(::GKHGFCBMLBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKHGFCBMLBL*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_ABGEGMHAOPO_OFFSET))(this, a1);
		}

		::System::Boolean EKKNALDEKFF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_EKKNALDEKFF_OFFSET))(this);
		}

		::System::Void EJIANIGKCGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_EJIANIGKCGD_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMOIBEFBKCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMOIBEFBKCL*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMOIBEFBKCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMOIBEFBKCL*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMOIBEFBKCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
