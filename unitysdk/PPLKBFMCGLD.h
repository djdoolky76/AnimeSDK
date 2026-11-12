#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDBCDHIOKEG;
class PPLKBFMCGLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPLKBFMCGLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F28FD80)
#define PPLKBFMCGLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F290100)
#define PPLKBFMCGLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F28F870)
#define PPLKBFMCGLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F28F7E0)
#define PPLKBFMCGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F28F7A0)
#define PPLKBFMCGLD_DEHMBEDFDEC_OFFSET UNITYSDK_OFFSET(0x1F28F8D0)
#define PPLKBFMCGLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F28FA80)
#define PPLKBFMCGLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F28F8F0)
#define PPLKBFMCGLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F28FBB0)
#define PPLKBFMCGLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F28F730)
#define PPLKBFMCGLD_KJAPCFAKOAJ_OFFSET UNITYSDK_OFFSET(0x1F28F8C0)
#define PPLKBFMCGLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F28FF30)
#define PPLKBFMCGLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F28FE90)
#define PPLKBFMCGLD_MJMBNPOBAEG_OFFSET UNITYSDK_OFFSET(0x1F28F8E0)
#define PPLKBFMCGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F28F790)
#define PPLKBFMCGLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F28FC20)
#define PPLKBFMCGLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F28FC80)

inline static constexpr unsigned int PPLKBFMCGLD_TypeDefinitionIndex = 35768;

	class PPLKBFMCGLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* JFDKGKMNLIH; // 0x18
		::System::UInt32 AGPENEEMMGD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PPLKBFMCGLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPLKBFMCGLD*>**)UnitySDK::FromName("", "PPLKBFMCGLD")->GetStaticField(0x499A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>** StaticGet_ONFFGAGCDBJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::IDBCDHIOKEG*>**)UnitySDK::FromName("", "PPLKBFMCGLD")->GetStaticField(0x499A8);
		}

		// static const ::System::Object CFBIBJJFPCP; // 0x0
		// static const ::System::Object BDBOPPOJIEA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPLKBFMCGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPLKBFMCGLD*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPLKBFMCGLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPLKBFMCGLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPLKBFMCGLD*>*(*)())((::PBYTE)hIl2Cpp + PPLKBFMCGLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPLKBFMCGLD* Clone()
		{
			return ((::PPLKBFMCGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJAPCFAKOAJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_KJAPCFAKOAJ_OFFSET))(this);
		}

		::System::Void DEHMBEDFDEC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_DEHMBEDFDEC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>* MJMBNPOBAEG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IDBCDHIOKEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_MJMBNPOBAEG_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPLKBFMCGLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPLKBFMCGLD*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPLKBFMCGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPLKBFMCGLD*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPLKBFMCGLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
