#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMEMIDKDAFG;
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

#define PMEMIDKDAFG_CACOAPFOAAM_OFFSET UNITYSDK_OFFSET(0x1DF7D4D0)
#define PMEMIDKDAFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF7D950)
#define PMEMIDKDAFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7DCE0)
#define PMEMIDKDAFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF7D4A0)
#define PMEMIDKDAFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF7D410)
#define PMEMIDKDAFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D3D0)
#define PMEMIDKDAFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF7D650)
#define PMEMIDKDAFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF7D500)
#define PMEMIDKDAFG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF7D4F0)
#define PMEMIDKDAFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF7D770)
#define PMEMIDKDAFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF7D390)
#define PMEMIDKDAFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7DB20)
#define PMEMIDKDAFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF7DA80)
#define PMEMIDKDAFG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF7D4E0)
#define PMEMIDKDAFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF7D3C0)
#define PMEMIDKDAFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF7D7E0)
#define PMEMIDKDAFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF7D840)

inline static constexpr unsigned int PMEMIDKDAFG_TypeDefinitionIndex = 26416;

	class PMEMIDKDAFG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* MIEINLKPIMJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PMEMIDKDAFG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMEMIDKDAFG*>**)UnitySDK::FromName("", "PMEMIDKDAFG")->GetStaticField(0x3FA60);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>** StaticGet_EDEMPAMDAFD()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::PileItem*>**)UnitySDK::FromName("", "PMEMIDKDAFG")->GetStaticField(0x3FA68);
		}

		// static const ::System::Object DFABHHAPAEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMEMIDKDAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEMIDKDAFG*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMEMIDKDAFG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMEMIDKDAFG*>*(*)())((::PBYTE)hIl2Cpp + PMEMIDKDAFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMEMIDKDAFG* Clone()
		{
			return ((::PMEMIDKDAFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>* CACOAPFOAAM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::PileItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CACOAPFOAAM_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMEMIDKDAFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMEMIDKDAFG*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMEMIDKDAFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEMIDKDAFG*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMEMIDKDAFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
