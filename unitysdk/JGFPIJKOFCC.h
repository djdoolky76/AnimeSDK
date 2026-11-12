#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGFPIJKOFCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGFPIJKOFCC_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1FA47420)
#define JGFPIJKOFCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA47780)
#define JGFPIJKOFCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA479A0)
#define JGFPIJKOFCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA473D0)
#define JGFPIJKOFCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA473A0)
#define JGFPIJKOFCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA47390)
#define JGFPIJKOFCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA47500)
#define JGFPIJKOFCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA47430)
#define JGFPIJKOFCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA47670)
#define JGFPIJKOFCC_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1FA47410)
#define JGFPIJKOFCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA47350)
#define JGFPIJKOFCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA47840)
#define JGFPIJKOFCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA47810)
#define JGFPIJKOFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA47380)
#define JGFPIJKOFCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA476A0)
#define JGFPIJKOFCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA47700)

inline static constexpr unsigned int JGFPIJKOFCC_TypeDefinitionIndex = 34685;

	class JGFPIJKOFCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGFPIJKOFCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGFPIJKOFCC*>**)UnitySDK::FromName("", "JGFPIJKOFCC")->GetStaticField(0x47360);
		}

		// static const ::System::Object HLKDEGJOKIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGFPIJKOFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGFPIJKOFCC*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGFPIJKOFCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGFPIJKOFCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGFPIJKOFCC*>*(*)())((::PBYTE)hIl2Cpp + JGFPIJKOFCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGFPIJKOFCC* Clone()
		{
			return ((::JGFPIJKOFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGFPIJKOFCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGFPIJKOFCC*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGFPIJKOFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGFPIJKOFCC*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGFPIJKOFCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
