#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJCPFFDLGGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MJCPFFDLGGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA45C80)
#define MJCPFFDLGGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA45EE0)
#define MJCPFFDLGGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA45890)
#define MJCPFFDLGGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA45850)
#define MJCPFFDLGGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45840)
#define MJCPFFDLGGC_EDBHKLKNOGG_OFFSET UNITYSDK_OFFSET(0x1EA458F0)
#define MJCPFFDLGGC_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1EA45900)
#define MJCPFFDLGGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA45A00)
#define MJCPFFDLGGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA45920)
#define MJCPFFDLGGC_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1EA45910)
#define MJCPFFDLGGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA45AE0)
#define MJCPFFDLGGC_JDHKLNKEDNE_OFFSET UNITYSDK_OFFSET(0x1EA458E0)
#define MJCPFFDLGGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA45800)
#define MJCPFFDLGGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA45D60)
#define MJCPFFDLGGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA45D20)
#define MJCPFFDLGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA45830)
#define MJCPFFDLGGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA45B10)
#define MJCPFFDLGGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA45B70)

inline static constexpr unsigned int MJCPFFDLGGC_TypeDefinitionIndex = 32972;

	class MJCPFFDLGGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LDDIJMLJJJO; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 NIAOPCJHKCG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MJCPFFDLGGC")->GetStaticField(0x55540);
		}

		// static const ::System::Object DDLLCPNOFNC; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MJCPFFDLGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJCPFFDLGGC*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJCPFFDLGGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MJCPFFDLGGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MJCPFFDLGGC* Clone()
		{
			return ((::MJCPFFDLGGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_CLONE_OFFSET))(this);
		}

		::System::Boolean JDHKLNKEDNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_JDHKLNKEDNE_OFFSET))(this);
		}

		::System::Void EDBHKLKNOGG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_EDBHKLKNOGG_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MJCPFFDLGGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MJCPFFDLGGC*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MJCPFFDLGGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJCPFFDLGGC*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MJCPFFDLGGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
