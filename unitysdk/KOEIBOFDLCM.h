#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOEIBOFDLCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOEIBOFDLCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E882930)
#define KOEIBOFDLCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E882B50)
#define KOEIBOFDLCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E882520)
#define KOEIBOFDLCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8824F0)
#define KOEIBOFDLCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8824E0)
#define KOEIBOFDLCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8826B0)
#define KOEIBOFDLCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8825B0)
#define KOEIBOFDLCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E882820)
#define KOEIBOFDLCM_GILKFKJECPD_OFFSET UNITYSDK_OFFSET(0x1E8825A0)
#define KOEIBOFDLCM_JFAFPMBFBJB_OFFSET UNITYSDK_OFFSET(0x1E882590)
#define KOEIBOFDLCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E882470)
#define KOEIBOFDLCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8829F0)
#define KOEIBOFDLCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8829C0)
#define KOEIBOFDLCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8824D0)
#define KOEIBOFDLCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E882850)
#define KOEIBOFDLCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8828B0)

inline static constexpr unsigned int KOEIBOFDLCM_TypeDefinitionIndex = 31877;

	class KOEIBOFDLCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HACAKIDANLE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KOEIBOFDLCM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOEIBOFDLCM*>**)UnitySDK::FromName("", "KOEIBOFDLCM")->GetStaticField(0x21330);
		}

		// static const ::System::Object MMMLJEPBDMF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOEIBOFDLCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOEIBOFDLCM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOEIBOFDLCM*>*(*)())((::PBYTE)hIl2Cpp + KOEIBOFDLCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOEIBOFDLCM* Clone()
		{
			return ((::KOEIBOFDLCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 JFAFPMBFBJB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_JFAFPMBFBJB_OFFSET))(this);
		}

		::System::Void GILKFKJECPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_GILKFKJECPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOEIBOFDLCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOEIBOFDLCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOEIBOFDLCM*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOEIBOFDLCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
