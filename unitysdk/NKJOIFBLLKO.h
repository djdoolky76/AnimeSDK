#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPPIBFOLFKN;
class NKJOIFBLLKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKJOIFBLLKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB59B00)
#define NKJOIFBLLKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB59EA0)
#define NKJOIFBLLKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB59660)
#define NKJOIFBLLKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB595A0)
#define NKJOIFBLLKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB59550)
#define NKJOIFBLLKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB59810)
#define NKJOIFBLLKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB596C0)
#define NKJOIFBLLKO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB596B0)
#define NKJOIFBLLKO_FLOMOJCAHMA_OFFSET UNITYSDK_OFFSET(0x1EB59690)
#define NKJOIFBLLKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB59930)
#define NKJOIFBLLKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB59510)
#define NKJOIFBLLKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB59CD0)
#define NKJOIFBLLKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB59C30)
#define NKJOIFBLLKO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB596A0)
#define NKJOIFBLLKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB59540)
#define NKJOIFBLLKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB599A0)
#define NKJOIFBLLKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB59A00)

inline static constexpr unsigned int NKJOIFBLLKO_TypeDefinitionIndex = 31976;

	class NKJOIFBLLKO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EPPIBFOLFKN*>* IINMGHBPOGJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NKJOIFBLLKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NKJOIFBLLKO*>**)UnitySDK::FromName("", "NKJOIFBLLKO")->GetStaticField(0x661A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::EPPIBFOLFKN*>** StaticGet_IAALBJAADFK()
		{
			return (::Google::Protobuf::FieldCodec_1<::EPPIBFOLFKN*>**)UnitySDK::FromName("", "NKJOIFBLLKO")->GetStaticField(0x661A8);
		}

		// static const ::System::Object GJJBLMFLLOA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKJOIFBLLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKJOIFBLLKO*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKJOIFBLLKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NKJOIFBLLKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NKJOIFBLLKO*>*(*)())((::PBYTE)hIl2Cpp + NKJOIFBLLKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKJOIFBLLKO* Clone()
		{
			return ((::NKJOIFBLLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EPPIBFOLFKN*>* FLOMOJCAHMA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EPPIBFOLFKN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_FLOMOJCAHMA_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKJOIFBLLKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKJOIFBLLKO*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKJOIFBLLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKJOIFBLLKO*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKJOIFBLLKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
