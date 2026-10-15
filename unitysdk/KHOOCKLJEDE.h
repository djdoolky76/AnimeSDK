#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCALLOJPPIJ.h"
#include "unitysdk/System/Object.h"
class KHOOCKLJEDE;
class NKDNFDCFNCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define KHOOCKLJEDE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E821400)
#define KHOOCKLJEDE_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E8213E0)
#define KHOOCKLJEDE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E821410)
#define KHOOCKLJEDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8219C0)
#define KHOOCKLJEDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E821E30)
#define KHOOCKLJEDE_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E8213F0)
#define KHOOCKLJEDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8213B0)
#define KHOOCKLJEDE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E821450)
#define KHOOCKLJEDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8212D0)
#define KHOOCKLJEDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E821290)
#define KHOOCKLJEDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8214A0)
#define KHOOCKLJEDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E821470)
#define KHOOCKLJEDE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E821460)
#define KHOOCKLJEDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E821600)
#define KHOOCKLJEDE_HEBKNMONLDM_OFFSET UNITYSDK_OFFSET(0x1E821440)
#define KHOOCKLJEDE_HJPEPLJGPDG_OFFSET UNITYSDK_OFFSET(0x1E821420)
#define KHOOCKLJEDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E821250)
#define KHOOCKLJEDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E821CE0)
#define KHOOCKLJEDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E821BC0)
#define KHOOCKLJEDE_MKIAPJPHIBK_OFFSET UNITYSDK_OFFSET(0x1E821430)
#define KHOOCKLJEDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E821280)
#define KHOOCKLJEDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8216F0)
#define KHOOCKLJEDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E821750)

inline static constexpr unsigned int KHOOCKLJEDE_TypeDefinitionIndex = 26338;

	class KHOOCKLJEDE : public ::System::Object
	{
	public:
		::Proto::ItemList* JDAFJANAEBG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* MAOHCPCFLFK; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		::GCALLOJPPIJ OPIJBJBDGNF; // 0x2C
		::System::Boolean DHMADBLCKKD; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>** StaticGet_ECNJECDFPOL()
		{
			return (::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>**)UnitySDK::FromName("", "KHOOCKLJEDE")->GetStaticField(0x16C70);
		}

		static ::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>**)UnitySDK::FromName("", "KHOOCKLJEDE")->GetStaticField(0x16C78);
		}

		// static const ::System::Object OOLLDLHKDOH; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object NHKJEGBDFBL; // 0x0
		// static const ::System::Object JHCELFPEMFJ; // 0x0
		// static const ::System::Object EBMIJAAKMMH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHOOCKLJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOOCKLJEDE*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>*(*)())((::PBYTE)hIl2Cpp + KHOOCKLJEDE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHOOCKLJEDE* Clone()
		{
			return ((::KHOOCKLJEDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CLONE_OFFSET))(this);
		}

		::System::Boolean AHDMAMMBDIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_AHDMAMMBDIC_OFFSET))(this);
		}

		::System::Void CJCOLPJIACP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CJCOLPJIACP_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::GCALLOJPPIJ HJPEPLJGPDG()
		{
			return ((::GCALLOJPPIJ(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_HJPEPLJGPDG_OFFSET))(this);
		}

		::System::Void MKIAPJPHIBK(::GCALLOJPPIJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCALLOJPPIJ))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_MKIAPJPHIBK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* HEBKNMONLDM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_HEBKNMONLDM_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHOOCKLJEDE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHOOCKLJEDE*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHOOCKLJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOOCKLJEDE*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHOOCKLJEDE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
