#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKDNFDCFNCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class PileItem; }
namespace System { class Object; }
namespace System { class String; }

#define NKDNFDCFNCP_BCFNGHLBDLL_OFFSET UNITYSDK_OFFSET(0x1FA18A70)
#define NKDNFDCFNCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA19060)
#define NKDNFDCFNCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA19430)
#define NKDNFDCFNCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA18A30)
#define NKDNFDCFNCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA18950)
#define NKDNFDCFNCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA18910)
#define NKDNFDCFNCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA18C80)
#define NKDNFDCFNCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA18A90)
#define NKDNFDCFNCP_FFPAKAGAGDC_OFFSET UNITYSDK_OFFSET(0x1FA18A60)
#define NKDNFDCFNCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA18E50)
#define NKDNFDCFNCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA188D0)
#define NKDNFDCFNCP_KLFGLKBIMEI_OFFSET UNITYSDK_OFFSET(0x1FA18A80)
#define NKDNFDCFNCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA19260)
#define NKDNFDCFNCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA19150)
#define NKDNFDCFNCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA18900)
#define NKDNFDCFNCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA18EF0)
#define NKDNFDCFNCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA18F50)

inline static constexpr unsigned int NKDNFDCFNCP_TypeDefinitionIndex = 31000;

	class NKDNFDCFNCP : public ::System::Object
	{
	public:
		::Proto::PileItem* OOHMIECCIPM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* LEKOBDNNNDK; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKDNFDCFNCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKDNFDCFNCP*>**)UnitySDK::FromName("", "NKDNFDCFNCP")->GetStaticField(0xD110);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_BAFAEHMLHCF()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "NKDNFDCFNCP")->GetStaticField(0xD118);
		}

		// static const ::System::Object NIMIGEFNLCA; // 0x0
		// static const ::System::Object IPCPPOICJCF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKDNFDCFNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKDNFDCFNCP*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKDNFDCFNCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKDNFDCFNCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKDNFDCFNCP*>*(*)())((::PBYTE)hIl2Cpp + NKDNFDCFNCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKDNFDCFNCP* Clone()
		{
			return ((::NKDNFDCFNCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_CLONE_OFFSET))(this);
		}

		::Proto::PileItem* FFPAKAGAGDC()
		{
			return ((::Proto::PileItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_FFPAKAGAGDC_OFFSET))(this);
		}

		::System::Void BCFNGHLBDLL(::Proto::PileItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PileItem*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_BCFNGHLBDLL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* KLFGLKBIMEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_KLFGLKBIMEI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKDNFDCFNCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKDNFDCFNCP*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKDNFDCFNCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKDNFDCFNCP*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKDNFDCFNCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
