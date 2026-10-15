#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JIKKKPKEFMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JIKKKPKEFMH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E721990)
#define JIKKKPKEFMH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E721BF0)
#define JIKKKPKEFMH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7215A0)
#define JIKKKPKEFMH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E721560)
#define JIKKKPKEFMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E721550)
#define JIKKKPKEFMH_EDBHKLKNOGG_OFFSET UNITYSDK_OFFSET(0x1E721600)
#define JIKKKPKEFMH_EILPOOIECLM_OFFSET UNITYSDK_OFFSET(0x1E721610)
#define JIKKKPKEFMH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E721710)
#define JIKKKPKEFMH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E721630)
#define JIKKKPKEFMH_FCCBPNELKAN_OFFSET UNITYSDK_OFFSET(0x1E721620)
#define JIKKKPKEFMH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7217F0)
#define JIKKKPKEFMH_JDHKLNKEDNE_OFFSET UNITYSDK_OFFSET(0x1E7215F0)
#define JIKKKPKEFMH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E721510)
#define JIKKKPKEFMH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E721A70)
#define JIKKKPKEFMH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E721A30)
#define JIKKKPKEFMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E721540)
#define JIKKKPKEFMH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E721820)
#define JIKKKPKEFMH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E721880)

inline static constexpr unsigned int JIKKKPKEFMH_TypeDefinitionIndex = 32980;

	class JIKKKPKEFMH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NIAOPCJHKCG; // 0x18
		::System::Boolean LDDIJMLJJJO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JIKKKPKEFMH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JIKKKPKEFMH*>**)UnitySDK::FromName("", "JIKKKPKEFMH")->GetStaticField(0x5FC80);
		}

		// static const ::System::Object DDLLCPNOFNC; // 0x0
		// static const ::System::Object FDDDLMBHDMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JIKKKPKEFMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIKKKPKEFMH*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JIKKKPKEFMH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JIKKKPKEFMH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JIKKKPKEFMH*>*(*)())((::PBYTE)hIl2Cpp + JIKKKPKEFMH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JIKKKPKEFMH* Clone()
		{
			return ((::JIKKKPKEFMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_CLONE_OFFSET))(this);
		}

		::System::Boolean JDHKLNKEDNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_JDHKLNKEDNE_OFFSET))(this);
		}

		::System::Void EDBHKLKNOGG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_EDBHKLKNOGG_OFFSET))(this, a1);
		}

		::System::UInt32 EILPOOIECLM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_EILPOOIECLM_OFFSET))(this);
		}

		::System::Void FCCBPNELKAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_FCCBPNELKAN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JIKKKPKEFMH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JIKKKPKEFMH*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JIKKKPKEFMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIKKKPKEFMH*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JIKKKPKEFMH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
