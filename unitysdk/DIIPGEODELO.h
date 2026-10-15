#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIIPGEODELO;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIIPGEODELO_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E1BF3E0)
#define DIIPGEODELO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1BF8B0)
#define DIIPGEODELO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1BFBA0)
#define DIIPGEODELO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BF360)
#define DIIPGEODELO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BF2F0)
#define DIIPGEODELO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF2E0)
#define DIIPGEODELO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BF5A0)
#define DIIPGEODELO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BF420)
#define DIIPGEODELO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1BF410)
#define DIIPGEODELO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1BF720)
#define DIIPGEODELO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BF2A0)
#define DIIPGEODELO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1BFA00)
#define DIIPGEODELO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1BF980)
#define DIIPGEODELO_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E1BF3F0)
#define DIIPGEODELO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1BF400)
#define DIIPGEODELO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BF2D0)
#define DIIPGEODELO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1BF770)
#define DIIPGEODELO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1BF7D0)

inline static constexpr unsigned int DIIPGEODELO_TypeDefinitionIndex = 34483;

	class DIIPGEODELO : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIIPGEODELO")->GetStaticField(0x364E0);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIIPGEODELO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIIPGEODELO*))((::PBYTE)hIl2Cpp + DIIPGEODELO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIIPGEODELO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIIPGEODELO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIIPGEODELO* Clone()
		{
			return ((::DIIPGEODELO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + DIIPGEODELO_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIIPGEODELO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIIPGEODELO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIIPGEODELO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIIPGEODELO*))((::PBYTE)hIl2Cpp + DIIPGEODELO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIIPGEODELO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIPGEODELO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIIPGEODELO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIIPGEODELO*))((::PBYTE)hIl2Cpp + DIIPGEODELO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIIPGEODELO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
