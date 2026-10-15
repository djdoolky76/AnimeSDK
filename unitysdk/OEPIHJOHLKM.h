#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHKAOPAPJEK;
class OEPIHJOHLKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEPIHJOHLKM_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1DE34710)
#define OEPIHJOHLKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE34D00)
#define OEPIHJOHLKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE34F50)
#define OEPIHJOHLKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE34690)
#define OEPIHJOHLKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE34620)
#define OEPIHJOHLKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE34610)
#define OEPIHJOHLKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE348A0)
#define OEPIHJOHLKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE34730)
#define OEPIHJOHLKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE34B70)
#define OEPIHJOHLKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE345D0)
#define OEPIHJOHLKM_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1DE34720)
#define OEPIHJOHLKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE34DD0)
#define OEPIHJOHLKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE34D60)
#define OEPIHJOHLKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE34600)
#define OEPIHJOHLKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE34C10)
#define OEPIHJOHLKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE34C70)

inline static constexpr unsigned int OEPIHJOHLKM_TypeDefinitionIndex = 33174;

	class OEPIHJOHLKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::LHKAOPAPJEK* NLIJNNMCAAO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OEPIHJOHLKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEPIHJOHLKM*>**)UnitySDK::FromName("", "OEPIHJOHLKM")->GetStaticField(0x15ED0);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEPIHJOHLKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPIHJOHLKM*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPIHJOHLKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEPIHJOHLKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEPIHJOHLKM*>*(*)())((::PBYTE)hIl2Cpp + OEPIHJOHLKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEPIHJOHLKM* Clone()
		{
			return ((::OEPIHJOHLKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_CLONE_OFFSET))(this);
		}

		::LHKAOPAPJEK* ADGLNFILOHI()
		{
			return ((::LHKAOPAPJEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::LHKAOPAPJEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHKAOPAPJEK*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEPIHJOHLKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEPIHJOHLKM*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEPIHJOHLKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPIHJOHLKM*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEPIHJOHLKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
