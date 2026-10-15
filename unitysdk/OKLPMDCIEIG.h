#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKLPMDCIEIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKLPMDCIEIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE726C0)
#define OKLPMDCIEIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE72910)
#define OKLPMDCIEIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE71DF0)
#define OKLPMDCIEIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE71DB0)
#define OKLPMDCIEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE71DA0)
#define OKLPMDCIEIG_DJIKCJNBEAC_OFFSET UNITYSDK_OFFSET(0x1DE71EA0)
#define OKLPMDCIEIG_ECNOCLNCCCF_OFFSET UNITYSDK_OFFSET(0x1DE71EE0)
#define OKLPMDCIEIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE71F50)
#define OKLPMDCIEIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE71EF0)
#define OKLPMDCIEIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE72240)
#define OKLPMDCIEIG_GPOHIAGGNJK_OFFSET UNITYSDK_OFFSET(0x1DE71ED0)
#define OKLPMDCIEIG_HENOCOFBBAO_OFFSET UNITYSDK_OFFSET(0x1DE71E90)
#define OKLPMDCIEIG_HOJKFJEOMCK_OFFSET UNITYSDK_OFFSET(0x1DE71E80)
#define OKLPMDCIEIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE71D30)
#define OKLPMDCIEIG_JPPIIBEKJGO_OFFSET UNITYSDK_OFFSET(0x1DE71EC0)
#define OKLPMDCIEIG_KGJIPFDNNMF_OFFSET UNITYSDK_OFFSET(0x1DE71EB0)
#define OKLPMDCIEIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE72870)
#define OKLPMDCIEIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE72800)
#define OKLPMDCIEIG_OEGLKHANDGF_OFFSET UNITYSDK_OFFSET(0x1DE71E70)
#define OKLPMDCIEIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE71D90)
#define OKLPMDCIEIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE72490)
#define OKLPMDCIEIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE724F0)

inline static constexpr unsigned int OKLPMDCIEIG_TypeDefinitionIndex = 25574;

	class OKLPMDCIEIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OLNMGJMHBPJ; // 0x18
		::System::UInt32 BKOBDFGHBMK; // 0x1C
		::System::Double AKJCKAOAFJF; // 0x20
		::System::Double BOOBEADPJDE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::OKLPMDCIEIG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKLPMDCIEIG*>**)UnitySDK::FromName("", "OKLPMDCIEIG")->GetStaticField(0x20970);
		}

		// static const ::System::Object FFNFBDEDGOG; // 0x0
		// static const ::System::Object LLGIKEGGBAI; // 0x0
		// static const ::System::Object OJMJAICILHI; // 0x0
		// static const ::System::Object OOEDDNAHPCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKLPMDCIEIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLPMDCIEIG*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKLPMDCIEIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKLPMDCIEIG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKLPMDCIEIG*>*(*)())((::PBYTE)hIl2Cpp + OKLPMDCIEIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKLPMDCIEIG* Clone()
		{
			return ((::OKLPMDCIEIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEGLKHANDGF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_OEGLKHANDGF_OFFSET))(this);
		}

		::System::Void HOJKFJEOMCK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_HOJKFJEOMCK_OFFSET))(this, a1);
		}

		::System::UInt32 HENOCOFBBAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_HENOCOFBBAO_OFFSET))(this);
		}

		::System::Void DJIKCJNBEAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_DJIKCJNBEAC_OFFSET))(this, a1);
		}

		::System::Double KGJIPFDNNMF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_KGJIPFDNNMF_OFFSET))(this);
		}

		::System::Void JPPIIBEKJGO(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_JPPIIBEKJGO_OFFSET))(this, a1);
		}

		::System::Double GPOHIAGGNJK()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_GPOHIAGGNJK_OFFSET))(this);
		}

		::System::Void ECNOCLNCCCF(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_ECNOCLNCCCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKLPMDCIEIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKLPMDCIEIG*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKLPMDCIEIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKLPMDCIEIG*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKLPMDCIEIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
