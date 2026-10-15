#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBFKDPMGFNL;
class LDCFLPGNOJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBFKDPMGFNL_BJOAJMKDPGA_OFFSET UNITYSDK_OFFSET(0x1E334190)
#define FBFKDPMGFNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E334610)
#define FBFKDPMGFNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E334990)
#define FBFKDPMGFNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E334130)
#define FBFKDPMGFNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E334000)
#define FBFKDPMGFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E333F70)
#define FBFKDPMGFNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3341D0)
#define FBFKDPMGFNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3341A0)
#define FBFKDPMGFNL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E334180)
#define FBFKDPMGFNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E334320)
#define FBFKDPMGFNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E333F30)
#define FBFKDPMGFNL_LAOPPFCKNIN_OFFSET UNITYSDK_OFFSET(0x1E334160)
#define FBFKDPMGFNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E334840)
#define FBFKDPMGFNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E334780)
#define FBFKDPMGFNL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E334170)
#define FBFKDPMGFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E333F60)
#define FBFKDPMGFNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E334470)
#define FBFKDPMGFNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3344D0)

inline static constexpr unsigned int FBFKDPMGFNL_TypeDefinitionIndex = 28953;

	class FBFKDPMGFNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LDCFLPGNOJE*>* FBMIIGBAIKL; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MLGJLLHMLOC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::FBFKDPMGFNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBFKDPMGFNL*>**)UnitySDK::FromName("", "FBFKDPMGFNL")->GetStaticField(0x596C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::LDCFLPGNOJE*>** StaticGet_BCBEIKBNFAN()
		{
			return (::Google::Protobuf::FieldCodec_1<::LDCFLPGNOJE*>**)UnitySDK::FromName("", "FBFKDPMGFNL")->GetStaticField(0x596C8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AKFPLJKAKKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FBFKDPMGFNL")->GetStaticField(0x596D0);
		}

		// static const ::System::Object GKOOIGBJPLK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NMAOCCHPHJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBFKDPMGFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFKDPMGFNL*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBFKDPMGFNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBFKDPMGFNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBFKDPMGFNL*>*(*)())((::PBYTE)hIl2Cpp + FBFKDPMGFNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBFKDPMGFNL* Clone()
		{
			return ((::FBFKDPMGFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LDCFLPGNOJE*>* LAOPPFCKNIN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LDCFLPGNOJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_LAOPPFCKNIN_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJOAJMKDPGA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_BJOAJMKDPGA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBFKDPMGFNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBFKDPMGFNL*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBFKDPMGFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFKDPMGFNL*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBFKDPMGFNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
