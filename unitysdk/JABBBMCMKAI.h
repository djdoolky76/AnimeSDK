#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JABBBMCMKAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JABBBMCMKAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EB2C0)
#define JABBBMCMKAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EB590)
#define JABBBMCMKAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EAF10)
#define JABBBMCMKAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EAEE0)
#define JABBBMCMKAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EAED0)
#define JABBBMCMKAI_ENDNKPPCIGH_OFFSET UNITYSDK_OFFSET(0x1E6EAF80)
#define JABBBMCMKAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EB080)
#define JABBBMCMKAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EAFA0)
#define JABBBMCMKAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EB150)
#define JABBBMCMKAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EAE90)
#define JABBBMCMKAI_KIGPBDPHMIK_OFFSET UNITYSDK_OFFSET(0x1E6EAF90)
#define JABBBMCMKAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6EB410)
#define JABBBMCMKAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6EB3D0)
#define JABBBMCMKAI_NGPMBLNEEOL_OFFSET UNITYSDK_OFFSET(0x1E6EAF70)
#define JABBBMCMKAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EAEC0)
#define JABBBMCMKAI_PEGGDNKAOCE_OFFSET UNITYSDK_OFFSET(0x1E6EAF60)
#define JABBBMCMKAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EB180)
#define JABBBMCMKAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EB1E0)

inline static constexpr unsigned int JABBBMCMKAI_TypeDefinitionIndex = 30348;

	class JABBBMCMKAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NMPAMGAFHCI; // 0x18
		::System::UInt32 FBHEFJPLBBK; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JABBBMCMKAI")->GetStaticField(0x5BAF0);
		}

		// static const ::System::Object IHIOGBMCFIE; // 0x0
		// static const ::System::Object FIAOCDAJBLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JABBBMCMKAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABBBMCMKAI*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JABBBMCMKAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JABBBMCMKAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JABBBMCMKAI* Clone()
		{
			return ((::JABBBMCMKAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 PEGGDNKAOCE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_PEGGDNKAOCE_OFFSET))(this);
		}

		::System::Void NGPMBLNEEOL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABBBMCMKAI_NGPMBLNEEOL_OFFSET))(this, a1);
		}

		::System::UInt32 ENDNKPPCIGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_ENDNKPPCIGH_OFFSET))(this);
		}

		::System::Void KIGPBDPHMIK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JABBBMCMKAI_KIGPBDPHMIK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JABBBMCMKAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JABBBMCMKAI*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JABBBMCMKAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JABBBMCMKAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JABBBMCMKAI*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JABBBMCMKAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
