#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPBMGIOIHEI;
class NOAGHDALEJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOAGHDALEJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB59770)
#define NOAGHDALEJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB59B10)
#define NOAGHDALEJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB592C0)
#define NOAGHDALEJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB59200)
#define NOAGHDALEJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB591B0)
#define NOAGHDALEJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB59470)
#define NOAGHDALEJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB59320)
#define NOAGHDALEJE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB59310)
#define NOAGHDALEJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB59590)
#define NOAGHDALEJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB59170)
#define NOAGHDALEJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB59940)
#define NOAGHDALEJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB598A0)
#define NOAGHDALEJE_MJOPELGMGPM_OFFSET UNITYSDK_OFFSET(0x1EB592F0)
#define NOAGHDALEJE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB59300)
#define NOAGHDALEJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB591A0)
#define NOAGHDALEJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB59600)
#define NOAGHDALEJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB59660)

inline static constexpr unsigned int NOAGHDALEJE_TypeDefinitionIndex = 29025;

	class NOAGHDALEJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* EFMGBOIFOCO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NOAGHDALEJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOAGHDALEJE*>**)UnitySDK::FromName("", "NOAGHDALEJE")->GetStaticField(0xA9F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>** StaticGet_KOJIJONHFNF()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPBMGIOIHEI*>**)UnitySDK::FromName("", "NOAGHDALEJE")->GetStaticField(0xA9F8);
		}

		// static const ::System::Object DBKNLADGHCI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOAGHDALEJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOAGHDALEJE*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOAGHDALEJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOAGHDALEJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOAGHDALEJE*>*(*)())((::PBYTE)hIl2Cpp + NOAGHDALEJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOAGHDALEJE* Clone()
		{
			return ((::NOAGHDALEJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>* MJOPELGMGPM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPBMGIOIHEI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_MJOPELGMGPM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOAGHDALEJE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOAGHDALEJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOAGHDALEJE*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOAGHDALEJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOAGHDALEJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOAGHDALEJE*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOAGHDALEJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
