#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGPFIAPLOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEGPFIAPLOO_ADONKDFHKBB_OFFSET UNITYSDK_OFFSET(0x1E901C10)
#define LEGPFIAPLOO_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1E901BB0)
#define LEGPFIAPLOO_BMJNOMBANPN_OFFSET UNITYSDK_OFFSET(0x1E901BE0)
#define LEGPFIAPLOO_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1E901BA0)
#define LEGPFIAPLOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9021A0)
#define LEGPFIAPLOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E902550)
#define LEGPFIAPLOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E901B50)
#define LEGPFIAPLOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E901A50)
#define LEGPFIAPLOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9019C0)
#define LEGPFIAPLOO_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E901BD0)
#define LEGPFIAPLOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E901C80)
#define LEGPFIAPLOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E901C20)
#define LEGPFIAPLOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E901D20)
#define LEGPFIAPLOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E901950)
#define LEGPFIAPLOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9023D0)
#define LEGPFIAPLOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E902350)
#define LEGPFIAPLOO_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E901BC0)
#define LEGPFIAPLOO_NHLGPAAKEJD_OFFSET UNITYSDK_OFFSET(0x1E901C00)
#define LEGPFIAPLOO_ODMPMIOECMF_OFFSET UNITYSDK_OFFSET(0x1E901BF0)
#define LEGPFIAPLOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9019B0)
#define LEGPFIAPLOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E901F00)
#define LEGPFIAPLOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E901F60)

inline static constexpr unsigned int LEGPFIAPLOO_TypeDefinitionIndex = 29478;

	class LEGPFIAPLOO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FDJMHALCAMG; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGCJAODKJFK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 MJIMFDKFGDE; // 0x28
		::System::Boolean BIFOCPDIOBP; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 ODCKBAEKGJG; // 0x30
		static ::Google::Protobuf::MessageParser_1<::LEGPFIAPLOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEGPFIAPLOO*>**)UnitySDK::FromName("", "LEGPFIAPLOO")->GetStaticField(0x316B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CIHLCECLEHB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LEGPFIAPLOO")->GetStaticField(0x316B8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KMKPCNECENO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LEGPFIAPLOO")->GetStaticField(0x316C0);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object KLCJLOABNBH; // 0x0
		// static const ::System::Object OJEDECBAMOI; // 0x0
		// static const ::System::Object MAKPBLFEMOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEGPFIAPLOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEGPFIAPLOO*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGPFIAPLOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEGPFIAPLOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEGPFIAPLOO*>*(*)())((::PBYTE)hIl2Cpp + LEGPFIAPLOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEGPFIAPLOO* Clone()
		{
			return ((::LEGPFIAPLOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean BMJNOMBANPN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_BMJNOMBANPN_OFFSET))(this);
		}

		::System::Void ODMPMIOECMF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_ODMPMIOECMF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NHLGPAAKEJD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_NHLGPAAKEJD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADONKDFHKBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_ADONKDFHKBB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEGPFIAPLOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEGPFIAPLOO*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEGPFIAPLOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEGPFIAPLOO*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEGPFIAPLOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
