#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
class EBGAANBOBAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBGAANBOBAH_AHHEMJEEHEH_OFFSET UNITYSDK_OFFSET(0x1E2346C0)
#define EBGAANBOBAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E234A00)
#define EBGAANBOBAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E234D10)
#define EBGAANBOBAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E234640)
#define EBGAANBOBAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E234610)
#define EBGAANBOBAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E234600)
#define EBGAANBOBAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2347B0)
#define EBGAANBOBAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2346D0)
#define EBGAANBOBAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E234880)
#define EBGAANBOBAH_HOPJAGCEGFG_OFFSET UNITYSDK_OFFSET(0x1E2346B0)
#define EBGAANBOBAH_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x1E234690)
#define EBGAANBOBAH_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x1E2346A0)
#define EBGAANBOBAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2345C0)
#define EBGAANBOBAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E234B90)
#define EBGAANBOBAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E234B50)
#define EBGAANBOBAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2345F0)
#define EBGAANBOBAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2348B0)
#define EBGAANBOBAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E234910)

inline static constexpr unsigned int EBGAANBOBAH_TypeDefinitionIndex = 26408;

	class EBGAANBOBAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HEKOAJFHMJJ; // 0x18
		::HNOHHOEPFHC MILFCDDIHKC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBGAANBOBAH")->GetStaticField(0x4A7D0);
		}

		// static const ::System::Object ADFLIGDHDDM; // 0x0
		// static const ::System::Object KKBJPJJJCNA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBGAANBOBAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBGAANBOBAH*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGAANBOBAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBGAANBOBAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBGAANBOBAH* Clone()
		{
			return ((::EBGAANBOBAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBGAANBOBAH_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::HNOHHOEPFHC HOPJAGCEGFG()
		{
			return ((::HNOHHOEPFHC(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_HOPJAGCEGFG_OFFSET))(this);
		}

		::System::Void AHHEMJEEHEH(::HNOHHOEPFHC a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNOHHOEPFHC))((::PBYTE)hIl2Cpp + EBGAANBOBAH_AHHEMJEEHEH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBGAANBOBAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBGAANBOBAH*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGAANBOBAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBGAANBOBAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBGAANBOBAH*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBGAANBOBAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
