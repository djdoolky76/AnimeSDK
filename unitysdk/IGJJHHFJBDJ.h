#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEILAINOLPO;
class IGJJHHFJBDJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGJJHHFJBDJ_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E620030)
#define IGJJHHFJBDJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E620550)
#define IGJJHHFJBDJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E620860)
#define IGJJHHFJBDJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61FF90)
#define IGJJHHFJBDJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61FF00)
#define IGJJHHFJBDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61FEF0)
#define IGJJHHFJBDJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6201F0)
#define IGJJHHFJBDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E620070)
#define IGJJHHFJBDJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E620060)
#define IGJJHHFJBDJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E620370)
#define IGJJHHFJBDJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61FEB0)
#define IGJJHHFJBDJ_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E620040)
#define IGJJHHFJBDJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6206B0)
#define IGJJHHFJBDJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E620620)
#define IGJJHHFJBDJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E620050)
#define IGJJHHFJBDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61FEE0)
#define IGJJHHFJBDJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E620410)
#define IGJJHHFJBDJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E620470)

inline static constexpr unsigned int IGJJHHFJBDJ_TypeDefinitionIndex = 33509;

	class IGJJHHFJBDJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EEILAINOLPO* NLIJNNMCAAO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IGJJHHFJBDJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGJJHHFJBDJ*>**)UnitySDK::FromName("", "IGJJHHFJBDJ")->GetStaticField(0x4B380);
		}

		// static const ::System::Object DMAFCIBFMPD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGJJHHFJBDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGJJHHFJBDJ*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGJJHHFJBDJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGJJHHFJBDJ*>*(*)())((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGJJHHFJBDJ* Clone()
		{
			return ((::IGJJHHFJBDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_CLONE_OFFSET))(this);
		}

		::EEILAINOLPO* ADGLNFILOHI()
		{
			return ((::EEILAINOLPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::EEILAINOLPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEILAINOLPO*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGJJHHFJBDJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGJJHHFJBDJ*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGJJHHFJBDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGJJHHFJBDJ*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGJJHHFJBDJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
