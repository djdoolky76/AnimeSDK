#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIDELOJLPFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIDELOJLPFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDDF240)
#define KIDELOJLPFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDF460)
#define KIDELOJLPFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDDEE90)
#define KIDELOJLPFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDDEE60)
#define KIDELOJLPFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDEE50)
#define KIDELOJLPFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDDEFC0)
#define KIDELOJLPFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDDEEF0)
#define KIDELOJLPFB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDDEEE0)
#define KIDELOJLPFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDDF130)
#define KIDELOJLPFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDDEE10)
#define KIDELOJLPFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDDF300)
#define KIDELOJLPFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDDF2D0)
#define KIDELOJLPFB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDDEED0)
#define KIDELOJLPFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDDEE40)
#define KIDELOJLPFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDDF160)
#define KIDELOJLPFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDDF1C0)

inline static constexpr unsigned int KIDELOJLPFB_TypeDefinitionIndex = 30980;

	class KIDELOJLPFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KIDELOJLPFB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KIDELOJLPFB*>**)UnitySDK::FromName("", "KIDELOJLPFB")->GetStaticField(0x12A50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIDELOJLPFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDELOJLPFB*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIDELOJLPFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KIDELOJLPFB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KIDELOJLPFB*>*(*)())((::PBYTE)hIl2Cpp + KIDELOJLPFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIDELOJLPFB* Clone()
		{
			return ((::KIDELOJLPFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIDELOJLPFB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIDELOJLPFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIDELOJLPFB*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIDELOJLPFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIDELOJLPFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIDELOJLPFB*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIDELOJLPFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
