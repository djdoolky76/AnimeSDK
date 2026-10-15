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

#define KHOOCKLJEDE_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E84E9B0)
#define KHOOCKLJEDE_AHDMAMMBDIC_OFFSET UNITYSDK_OFFSET(0x1E84E990)
#define KHOOCKLJEDE_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E84E9C0)
#define KHOOCKLJEDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84EF70)
#define KHOOCKLJEDE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84F3E0)
#define KHOOCKLJEDE_CJCOLPJIACP_OFFSET UNITYSDK_OFFSET(0x1E84E9A0)
#define KHOOCKLJEDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84E960)
#define KHOOCKLJEDE_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x1E84EA00)
#define KHOOCKLJEDE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84E880)
#define KHOOCKLJEDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84E840)
#define KHOOCKLJEDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84EA50)
#define KHOOCKLJEDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84EA20)
#define KHOOCKLJEDE_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x1E84EA10)
#define KHOOCKLJEDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84EBB0)
#define KHOOCKLJEDE_HEBKNMONLDM_OFFSET UNITYSDK_OFFSET(0x1E84E9F0)
#define KHOOCKLJEDE_HJPEPLJGPDG_OFFSET UNITYSDK_OFFSET(0x1E84E9D0)
#define KHOOCKLJEDE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E84E800)
#define KHOOCKLJEDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84F290)
#define KHOOCKLJEDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84F170)
#define KHOOCKLJEDE_MKIAPJPHIBK_OFFSET UNITYSDK_OFFSET(0x1E84E9E0)
#define KHOOCKLJEDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84E830)
#define KHOOCKLJEDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84ECA0)
#define KHOOCKLJEDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84ED00)

inline static constexpr unsigned int KHOOCKLJEDE_TypeDefinitionIndex = 26338;

	class KHOOCKLJEDE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NKDNFDCFNCP*>* MAOHCPCFLFK; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::System::UInt32 LJDBCGPFFDH; // 0x28
		::GCALLOJPPIJ OPIJBJBDGNF; // 0x2C
		::System::Boolean DHMADBLCKKD; // 0x30
		static ::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHOOCKLJEDE*>**)UnitySDK::FromName("", "KHOOCKLJEDE")->GetStaticField(0x17E20);
		}

		static ::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>** StaticGet_ECNJECDFPOL()
		{
			return (::Google::Protobuf::FieldCodec_1<::NKDNFDCFNCP*>**)UnitySDK::FromName("", "KHOOCKLJEDE")->GetStaticField(0x17E28);
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
