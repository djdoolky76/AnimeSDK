#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEANCDFECGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEANCDFECGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2370B0)
#define EEANCDFECGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2372D0)
#define EEANCDFECGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E236D00)
#define EEANCDFECGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E236CD0)
#define EEANCDFECGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E236CC0)
#define EEANCDFECGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E236E30)
#define EEANCDFECGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E236D60)
#define EEANCDFECGN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E236D50)
#define EEANCDFECGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E236FA0)
#define EEANCDFECGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E236C80)
#define EEANCDFECGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E237170)
#define EEANCDFECGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E237140)
#define EEANCDFECGN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E236D40)
#define EEANCDFECGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E236CB0)
#define EEANCDFECGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E236FD0)
#define EEANCDFECGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E237030)

inline static constexpr unsigned int EEANCDFECGN_TypeDefinitionIndex = 26352;

	class EEANCDFECGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EEANCDFECGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEANCDFECGN*>**)UnitySDK::FromName("", "EEANCDFECGN")->GetStaticField(0x448D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEANCDFECGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEANCDFECGN*))((::PBYTE)hIl2Cpp + EEANCDFECGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEANCDFECGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEANCDFECGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEANCDFECGN*>*(*)())((::PBYTE)hIl2Cpp + EEANCDFECGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEANCDFECGN* Clone()
		{
			return ((::EEANCDFECGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EEANCDFECGN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEANCDFECGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEANCDFECGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEANCDFECGN*))((::PBYTE)hIl2Cpp + EEANCDFECGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEANCDFECGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEANCDFECGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEANCDFECGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEANCDFECGN*))((::PBYTE)hIl2Cpp + EEANCDFECGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEANCDFECGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
