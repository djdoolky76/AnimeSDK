#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDFJEJPFCGK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NDFJEJPFCGK_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1FE27090)
#define NDFJEJPFCGK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE275B0)
#define NDFJEJPFCGK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE278D0)
#define NDFJEJPFCGK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE27010)
#define NDFJEJPFCGK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE26FA0)
#define NDFJEJPFCGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE26F90)
#define NDFJEJPFCGK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE27250)
#define NDFJEJPFCGK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE270D0)
#define NDFJEJPFCGK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FE270C0)
#define NDFJEJPFCGK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE273D0)
#define NDFJEJPFCGK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE26F50)
#define NDFJEJPFCGK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE27710)
#define NDFJEJPFCGK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE27680)
#define NDFJEJPFCGK_NGBNPMPMDEL_OFFSET UNITYSDK_OFFSET(0x1FE270A0)
#define NDFJEJPFCGK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FE270B0)
#define NDFJEJPFCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE26F80)
#define NDFJEJPFCGK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE27470)
#define NDFJEJPFCGK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE274D0)

inline static constexpr unsigned int NDFJEJPFCGK_TypeDefinitionIndex = 31056;

	class NDFJEJPFCGK : public ::System::Object
	{
	public:
		::Proto::ItemList* MIEINLKPIMJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NDFJEJPFCGK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDFJEJPFCGK*>**)UnitySDK::FromName("", "NDFJEJPFCGK")->GetStaticField(0x68720);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDFJEJPFCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDFJEJPFCGK*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDFJEJPFCGK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDFJEJPFCGK*>*(*)())((::PBYTE)hIl2Cpp + NDFJEJPFCGK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDFJEJPFCGK* Clone()
		{
			return ((::NDFJEJPFCGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CACOAPFOAAM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CACOAPFOAAM_OFFSET))(this);
		}

		::System::Void NGBNPMPMDEL(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_NGBNPMPMDEL_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDFJEJPFCGK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDFJEJPFCGK*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDFJEJPFCGK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDFJEJPFCGK*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDFJEJPFCGK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
