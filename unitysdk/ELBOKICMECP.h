#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKBFMCOIHK;
class ELBOKICMECP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELBOKICMECP_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1FE60E10)
#define ELBOKICMECP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE613C0)
#define ELBOKICMECP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE61640)
#define ELBOKICMECP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE60D80)
#define ELBOKICMECP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE60D00)
#define ELBOKICMECP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE60CF0)
#define ELBOKICMECP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE60FA0)
#define ELBOKICMECP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE60E30)
#define ELBOKICMECP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE61270)
#define ELBOKICMECP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE60CB0)
#define ELBOKICMECP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE614C0)
#define ELBOKICMECP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE61420)
#define ELBOKICMECP_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1FE60E20)
#define ELBOKICMECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE60CE0)
#define ELBOKICMECP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE612D0)
#define ELBOKICMECP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE61330)

inline static constexpr unsigned int ELBOKICMECP_TypeDefinitionIndex = 31778;

	class ELBOKICMECP : public ::System::Object
	{
	public:
		::AMKBFMCOIHK* CMDGAIOLHKP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELBOKICMECP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELBOKICMECP*>**)UnitySDK::FromName("", "ELBOKICMECP")->GetStaticField(0x438E0);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELBOKICMECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELBOKICMECP*))((::PBYTE)hIl2Cpp + ELBOKICMECP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELBOKICMECP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELBOKICMECP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELBOKICMECP*>*(*)())((::PBYTE)hIl2Cpp + ELBOKICMECP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELBOKICMECP* Clone()
		{
			return ((::ELBOKICMECP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_CLONE_OFFSET))(this);
		}

		::AMKBFMCOIHK* ANALOEDDDHD()
		{
			return ((::AMKBFMCOIHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::AMKBFMCOIHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMKBFMCOIHK*))((::PBYTE)hIl2Cpp + ELBOKICMECP_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELBOKICMECP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELBOKICMECP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELBOKICMECP*))((::PBYTE)hIl2Cpp + ELBOKICMECP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELBOKICMECP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELBOKICMECP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELBOKICMECP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELBOKICMECP*))((::PBYTE)hIl2Cpp + ELBOKICMECP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELBOKICMECP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
