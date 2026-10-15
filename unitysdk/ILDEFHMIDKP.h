#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDEFHMIDKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILDEFHMIDKP_BCALKHPEGGP_OFFSET UNITYSDK_OFFSET(0x1E67D190)
#define ILDEFHMIDKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E67D530)
#define ILDEFHMIDKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67D750)
#define ILDEFHMIDKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E67D120)
#define ILDEFHMIDKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E67D0F0)
#define ILDEFHMIDKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67D0E0)
#define ILDEFHMIDKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E67D2B0)
#define ILDEFHMIDKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E67D1B0)
#define ILDEFHMIDKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E67D420)
#define ILDEFHMIDKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E67D070)
#define ILDEFHMIDKP_KIEPFJLMCCE_OFFSET UNITYSDK_OFFSET(0x1E67D1A0)
#define ILDEFHMIDKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E67D5F0)
#define ILDEFHMIDKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E67D5C0)
#define ILDEFHMIDKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E67D0D0)
#define ILDEFHMIDKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E67D450)
#define ILDEFHMIDKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E67D4B0)

inline static constexpr unsigned int ILDEFHMIDKP_TypeDefinitionIndex = 29308;

	class ILDEFHMIDKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KPFGMKPPEKD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ILDEFHMIDKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILDEFHMIDKP*>**)UnitySDK::FromName("", "ILDEFHMIDKP")->GetStaticField(0x51660);
		}

		// static const ::System::Object GNCNCFNGDFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILDEFHMIDKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDEFHMIDKP*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDEFHMIDKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILDEFHMIDKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILDEFHMIDKP*>*(*)())((::PBYTE)hIl2Cpp + ILDEFHMIDKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILDEFHMIDKP* Clone()
		{
			return ((::ILDEFHMIDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 BCALKHPEGGP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_BCALKHPEGGP_OFFSET))(this);
		}

		::System::Void KIEPFJLMCCE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_KIEPFJLMCCE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILDEFHMIDKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILDEFHMIDKP*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILDEFHMIDKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDEFHMIDKP*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILDEFHMIDKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
