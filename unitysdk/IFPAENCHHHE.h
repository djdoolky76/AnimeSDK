#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFHILPANBNL.h"
#include "unitysdk/System/Object.h"
class IFPAENCHHHE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFPAENCHHHE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F967530)
#define IFPAENCHHHE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9678F0)
#define IFPAENCHHHE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F967090)
#define IFPAENCHHHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F967000)
#define IFPAENCHHHE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F966FC0)
#define IFPAENCHHHE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F967240)
#define IFPAENCHHHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9670F0)
#define IFPAENCHHHE_GBPGLIJAEIP_OFFSET UNITYSDK_OFFSET(0x1F9670E0)
#define IFPAENCHHHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F967360)
#define IFPAENCHHHE_HKCDIKLLOGE_OFFSET UNITYSDK_OFFSET(0x1F9670D0)
#define IFPAENCHHHE_JCFGJEMIJCL_OFFSET UNITYSDK_OFFSET(0x1F9670C0)
#define IFPAENCHHHE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F966F80)
#define IFPAENCHHHE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F967730)
#define IFPAENCHHHE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F967690)
#define IFPAENCHHHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F966FB0)
#define IFPAENCHHHE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9673D0)
#define IFPAENCHHHE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F967430)

inline static constexpr unsigned int IFPAENCHHHE_TypeDefinitionIndex = 29613;

	class IFPAENCHHHE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* FLAMEAGFLPG; // 0x18
		::JFHILPANBNL MNEPJJBFBBO; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_LOLKEKDMBHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "IFPAENCHHHE")->GetStaticField(0x486E0);
		}

		static ::Google::Protobuf::MessageParser_1<::IFPAENCHHHE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFPAENCHHHE*>**)UnitySDK::FromName("", "IFPAENCHHHE")->GetStaticField(0x486E8);
		}

		// static const ::System::Object HOILJLKDOGN; // 0x0
		// static const ::System::Object HJBIINDNJFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFPAENCHHHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFPAENCHHHE*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFPAENCHHHE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFPAENCHHHE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFPAENCHHHE*>*(*)())((::PBYTE)hIl2Cpp + IFPAENCHHHE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFPAENCHHHE* Clone()
		{
			return ((::IFPAENCHHHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* JCFGJEMIJCL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_JCFGJEMIJCL_OFFSET))(this);
		}

		::JFHILPANBNL HKCDIKLLOGE()
		{
			return ((::JFHILPANBNL(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_HKCDIKLLOGE_OFFSET))(this);
		}

		::System::Void GBPGLIJAEIP(::JFHILPANBNL a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFHILPANBNL))((::PBYTE)hIl2Cpp + IFPAENCHHHE_GBPGLIJAEIP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFPAENCHHHE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFPAENCHHHE*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFPAENCHHHE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFPAENCHHHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFPAENCHHHE*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFPAENCHHHE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
