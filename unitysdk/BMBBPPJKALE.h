#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBBPPJKALE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMBBPPJKALE_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1FC6BA80)
#define BMBBPPJKALE_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1FC6BA70)
#define BMBBPPJKALE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC6BFD0)
#define BMBBPPJKALE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C340)
#define BMBBPPJKALE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC6BA20)
#define BMBBPPJKALE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC6B980)
#define BMBBPPJKALE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6B930)
#define BMBBPPJKALE_DDHNLJDLLIO_OFFSET UNITYSDK_OFFSET(0x1FC6BAD0)
#define BMBBPPJKALE_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1FC6BAC0)
#define BMBBPPJKALE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC6BB90)
#define BMBBPPJKALE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC6BAE0)
#define BMBBPPJKALE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC6BCA0)
#define BMBBPPJKALE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC6B8C0)
#define BMBBPPJKALE_KIKPAINIFIO_OFFSET UNITYSDK_OFFSET(0x1FC6BAA0)
#define BMBBPPJKALE_LBDFEENDBBM_OFFSET UNITYSDK_OFFSET(0x1FC6BA90)
#define BMBBPPJKALE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC6C220)
#define BMBBPPJKALE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC6C1C0)
#define BMBBPPJKALE_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1FC6BAB0)
#define BMBBPPJKALE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC6B920)
#define BMBBPPJKALE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC6BDB0)
#define BMBBPPJKALE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC6BE10)

inline static constexpr unsigned int BMBBPPJKALE_TypeDefinitionIndex = 30248;

	class BMBBPPJKALE : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PHHKPOCAPCK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 NDHKOLIPEOB; // 0x24
		::System::UInt32 ODCKBAEKGJG; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MFFOHGDNPCI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BMBBPPJKALE")->GetStaticField(0x58A00);
		}

		static ::Google::Protobuf::MessageParser_1<::BMBBPPJKALE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMBBPPJKALE*>**)UnitySDK::FromName("", "BMBBPPJKALE")->GetStaticField(0x58A08);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object BCLEOGHNMLE; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object EKOKFHOPBEP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMBBPPJKALE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBBPPJKALE*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBBPPJKALE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMBBPPJKALE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMBBPPJKALE*>*(*)())((::PBYTE)hIl2Cpp + BMBBPPJKALE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMBBPPJKALE* Clone()
		{
			return ((::BMBBPPJKALE*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBBPPJKALE_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 LBDFEENDBBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_LBDFEENDBBM_OFFSET))(this);
		}

		::System::Void KIKPAINIFIO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBBPPJKALE_KIKPAINIFIO_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMBBPPJKALE_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DDHNLJDLLIO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_DDHNLJDLLIO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMBBPPJKALE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMBBPPJKALE*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBBPPJKALE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMBBPPJKALE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMBBPPJKALE*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMBBPPJKALE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
