#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMGCEMNNPBM;
class JBHLNAHOJOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMGCEMNNPBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4A59A0)
#define GMGCEMNNPBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A5CE0)
#define GMGCEMNNPBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4A54C0)
#define GMGCEMNNPBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4A5390)
#define GMGCEMNNPBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A5300)
#define GMGCEMNNPBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4A5560)
#define GMGCEMNNPBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4A5530)
#define GMGCEMNNPBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4A5500)
#define GMGCEMNNPBM_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1E4A5520)
#define GMGCEMNNPBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4A56B0)
#define GMGCEMNNPBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4A52C0)
#define GMGCEMNNPBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4A5B90)
#define GMGCEMNNPBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4A5AD0)
#define GMGCEMNNPBM_MPHIMCMBJGC_OFFSET UNITYSDK_OFFSET(0x1E4A5510)
#define GMGCEMNNPBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4A54F0)
#define GMGCEMNNPBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4A52F0)
#define GMGCEMNNPBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4A5800)
#define GMGCEMNNPBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4A5860)

inline static constexpr unsigned int GMGCEMNNPBM_TypeDefinitionIndex = 26767;

	class GMGCEMNNPBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>* JIHOHBEMIID; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::GMGCEMNNPBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GMGCEMNNPBM*>**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x1EBB0);
		}

		static ::Google::Protobuf::FieldCodec_1<::JBHLNAHOJOH*>** StaticGet_LCOCPCGLFKF()
		{
			return (::Google::Protobuf::FieldCodec_1<::JBHLNAHOJOH*>**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x1EBB8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GMGCEMNNPBM")->GetStaticField(0x1EBC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HILCNCKAGFK; // 0x0
		// static const ::System::Object LFHDOINBFLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMGCEMNNPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GMGCEMNNPBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GMGCEMNNPBM*>*(*)())((::PBYTE)hIl2Cpp + GMGCEMNNPBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMGCEMNNPBM* Clone()
		{
			return ((::GMGCEMNNPBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>* MPHIMCMBJGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JBHLNAHOJOH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MPHIMCMBJGC_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_FKFCAKCECHL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMGCEMNNPBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMGCEMNNPBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMGCEMNNPBM*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMGCEMNNPBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
