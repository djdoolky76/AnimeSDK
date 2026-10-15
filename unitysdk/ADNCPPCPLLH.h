#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADNCPPCPLLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADNCPPCPLLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDB6C30)
#define ADNCPPCPLLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDB6F90)
#define ADNCPPCPLLH_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1DDB6750)
#define ADNCPPCPLLH_CJHHFNJLPJK_OFFSET UNITYSDK_OFFSET(0x1DDB6730)
#define ADNCPPCPLLH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDB66A0)
#define ADNCPPCPLLH_CMAMJMJBPLC_OFFSET UNITYSDK_OFFSET(0x1DDB6710)
#define ADNCPPCPLLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDB6600)
#define ADNCPPCPLLH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDB65B0)
#define ADNCPPCPLLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDB6810)
#define ADNCPPCPLLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDB6760)
#define ADNCPPCPLLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDB6920)
#define ADNCPPCPLLH_GLFNGDNLLHH_OFFSET UNITYSDK_OFFSET(0x1DDB6720)
#define ADNCPPCPLLH_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1DDB66F0)
#define ADNCPPCPLLH_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1DDB6740)
#define ADNCPPCPLLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDB6540)
#define ADNCPPCPLLH_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1DDB6700)
#define ADNCPPCPLLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDB6E90)
#define ADNCPPCPLLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDB6E30)
#define ADNCPPCPLLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDB65A0)
#define ADNCPPCPLLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDB6A20)
#define ADNCPPCPLLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDB6A80)

inline static constexpr unsigned int ADNCPPCPLLH_TypeDefinitionIndex = 31028;

	class ADNCPPCPLLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBNDKIDDPCE; // 0x18
		::System::UInt32 NJDEKBDJGKO; // 0x20
		::System::UInt32 KBBFPCGLDCN; // 0x24
		::System::UInt32 OGCMNCBOEJG; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CEGLAMNKEIA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "ADNCPPCPLLH")->GetStaticField(0x33090);
		}

		static ::Google::Protobuf::MessageParser_1<::ADNCPPCPLLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ADNCPPCPLLH*>**)UnitySDK::FromName("", "ADNCPPCPLLH")->GetStaticField(0x33098);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object EMINJKMLEME; // 0x0
		// static const ::System::Object CGHPLLKLELP; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADNCPPCPLLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADNCPPCPLLH*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ADNCPPCPLLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ADNCPPCPLLH*>*(*)())((::PBYTE)hIl2Cpp + ADNCPPCPLLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADNCPPCPLLH* Clone()
		{
			return ((::ADNCPPCPLLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 CMAMJMJBPLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CMAMJMJBPLC_OFFSET))(this);
		}

		::System::Void GLFNGDNLLHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_GLFNGDNLLHH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJHHFNJLPJK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CJHHFNJLPJK_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADNCPPCPLLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADNCPPCPLLH*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADNCPPCPLLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADNCPPCPLLH*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADNCPPCPLLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
