#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKNGGJGFFPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JKNGGJGFFPN_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1FA9DFF0)
#define JKNGGJGFFPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA9E380)
#define JKNGGJGFFPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA9E5A0)
#define JKNGGJGFFPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA9DF70)
#define JKNGGJGFFPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA9DF40)
#define JKNGGJGFFPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA9DF30)
#define JKNGGJGFFPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA9E100)
#define JKNGGJGFFPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA9E000)
#define JKNGGJGFFPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA9E270)
#define JKNGGJGFFPN_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1FA9DFE0)
#define JKNGGJGFFPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA9DEC0)
#define JKNGGJGFFPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA9E440)
#define JKNGGJGFFPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA9E410)
#define JKNGGJGFFPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA9DF20)
#define JKNGGJGFFPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA9E2A0)
#define JKNGGJGFFPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA9E300)

inline static constexpr unsigned int JKNGGJGFFPN_TypeDefinitionIndex = 30319;

	class JKNGGJGFFPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JKNGGJGFFPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JKNGGJGFFPN*>**)UnitySDK::FromName("", "JKNGGJGFFPN")->GetStaticField(0x517F0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JKNGGJGFFPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKNGGJGFFPN*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKNGGJGFFPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JKNGGJGFFPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JKNGGJGFFPN*>*(*)())((::PBYTE)hIl2Cpp + JKNGGJGFFPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JKNGGJGFFPN* Clone()
		{
			return ((::JKNGGJGFFPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JKNGGJGFFPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JKNGGJGFFPN*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JKNGGJGFFPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKNGGJGFFPN*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JKNGGJGFFPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
