#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCFMJCBJGMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCFMJCBJGMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7C88F0)
#define KCFMJCBJGMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8B10)
#define KCFMJCBJGMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7C8540)
#define KCFMJCBJGMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7C8510)
#define KCFMJCBJGMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C8500)
#define KCFMJCBJGMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7C8670)
#define KCFMJCBJGMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7C85A0)
#define KCFMJCBJGMN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7C8590)
#define KCFMJCBJGMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7C87E0)
#define KCFMJCBJGMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7C84C0)
#define KCFMJCBJGMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7C89B0)
#define KCFMJCBJGMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7C8980)
#define KCFMJCBJGMN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7C8580)
#define KCFMJCBJGMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7C84F0)
#define KCFMJCBJGMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7C8810)
#define KCFMJCBJGMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7C8870)

inline static constexpr unsigned int KCFMJCBJGMN_TypeDefinitionIndex = 34025;

	class KCFMJCBJGMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KCFMJCBJGMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCFMJCBJGMN*>**)UnitySDK::FromName("", "KCFMJCBJGMN")->GetStaticField(0xF2E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCFMJCBJGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCFMJCBJGMN*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCFMJCBJGMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCFMJCBJGMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCFMJCBJGMN*>*(*)())((::PBYTE)hIl2Cpp + KCFMJCBJGMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCFMJCBJGMN* Clone()
		{
			return ((::KCFMJCBJGMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCFMJCBJGMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCFMJCBJGMN*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCFMJCBJGMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCFMJCBJGMN*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCFMJCBJGMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
