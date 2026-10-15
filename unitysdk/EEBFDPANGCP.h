#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEBFDPANGCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define EEBFDPANGCP_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E265500)
#define EEBFDPANGCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E265B20)
#define EEBFDPANGCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E265EB0)
#define EEBFDPANGCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2654D0)
#define EEBFDPANGCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E265410)
#define EEBFDPANGCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2653C0)
#define EEBFDPANGCP_DPKOHJLBEBB_OFFSET UNITYSDK_OFFSET(0x1E265550)
#define EEBFDPANGCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E265600)
#define EEBFDPANGCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E265570)
#define EEBFDPANGCP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E265530)
#define EEBFDPANGCP_FKFCAKCECHL_OFFSET UNITYSDK_OFFSET(0x1E265540)
#define EEBFDPANGCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2657C0)
#define EEBFDPANGCP_IJPLICKGMHC_OFFSET UNITYSDK_OFFSET(0x1E265560)
#define EEBFDPANGCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E265380)
#define EEBFDPANGCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E265D70)
#define EEBFDPANGCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E265CB0)
#define EEBFDPANGCP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E265520)
#define EEBFDPANGCP_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E265510)
#define EEBFDPANGCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2653B0)
#define EEBFDPANGCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E265930)
#define EEBFDPANGCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E265990)

inline static constexpr unsigned int EEBFDPANGCP_TypeDefinitionIndex = 26771;

	class EEBFDPANGCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IPMHBGMIOKK; // 0x18
		::Proto::ItemList* JEDJCPJBEOM; // 0x20
		::System::UInt32 BGMLGHECGBM; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::EEBFDPANGCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEBFDPANGCP*>**)UnitySDK::FromName("", "EEBFDPANGCP")->GetStaticField(0x41220);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JJGEFLHOIMG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "EEBFDPANGCP")->GetStaticField(0x41228);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LFHDOINBFLB; // 0x0
		// static const ::System::Object HPGDFCOBPGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEBFDPANGCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEBFDPANGCP*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEBFDPANGCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEBFDPANGCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEBFDPANGCP*>*(*)())((::PBYTE)hIl2Cpp + EEBFDPANGCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEBFDPANGCP* Clone()
		{
			return ((::EEBFDPANGCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEBFDPANGCP_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEBFDPANGCP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FKFCAKCECHL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_FKFCAKCECHL_OFFSET))(this);
		}

		::Proto::ItemList* DPKOHJLBEBB()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_DPKOHJLBEBB_OFFSET))(this);
		}

		::System::Void IJPLICKGMHC(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_IJPLICKGMHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEBFDPANGCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEBFDPANGCP*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEBFDPANGCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEBFDPANGCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEBFDPANGCP*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEBFDPANGCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
