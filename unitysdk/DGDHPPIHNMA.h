#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKFLKIBDGNA.h"
#include "unitysdk/System/Object.h"
class DGDHPPIHNMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGDHPPIHNMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1AAB20)
#define DGDHPPIHNMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AAF00)
#define DGDHPPIHNMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1AA6D0)
#define DGDHPPIHNMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1AA690)
#define DGDHPPIHNMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA680)
#define DGDHPPIHNMA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E1AA720)
#define DGDHPPIHNMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1AA860)
#define DGDHPPIHNMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1AA780)
#define DGDHPPIHNMA_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E1AA760)
#define DGDHPPIHNMA_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E1AA750)
#define DGDHPPIHNMA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E1AA730)
#define DGDHPPIHNMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1AA930)
#define DGDHPPIHNMA_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E1AA740)
#define DGDHPPIHNMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1AA640)
#define DGDHPPIHNMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1AAD40)
#define DGDHPPIHNMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1AACF0)
#define DGDHPPIHNMA_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E1AA770)
#define DGDHPPIHNMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1AA670)
#define DGDHPPIHNMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1AA960)
#define DGDHPPIHNMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1AA9C0)

inline static constexpr unsigned int DGDHPPIHNMA_TypeDefinitionIndex = 30921;

	class DGDHPPIHNMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		::KKFLKIBDGNA AFHHMCKLLAJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DGDHPPIHNMA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGDHPPIHNMA*>**)UnitySDK::FromName("", "DGDHPPIHNMA")->GetStaticField(0x180B0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGDHPPIHNMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGDHPPIHNMA*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGDHPPIHNMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGDHPPIHNMA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGDHPPIHNMA*>*(*)())((::PBYTE)hIl2Cpp + DGDHPPIHNMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGDHPPIHNMA* Clone()
		{
			return ((::DGDHPPIHNMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::KKFLKIBDGNA JBENBABCOGB()
		{
			return ((::KKFLKIBDGNA(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::KKFLKIBDGNA a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKFLKIBDGNA))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGDHPPIHNMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGDHPPIHNMA*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGDHPPIHNMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGDHPPIHNMA*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGDHPPIHNMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
