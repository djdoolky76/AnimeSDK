#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHODCLCAIIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class HeliobusChallengeLineup; }
namespace System { class Object; }
namespace System { class String; }

#define KHODCLCAIIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84DB50)
#define KHODCLCAIIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84DE70)
#define KHODCLCAIIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84D440)
#define KHODCLCAIIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84D3D0)
#define KHODCLCAIIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84D3C0)
#define KHODCLCAIIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84D650)
#define KHODCLCAIIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84D4E0)
#define KHODCLCAIIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84D920)
#define KHODCLCAIIP_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E84D4C0)
#define KHODCLCAIIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E84D380)
#define KHODCLCAIIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84DCA0)
#define KHODCLCAIIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84DBB0)
#define KHODCLCAIIP_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E84D4D0)
#define KHODCLCAIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84D3B0)
#define KHODCLCAIIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84DA60)
#define KHODCLCAIIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84DAC0)

inline static constexpr unsigned int KHODCLCAIIP_TypeDefinitionIndex = 29815;

	class KHODCLCAIIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Proto::HeliobusChallengeLineup* MNJNMPKLFAI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KHODCLCAIIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHODCLCAIIP*>**)UnitySDK::FromName("", "KHODCLCAIIP")->GetStaticField(0x17DA0);
		}

		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHODCLCAIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHODCLCAIIP*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHODCLCAIIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHODCLCAIIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHODCLCAIIP*>*(*)())((::PBYTE)hIl2Cpp + KHODCLCAIIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHODCLCAIIP* Clone()
		{
			return ((::KHODCLCAIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_CLONE_OFFSET))(this);
		}

		::Proto::HeliobusChallengeLineup* JIFPIGBJFEH()
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::Proto::HeliobusChallengeLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHODCLCAIIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHODCLCAIIP*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHODCLCAIIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHODCLCAIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHODCLCAIIP*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHODCLCAIIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
