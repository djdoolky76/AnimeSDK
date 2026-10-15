#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOPHDCKJMMN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOPHDCKJMMN_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0x1E0119F0)
#define BOPHDCKJMMN_BCALKHPEGGP_OFFSET UNITYSDK_OFFSET(0x1E0119C0)
#define BOPHDCKJMMN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E011D50)
#define BOPHDCKJMMN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E012020)
#define BOPHDCKJMMN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E011950)
#define BOPHDCKJMMN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E011920)
#define BOPHDCKJMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E011910)
#define BOPHDCKJMMN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E011B10)
#define BOPHDCKJMMN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E011A00)
#define BOPHDCKJMMN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E011BE0)
#define BOPHDCKJMMN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0118A0)
#define BOPHDCKJMMN_KIEPFJLMCCE_OFFSET UNITYSDK_OFFSET(0x1E0119D0)
#define BOPHDCKJMMN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E011EA0)
#define BOPHDCKJMMN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E011E60)
#define BOPHDCKJMMN_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0x1E0119E0)
#define BOPHDCKJMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E011900)
#define BOPHDCKJMMN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E011C10)
#define BOPHDCKJMMN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E011C70)

inline static constexpr unsigned int BOPHDCKJMMN_TypeDefinitionIndex = 29197;

	class BOPHDCKJMMN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KPFGMKPPEKD; // 0x18
		::System::UInt32 FADHDFLHBKG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BOPHDCKJMMN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BOPHDCKJMMN*>**)UnitySDK::FromName("", "BOPHDCKJMMN")->GetStaticField(0x5BF60);
		}

		// static const ::System::Object GNCNCFNGDFE; // 0x0
		// static const ::System::Object MMIFCNAPHKF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOPHDCKJMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPHDCKJMMN*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOPHDCKJMMN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BOPHDCKJMMN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BOPHDCKJMMN*>*(*)())((::PBYTE)hIl2Cpp + BOPHDCKJMMN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOPHDCKJMMN* Clone()
		{
			return ((::BOPHDCKJMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCALKHPEGGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_BCALKHPEGGP_OFFSET))(this);
		}

		::System::Void KIEPFJLMCCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_KIEPFJLMCCE_OFFSET))(this, a1);
		}

		::System::UInt32 NHONNHCIOOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOPHDCKJMMN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOPHDCKJMMN*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOPHDCKJMMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOPHDCKJMMN*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOPHDCKJMMN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
