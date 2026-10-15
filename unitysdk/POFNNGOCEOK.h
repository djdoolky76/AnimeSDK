#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POFNNGOCEOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POFNNGOCEOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFC9E40)
#define POFNNGOCEOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFCA210)
#define POFNNGOCEOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFC99E0)
#define POFNNGOCEOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFC99A0)
#define POFNNGOCEOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC9990)
#define POFNNGOCEOK_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1DFC9A60)
#define POFNNGOCEOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFC9B70)
#define POFNNGOCEOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFC9A90)
#define POFNNGOCEOK_FFLJICKHLFE_OFFSET UNITYSDK_OFFSET(0x1DFC9A80)
#define POFNNGOCEOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFC9C50)
#define POFNNGOCEOK_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1DFC9A50)
#define POFNNGOCEOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFC9950)
#define POFNNGOCEOK_MDKCCLPMCDA_OFFSET UNITYSDK_OFFSET(0x1DFC9A40)
#define POFNNGOCEOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFCA070)
#define POFNNGOCEOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFCA020)
#define POFNNGOCEOK_OFNNENLMAJE_OFFSET UNITYSDK_OFFSET(0x1DFC9A70)
#define POFNNGOCEOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFC9980)
#define POFNNGOCEOK_PPLNBPDMLFF_OFFSET UNITYSDK_OFFSET(0x1DFC9A30)
#define POFNNGOCEOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFC9CA0)
#define POFNNGOCEOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFC9D00)

inline static constexpr unsigned int POFNNGOCEOK_TypeDefinitionIndex = 27835;

	class POFNNGOCEOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 AHLHCMHEEKG; // 0x18
		::System::UInt32 AEKECGJLGEF; // 0x20
		::System::UInt32 CLJHLNIBLAA; // 0x24
		static ::Google::Protobuf::MessageParser_1<::POFNNGOCEOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POFNNGOCEOK*>**)UnitySDK::FromName("", "POFNNGOCEOK")->GetStaticField(0x21190);
		}

		// static const ::System::Object AHDGKPLFKKF; // 0x0
		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object MLFMEHJDOJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POFNNGOCEOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFNNGOCEOK*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFNNGOCEOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POFNNGOCEOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POFNNGOCEOK*>*(*)())((::PBYTE)hIl2Cpp + POFNNGOCEOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POFNNGOCEOK* Clone()
		{
			return ((::POFNNGOCEOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_CLONE_OFFSET))(this);
		}

		::System::Int64 PPLNBPDMLFF()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_PPLNBPDMLFF_OFFSET))(this);
		}

		::System::Void MDKCCLPMCDA(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + POFNNGOCEOK_MDKCCLPMCDA_OFFSET))(this, a1);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POFNNGOCEOK_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 OFNNENLMAJE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_OFNNENLMAJE_OFFSET))(this);
		}

		::System::Void FFLJICKHLFE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POFNNGOCEOK_FFLJICKHLFE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POFNNGOCEOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POFNNGOCEOK*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFNNGOCEOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POFNNGOCEOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFNNGOCEOK*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POFNNGOCEOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
