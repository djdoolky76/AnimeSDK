#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFPGDJJKGKJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFPGDJJKGKJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE4CCF0)
#define OFPGDJJKGKJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE4D110)
#define OFPGDJJKGKJ_CJHHFNJLPJK_OFFSET UNITYSDK_OFFSET(0x1DE4C7F0)
#define OFPGDJJKGKJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE4C740)
#define OFPGDJJKGKJ_CMAMJMJBPLC_OFFSET UNITYSDK_OFFSET(0x1DE4C7D0)
#define OFPGDJJKGKJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE4C6A0)
#define OFPGDJJKGKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C650)
#define OFPGDJJKGKJ_DPIOAAFPPEK_OFFSET UNITYSDK_OFFSET(0x1DE4C7A0)
#define OFPGDJJKGKJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE4C8D0)
#define OFPGDJJKGKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE4C820)
#define OFPGDJJKGKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE4C950)
#define OFPGDJJKGKJ_GLFNGDNLLHH_OFFSET UNITYSDK_OFFSET(0x1DE4C7E0)
#define OFPGDJJKGKJ_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1DE4C7B0)
#define OFPGDJJKGKJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE4C5E0)
#define OFPGDJJKGKJ_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1DE4C7C0)
#define OFPGDJJKGKJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE4CFE0)
#define OFPGDJJKGKJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE4CF70)
#define OFPGDJJKGKJ_OEABLEOBOPD_OFFSET UNITYSDK_OFFSET(0x1DE4C800)
#define OFPGDJJKGKJ_OEFLLEAFIEP_OFFSET UNITYSDK_OFFSET(0x1DE4C810)
#define OFPGDJJKGKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE4C640)
#define OFPGDJJKGKJ_PGAGMDOFFMM_OFFSET UNITYSDK_OFFSET(0x1DE4C790)
#define OFPGDJJKGKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE4CA70)
#define OFPGDJJKGKJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE4CAD0)

	class OFPGDJJKGKJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EBNDKIDDPCE; // 0x18
		::System::UInt32 NJDEKBDJGKO; // 0x20
		::System::UInt32 BFBHEDBAJJD; // 0x24
		::System::UInt32 MJNIFGEILPC; // 0x28
		::System::UInt32 KBBFPCGLDCN; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFPGDJJKGKJ")->GetStaticField(0x17BB0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CEGLAMNKEIA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OFPGDJJKGKJ")->GetStaticField(0x17BB8);
		}

		// static const ::System::Object NBBHCHMPLAK; // 0x0
		// static const ::System::Object CLGAAGPCNGI; // 0x0
		// static const ::System::Object EMINJKMLEME; // 0x0
		// static const ::System::Object CGHPLLKLELP; // 0x0
		// static const ::System::Object LGMIMHAJDNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFPGDJJKGKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFPGDJJKGKJ*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFPGDJJKGKJ* Clone()
		{
			return ((::OFPGDJJKGKJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 PGAGMDOFFMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_PGAGMDOFFMM_OFFSET))(this);
		}

		::System::Void DPIOAAFPPEK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_DPIOAAFPPEK_OFFSET))(this, a1);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::UInt32 CMAMJMJBPLC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CMAMJMJBPLC_OFFSET))(this);
		}

		::System::Void GLFNGDNLLHH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_GLFNGDNLLHH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJHHFNJLPJK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CJHHFNJLPJK_OFFSET))(this);
		}

		::System::UInt32 OEABLEOBOPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_OEABLEOBOPD_OFFSET))(this);
		}

		::System::Void OEFLLEAFIEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_OEFLLEAFIEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFPGDJJKGKJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFPGDJJKGKJ*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFPGDJJKGKJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFPGDJJKGKJ*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFPGDJJKGKJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
