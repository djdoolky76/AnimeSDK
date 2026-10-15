#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEOGEDFAELP;
class JECNOELJLKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEOGEDFAELP_BEGHAOGNOHO_OFFSET UNITYSDK_OFFSET(0x1E612AF0)
#define IEOGEDFAELP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E613090)
#define IEOGEDFAELP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E613430)
#define IEOGEDFAELP_CEHJEDACAFC_OFFSET UNITYSDK_OFFSET(0x1E612B00)
#define IEOGEDFAELP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E612A50)
#define IEOGEDFAELP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6129C0)
#define IEOGEDFAELP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6129B0)
#define IEOGEDFAELP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E612C80)
#define IEOGEDFAELP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E612B10)
#define IEOGEDFAELP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E612F50)
#define IEOGEDFAELP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E612970)
#define IEOGEDFAELP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E613210)
#define IEOGEDFAELP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6130F0)
#define IEOGEDFAELP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6129A0)
#define IEOGEDFAELP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E612FA0)
#define IEOGEDFAELP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E613000)

inline static constexpr unsigned int IEOGEDFAELP_TypeDefinitionIndex = 28750;

	class IEOGEDFAELP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* AIILGAMOHMI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IEOGEDFAELP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IEOGEDFAELP*>**)UnitySDK::FromName("", "IEOGEDFAELP")->GetStaticField(0x48EB0);
		}

		// static const ::System::Object HDGFNPOALHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEOGEDFAELP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOGEDFAELP*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEOGEDFAELP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IEOGEDFAELP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IEOGEDFAELP*>*(*)())((::PBYTE)hIl2Cpp + IEOGEDFAELP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEOGEDFAELP* Clone()
		{
			return ((::IEOGEDFAELP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_CLONE_OFFSET))(this);
		}

		::JECNOELJLKO* BEGHAOGNOHO()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_BEGHAOGNOHO_OFFSET))(this);
		}

		::System::Void CEHJEDACAFC(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_CEHJEDACAFC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEOGEDFAELP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEOGEDFAELP*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEOGEDFAELP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEOGEDFAELP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEOGEDFAELP*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEOGEDFAELP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
