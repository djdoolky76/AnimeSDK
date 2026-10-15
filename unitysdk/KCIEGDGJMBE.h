#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCIEGDGJMBE;
class OJMPKMNINGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCIEGDGJMBE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CA290)
#define KCIEGDGJMBE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA690)
#define KCIEGDGJMBE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C9D80)
#define KCIEGDGJMBE_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E7C9E00)
#define KCIEGDGJMBE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C9C70)
#define KCIEGDGJMBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9C00)
#define KCIEGDGJMBE_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E7C9DD0)
#define KCIEGDGJMBE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C9E90)
#define KCIEGDGJMBE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C9E30)
#define KCIEGDGJMBE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C9FF0)
#define KCIEGDGJMBE_GLHEHIDAPCN_OFFSET UNITYSDK_OFFSET(0x1E7C9DF0)
#define KCIEGDGJMBE_IDLJAPMKHPF_OFFSET UNITYSDK_OFFSET(0x1E7C9E20)
#define KCIEGDGJMBE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C9B90)
#define KCIEGDGJMBE_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E7C9DE0)
#define KCIEGDGJMBE_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E7C9E10)
#define KCIEGDGJMBE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7CA530)
#define KCIEGDGJMBE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CA460)
#define KCIEGDGJMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C9BF0)
#define KCIEGDGJMBE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CA080)
#define KCIEGDGJMBE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CA0E0)

inline static constexpr unsigned int KCIEGDGJMBE_TypeDefinitionIndex = 25559;

	class KCIEGDGJMBE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::OJMPKMNINGK*>* EHBCNEABANI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* BCECNFBBEPJ; // 0x20
		::System::UInt32 PBPJNDEHDNK; // 0x28
		::System::UInt32 DNKADAFBILN; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::OJMPKMNINGK*>** StaticGet_EEPJDNAMHBL()
		{
			return (::Google::Protobuf::FieldCodec_1<::OJMPKMNINGK*>**)UnitySDK::FromName("", "KCIEGDGJMBE")->GetStaticField(0xF540);
		}

		static ::Google::Protobuf::MessageParser_1<::KCIEGDGJMBE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCIEGDGJMBE*>**)UnitySDK::FromName("", "KCIEGDGJMBE")->GetStaticField(0xF548);
		}

		static ::System::Object** StaticGet_ANFNDOEOGPL()
		{
			return (::System::Object**)UnitySDK::FromName("", "KCIEGDGJMBE")->GetStaticField(0xF550);
		}

		// static const ::System::Object JOKMIFACEIK; // 0x0
		// static const ::System::Object COPKFJJMANI; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object MBCNLBAKJPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCIEGDGJMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCIEGDGJMBE*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCIEGDGJMBE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCIEGDGJMBE*>*(*)())((::PBYTE)hIl2Cpp + KCIEGDGJMBE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCIEGDGJMBE* Clone()
		{
			return ((::KCIEGDGJMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OJMPKMNINGK*>* GLHEHIDAPCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OJMPKMNINGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_GLHEHIDAPCN_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* IDLJAPMKHPF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_IDLJAPMKHPF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCIEGDGJMBE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCIEGDGJMBE*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCIEGDGJMBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCIEGDGJMBE*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCIEGDGJMBE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
