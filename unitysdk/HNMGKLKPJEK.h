#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNMGKLKPJEK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNMGKLKPJEK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E1500)
#define HNMGKLKPJEK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E17D0)
#define HNMGKLKPJEK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E1100)
#define HNMGKLKPJEK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E10D0)
#define HNMGKLKPJEK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E10C0)
#define HNMGKLKPJEK_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E5E1190)
#define HNMGKLKPJEK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E12C0)
#define HNMGKLKPJEK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E11B0)
#define HNMGKLKPJEK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E1390)
#define HNMGKLKPJEK_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E5E11A0)
#define HNMGKLKPJEK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E1050)
#define HNMGKLKPJEK_LJOEJHAHADJ_OFFSET UNITYSDK_OFFSET(0x1E5E1170)
#define HNMGKLKPJEK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E1650)
#define HNMGKLKPJEK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E1610)
#define HNMGKLKPJEK_OMJICKCBCPB_OFFSET UNITYSDK_OFFSET(0x1E5E1180)
#define HNMGKLKPJEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E10B0)
#define HNMGKLKPJEK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E13C0)
#define HNMGKLKPJEK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E1420)

inline static constexpr unsigned int HNMGKLKPJEK_TypeDefinitionIndex = 25207;

	class HNMGKLKPJEK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JOIBGPPABFH; // 0x18
		::System::UInt32 EMHBAOIIKLC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HNMGKLKPJEK")->GetStaticField(0x4C4B0);
		}

		// static const ::System::Object GAKKGKOJEFP; // 0x0
		// static const ::System::Object NINHOJDICNH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNMGKLKPJEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNMGKLKPJEK*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNMGKLKPJEK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HNMGKLKPJEK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNMGKLKPJEK* Clone()
		{
			return ((::HNMGKLKPJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_CLONE_OFFSET))(this);
		}

		::System::UInt32 LJOEJHAHADJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_LJOEJHAHADJ_OFFSET))(this);
		}

		::System::Void OMJICKCBCPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_OMJICKCBCPB_OFFSET))(this, a1);
		}

		::System::UInt32 EJDIMEGMAKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNMGKLKPJEK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNMGKLKPJEK*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNMGKLKPJEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNMGKLKPJEK*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNMGKLKPJEK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
