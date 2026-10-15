#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLODLKIBCIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLODLKIBCIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF398E0)
#define BLODLKIBCIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF39CF0)
#define BLODLKIBCIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF39390)
#define BLODLKIBCIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF392F0)
#define BLODLKIBCIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF392B0)
#define BLODLKIBCIE_EMLAFAFLCNI_OFFSET UNITYSDK_OFFSET(0x1DF393F0)
#define BLODLKIBCIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF39570)
#define BLODLKIBCIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF39410)
#define BLODLKIBCIE_FNHAGPPLBML_OFFSET UNITYSDK_OFFSET(0x1DF39400)
#define BLODLKIBCIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF396A0)
#define BLODLKIBCIE_HPNPEAJMCFK_OFFSET UNITYSDK_OFFSET(0x1DF393E0)
#define BLODLKIBCIE_JAIBDNHIIEP_OFFSET UNITYSDK_OFFSET(0x1DF393C0)
#define BLODLKIBCIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF39270)
#define BLODLKIBCIE_LHHNFAAPDNJ_OFFSET UNITYSDK_OFFSET(0x1DF393D0)
#define BLODLKIBCIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF39B10)
#define BLODLKIBCIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF39A60)
#define BLODLKIBCIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF392A0)
#define BLODLKIBCIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF39710)
#define BLODLKIBCIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF39770)

inline static constexpr unsigned int BLODLKIBCIE_TypeDefinitionIndex = 29775;

	class BLODLKIBCIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::BLODLKIBCIE*>* FOFJEFMNNLN; // 0x18
		::System::UInt32 HCEBEMOCOPC; // 0x20
		::System::UInt32 FKMMNCJPEBA; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::BLODLKIBCIE*>** StaticGet_OMPADKFEDJH()
		{
			return (::Google::Protobuf::FieldCodec_1<::BLODLKIBCIE*>**)UnitySDK::FromName("", "BLODLKIBCIE")->GetStaticField(0x599D0);
		}

		static ::Google::Protobuf::MessageParser_1<::BLODLKIBCIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLODLKIBCIE*>**)UnitySDK::FromName("", "BLODLKIBCIE")->GetStaticField(0x599D8);
		}

		// static const ::System::Object EMDNBPGMNCO; // 0x0
		// static const ::System::Object LPLDFBNBHCH; // 0x0
		// static const ::System::Object FCNFNPJNEFL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLODLKIBCIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLODLKIBCIE*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLODLKIBCIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLODLKIBCIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLODLKIBCIE*>*(*)())((::PBYTE)hIl2Cpp + BLODLKIBCIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLODLKIBCIE* Clone()
		{
			return ((::BLODLKIBCIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JAIBDNHIIEP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_JAIBDNHIIEP_OFFSET))(this);
		}

		::System::Void LHHNFAAPDNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLODLKIBCIE_LHHNFAAPDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 HPNPEAJMCFK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_HPNPEAJMCFK_OFFSET))(this);
		}

		::System::Void EMLAFAFLCNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLODLKIBCIE_EMLAFAFLCNI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BLODLKIBCIE*>* FNHAGPPLBML()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BLODLKIBCIE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_FNHAGPPLBML_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLODLKIBCIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLODLKIBCIE*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLODLKIBCIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLODLKIBCIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLODLKIBCIE*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLODLKIBCIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
