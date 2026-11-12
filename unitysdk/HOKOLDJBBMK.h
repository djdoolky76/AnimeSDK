#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKPHAFPGDLO;
class EHPLFHLNMIF;
class HOKOLDJBBMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOKOLDJBBMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8E94F0)
#define HOKOLDJBBMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E9980)
#define HOKOLDJBBMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8E9000)
#define HOKOLDJBBMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8E8ED0)
#define HOKOLDJBBMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E8E80)
#define HOKOLDJBBMK_EFNJHGBFJME_OFFSET UNITYSDK_OFFSET(0x1F8E9040)
#define HOKOLDJBBMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8E90B0)
#define HOKOLDJBBMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8E9080)
#define HOKOLDJBBMK_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1F8E9060)
#define HOKOLDJBBMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8E9290)
#define HOKOLDJBBMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8E8E40)
#define HOKOLDJBBMK_LOCCJAGBABG_OFFSET UNITYSDK_OFFSET(0x1F8E9030)
#define HOKOLDJBBMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8E9770)
#define HOKOLDJBBMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8E9660)
#define HOKOLDJBBMK_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1F8E9050)
#define HOKOLDJBBMK_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1F8E9070)
#define HOKOLDJBBMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8E8E70)
#define HOKOLDJBBMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8E9330)
#define HOKOLDJBBMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8E9390)

inline static constexpr unsigned int HOKOLDJBBMK_TypeDefinitionIndex = 28739;

	class HOKOLDJBBMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EHPLFHLNMIF*>* CBFGBDBJHID; // 0x18
		::DKPHAFPGDLO* DBDPKDBJLPL; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::EHPLFHLNMIF*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::EHPLFHLNMIF*>**)UnitySDK::FromName("", "HOKOLDJBBMK")->GetStaticField(0x408F0);
		}

		static ::Google::Protobuf::MessageParser_1<::HOKOLDJBBMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HOKOLDJBBMK*>**)UnitySDK::FromName("", "HOKOLDJBBMK")->GetStaticField(0x408F8);
		}

		// static const ::System::Object DPKHAIHAEPC; // 0x0
		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOKOLDJBBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOKOLDJBBMK*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOKOLDJBBMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HOKOLDJBBMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HOKOLDJBBMK*>*(*)())((::PBYTE)hIl2Cpp + HOKOLDJBBMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOKOLDJBBMK* Clone()
		{
			return ((::HOKOLDJBBMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_CLONE_OFFSET))(this);
		}

		::DKPHAFPGDLO* LOCCJAGBABG()
		{
			return ((::DKPHAFPGDLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_LOCCJAGBABG_OFFSET))(this);
		}

		::System::Void EFNJHGBFJME(::DKPHAFPGDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DKPHAFPGDLO*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_EFNJHGBFJME_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EHPLFHLNMIF*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EHPLFHLNMIF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOKOLDJBBMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOKOLDJBBMK*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOKOLDJBBMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOKOLDJBBMK*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOKOLDJBBMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
