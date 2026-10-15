#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGLOBFBCGBB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGLOBFBCGBB_BFJOKHCAMIH_OFFSET UNITYSDK_OFFSET(0x1EB14860)
#define NGLOBFBCGBB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB14BC0)
#define NGLOBFBCGBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB14E90)
#define NGLOBFBCGBB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB14810)
#define NGLOBFBCGBB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB147E0)
#define NGLOBFBCGBB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB147D0)
#define NGLOBFBCGBB_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1EB14880)
#define NGLOBFBCGBB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB14980)
#define NGLOBFBCGBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB148A0)
#define NGLOBFBCGBB_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1EB14890)
#define NGLOBFBCGBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB14A50)
#define NGLOBFBCGBB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB14790)
#define NGLOBFBCGBB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB14D10)
#define NGLOBFBCGBB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB14CD0)
#define NGLOBFBCGBB_OHCMKDNEEPP_OFFSET UNITYSDK_OFFSET(0x1EB14870)
#define NGLOBFBCGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB147C0)
#define NGLOBFBCGBB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB14A80)
#define NGLOBFBCGBB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB14AE0)

inline static constexpr unsigned int NGLOBFBCGBB_TypeDefinitionIndex = 31311;

	class NGLOBFBCGBB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 FDMDGMDEOJC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NGLOBFBCGBB")->GetStaticField(0x372F0);
		}

		// static const ::System::Object EKCKMADPBBP; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGLOBFBCGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGLOBFBCGBB*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGLOBFBCGBB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NGLOBFBCGBB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGLOBFBCGBB* Clone()
		{
			return ((::NGLOBFBCGBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_CLONE_OFFSET))(this);
		}

		::System::UInt32 BFJOKHCAMIH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_BFJOKHCAMIH_OFFSET))(this);
		}

		::System::Void OHCMKDNEEPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_OHCMKDNEEPP_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGLOBFBCGBB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGLOBFBCGBB*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGLOBFBCGBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGLOBFBCGBB*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGLOBFBCGBB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
