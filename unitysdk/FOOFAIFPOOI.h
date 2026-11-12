#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCOHBABCHAI;
class FOOFAIFPOOI;
class GLMGJFEEJHD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOOFAIFPOOI_BANGDNOLHCG_OFFSET UNITYSDK_OFFSET(0x1F6EDA00)
#define FOOFAIFPOOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6EDF80)
#define FOOFAIFPOOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6EE3E0)
#define FOOFAIFPOOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6ED990)
#define FOOFAIFPOOI_CMKEJPJPIEA_OFFSET UNITYSDK_OFFSET(0x1F6EDA20)
#define FOOFAIFPOOI_COFJODHIIOJ_OFFSET UNITYSDK_OFFSET(0x1F6ED9E0)
#define FOOFAIFPOOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6ED800)
#define FOOFAIFPOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6ED7B0)
#define FOOFAIFPOOI_DBHOFBDJICK_OFFSET UNITYSDK_OFFSET(0x1F6ED9F0)
#define FOOFAIFPOOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6EDA90)
#define FOOFAIFPOOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6EDA30)
#define FOOFAIFPOOI_GCAELGNFDDK_OFFSET UNITYSDK_OFFSET(0x1F6EDA10)
#define FOOFAIFPOOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6EDD00)
#define FOOFAIFPOOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6ED740)
#define FOOFAIFPOOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6EE1C0)
#define FOOFAIFPOOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6EE080)
#define FOOFAIFPOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6ED7A0)
#define FOOFAIFPOOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6EDDB0)
#define FOOFAIFPOOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6EDE10)

inline static constexpr unsigned int FOOFAIFPOOI_TypeDefinitionIndex = 32026;

	class FOOFAIFPOOI : public ::System::Object
	{
	public:
		::CCOHBABCHAI* NOKHPLNEFPD; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::GLMGJFEEJHD*>* IEHGNAKLACC; // 0x18
		::GLMGJFEEJHD* AEGCKDCKOOF; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::GLMGJFEEJHD*>** StaticGet_MBAGGFGCGEG()
		{
			return (::Google::Protobuf::FieldCodec_1<::GLMGJFEEJHD*>**)UnitySDK::FromName("", "FOOFAIFPOOI")->GetStaticField(0x513A0);
		}

		static ::Google::Protobuf::MessageParser_1<::FOOFAIFPOOI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOOFAIFPOOI*>**)UnitySDK::FromName("", "FOOFAIFPOOI")->GetStaticField(0x513A8);
		}

		// static const ::System::Object NDELDCLFFBK; // 0x0
		// static const ::System::Object DHJOBNDNJAM; // 0x0
		// static const ::System::Object GJJEKKDCHHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOOFAIFPOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOOFAIFPOOI*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOOFAIFPOOI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOOFAIFPOOI*>*(*)())((::PBYTE)hIl2Cpp + FOOFAIFPOOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOOFAIFPOOI* Clone()
		{
			return ((::FOOFAIFPOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CLONE_OFFSET))(this);
		}

		::CCOHBABCHAI* COFJODHIIOJ()
		{
			return ((::CCOHBABCHAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_COFJODHIIOJ_OFFSET))(this);
		}

		::System::Void DBHOFBDJICK(::CCOHBABCHAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CCOHBABCHAI*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_DBHOFBDJICK_OFFSET))(this, a1);
		}

		::GLMGJFEEJHD* BANGDNOLHCG()
		{
			return ((::GLMGJFEEJHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_BANGDNOLHCG_OFFSET))(this);
		}

		::System::Void GCAELGNFDDK(::GLMGJFEEJHD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLMGJFEEJHD*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_GCAELGNFDDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::GLMGJFEEJHD*>* CMKEJPJPIEA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::GLMGJFEEJHD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CMKEJPJPIEA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOOFAIFPOOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOOFAIFPOOI*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOOFAIFPOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOOFAIFPOOI*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOOFAIFPOOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
