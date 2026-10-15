#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPNKOKGEAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FDPNKOKGEAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E35EF40)
#define FDPNKOKGEAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E35EFE0)
#define FDPNKOKGEAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E35EC30)
#define FDPNKOKGEAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E35EC00)
#define FDPNKOKGEAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E35EBF0)
#define FDPNKOKGEAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E35ED40)
#define FDPNKOKGEAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E35EC70)
#define FDPNKOKGEAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E35EEA0)
#define FDPNKOKGEAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E35EBB0)
#define FDPNKOKGEAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E35EF90)
#define FDPNKOKGEAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E35EF60)
#define FDPNKOKGEAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E35EBE0)
#define FDPNKOKGEAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E35EED0)
#define FDPNKOKGEAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E35EF30)

inline static constexpr unsigned int FDPNKOKGEAP_TypeDefinitionIndex = 27427;

	class FDPNKOKGEAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FDPNKOKGEAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FDPNKOKGEAP*>**)UnitySDK::FromName("", "FDPNKOKGEAP")->GetStaticField(0x5BF20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FDPNKOKGEAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPNKOKGEAP*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDPNKOKGEAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FDPNKOKGEAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FDPNKOKGEAP*>*(*)())((::PBYTE)hIl2Cpp + FDPNKOKGEAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FDPNKOKGEAP* Clone()
		{
			return ((::FDPNKOKGEAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FDPNKOKGEAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDPNKOKGEAP*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FDPNKOKGEAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPNKOKGEAP*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FDPNKOKGEAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
