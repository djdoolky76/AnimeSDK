#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class NMCIFMBGOLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMCIFMBGOLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB6EA00)
#define NMCIFMBGOLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6ECA0)
#define NMCIFMBGOLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB6E390)
#define NMCIFMBGOLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB6E320)
#define NMCIFMBGOLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E310)
#define NMCIFMBGOLP_DOKNAGBFBEC_OFFSET UNITYSDK_OFFSET(0x1EB6E410)
#define NMCIFMBGOLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB6E5A0)
#define NMCIFMBGOLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB6E430)
#define NMCIFMBGOLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB6E870)
#define NMCIFMBGOLP_GJOFDMODOHJ_OFFSET UNITYSDK_OFFSET(0x1EB6E420)
#define NMCIFMBGOLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB6E2D0)
#define NMCIFMBGOLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB6EAF0)
#define NMCIFMBGOLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB6EA60)
#define NMCIFMBGOLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB6E300)
#define NMCIFMBGOLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB6E910)
#define NMCIFMBGOLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB6E970)

inline static constexpr unsigned int NMCIFMBGOLP_TypeDefinitionIndex = 33838;

	class NMCIFMBGOLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* PHBFHCCKHIC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMCIFMBGOLP")->GetStaticField(0x6BEB0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMCIFMBGOLP_JJGHOBBFNJD_OFFSET))();
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
