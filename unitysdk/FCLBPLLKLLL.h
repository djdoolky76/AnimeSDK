#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCLBPLLKLLL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCLBPLLKLLL_ACCFODNGIBM_OFFSET UNITYSDK_OFFSET(0x1F634690)
#define FCLBPLLKLLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6349D0)
#define FCLBPLLKLLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F634CA0)
#define FCLBPLLKLLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F634620)
#define FCLBPLLKLLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6345F0)
#define FCLBPLLKLLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6345E0)
#define FCLBPLLKLLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F634790)
#define FCLBPLLKLLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6346B0)
#define FCLBPLLKLLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F634860)
#define FCLBPLLKLLL_GJOBMJCOBPE_OFFSET UNITYSDK_OFFSET(0x1F634680)
#define FCLBPLLKLLL_HPCAHPOJFCI_OFFSET UNITYSDK_OFFSET(0x1F6346A0)
#define FCLBPLLKLLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6345A0)
#define FCLBPLLKLLL_KDIDNNCPODN_OFFSET UNITYSDK_OFFSET(0x1F634670)
#define FCLBPLLKLLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F634B20)
#define FCLBPLLKLLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F634AE0)
#define FCLBPLLKLLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6345D0)
#define FCLBPLLKLLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F634890)
#define FCLBPLLKLLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6348F0)

inline static constexpr unsigned int FCLBPLLKLLL_TypeDefinitionIndex = 27617;

	class FCLBPLLKLLL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJEGLCJEOKC; // 0x18
		::System::UInt32 NGKCLFFLFHH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FCLBPLLKLLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCLBPLLKLLL*>**)UnitySDK::FromName("", "FCLBPLLKLLL")->GetStaticField(0x58B10);
		}

		// static const ::System::Object IEIFMNNMINA; // 0x0
		// static const ::System::Object NGJDKJLONGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCLBPLLKLLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLBPLLKLLL*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLBPLLKLLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCLBPLLKLLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCLBPLLKLLL*>*(*)())((::PBYTE)hIl2Cpp + FCLBPLLKLLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCLBPLLKLLL* Clone()
		{
			return ((::FCLBPLLKLLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KDIDNNCPODN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_KDIDNNCPODN_OFFSET))(this);
		}

		::System::Void GJOBMJCOBPE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_GJOBMJCOBPE_OFFSET))(this, a1);
		}

		::System::UInt32 ACCFODNGIBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_ACCFODNGIBM_OFFSET))(this);
		}

		::System::Void HPCAHPOJFCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_HPCAHPOJFCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCLBPLLKLLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCLBPLLKLLL*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCLBPLLKLLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCLBPLLKLLL*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCLBPLLKLLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
