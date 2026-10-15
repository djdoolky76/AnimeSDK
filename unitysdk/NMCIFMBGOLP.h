#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class NMCIFMBGOLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMCIFMBGOLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB413E0)
#define NMCIFMBGOLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB41680)
#define NMCIFMBGOLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB40D70)
#define NMCIFMBGOLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB40D00)
#define NMCIFMBGOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB40CF0)
#define NMCIFMBGOLP_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1EB40DF0)
#define NMCIFMBGOLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB40F80)
#define NMCIFMBGOLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB40E10)
#define NMCIFMBGOLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB41250)
#define NMCIFMBGOLP_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1EB40E00)
#define NMCIFMBGOLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB40CB0)
#define NMCIFMBGOLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB414D0)
#define NMCIFMBGOLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB41440)
#define NMCIFMBGOLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB40CE0)
#define NMCIFMBGOLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB412F0)
#define NMCIFMBGOLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB41350)

inline static constexpr unsigned int NMCIFMBGOLP_TypeDefinitionIndex = 33838;

	class NMCIFMBGOLP : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NMCIFMBGOLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMCIFMBGOLP*>**)UnitySDK::FromName("", "NMCIFMBGOLP")->GetStaticField(0x6A2D0);
		}

		// static const ::System::Object EOPEFMJDFKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMCIFMBGOLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCIFMBGOLP*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMCIFMBGOLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMCIFMBGOLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMCIFMBGOLP*>*(*)())((::PBYTE)hIl2Cpp + NMCIFMBGOLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMCIFMBGOLP* Clone()
		{
			return ((::NMCIFMBGOLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* DOKNAGBFBEC()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_DOKNAGBFBEC_OFFSET))(this);
		}

		::System::Void GJOFDMODOHJ(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_GJOFDMODOHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMCIFMBGOLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMCIFMBGOLP*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMCIFMBGOLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMCIFMBGOLP*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMCIFMBGOLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
