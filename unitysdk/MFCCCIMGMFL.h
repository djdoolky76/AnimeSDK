#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFCCCIMGMFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MFCCCIMGMFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA165A0)
#define MFCCCIMGMFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA16A30)
#define MFCCCIMGMFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA15F40)
#define MFCCCIMGMFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA15E90)
#define MFCCCIMGMFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA15E30)
#define MFCCCIMGMFL_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1EA15F80)
#define MFCCCIMGMFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA160E0)
#define MFCCCIMGMFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA16040)
#define MFCCCIMGMFL_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1EA15F70)
#define MFCCCIMGMFL_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x1EA15FA0)
#define MFCCCIMGMFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA16190)
#define MFCCCIMGMFL_IKGNNJCFDJH_OFFSET UNITYSDK_OFFSET(0x1EA15FF0)
#define MFCCCIMGMFL_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x1EA15F90)
#define MFCCCIMGMFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA15DF0)
#define MFCCCIMGMFL_LJPGHBDPMIF_OFFSET UNITYSDK_OFFSET(0x1EA15FE0)
#define MFCCCIMGMFL_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1EA15FC0)
#define MFCCCIMGMFL_MDBMHFAIIKM_OFFSET UNITYSDK_OFFSET(0x1EA15FB0)
#define MFCCCIMGMFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA168F0)
#define MFCCCIMGMFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA16870)
#define MFCCCIMGMFL_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1EA15FD0)
#define MFCCCIMGMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA15E20)
#define MFCCCIMGMFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA16340)
#define MFCCCIMGMFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA163A0)

inline static constexpr unsigned int MFCCCIMGMFL_TypeDefinitionIndex = 26604;

	class MFCCCIMGMFL : public ::System::Object
	{
	public:
		::System::String* LEPNCGJLGIP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MNFKHFLIAMB; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 GFNEFHEHFOC; // 0x28
		::System::Int64 MFHNPAODGGN; // 0x30
		::System::UInt32 AENFHPAGFOI; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFCCCIMGMFL")->GetStaticField(0x36E70);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LEONFGNGLLB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MFCCCIMGMFL")->GetStaticField(0x36E78);
		}

		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object AJOBLGKNBDC; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		// static const ::System::Object OCLMCCBNGOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFCCCIMGMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFCCCIMGMFL*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCCCIMGMFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFCCCIMGMFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFCCCIMGMFL* Clone()
		{
			return ((::MFCCCIMGMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_CLONE_OFFSET))(this);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDBMHFAIIKM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_MDBMHFAIIKM_OFFSET))(this);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::String* LJPGHBDPMIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_LJPGHBDPMIF_OFFSET))(this);
		}

		::System::Void IKGNNJCFDJH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_IKGNNJCFDJH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFCCCIMGMFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFCCCIMGMFL*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFCCCIMGMFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFCCCIMGMFL*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFCCCIMGMFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
