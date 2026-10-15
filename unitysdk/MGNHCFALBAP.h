#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGNHCFALBAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGNHCFALBAP_AIGJAGKCOCO_OFFSET UNITYSDK_OFFSET(0x1E9FCB50)
#define MGNHCFALBAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9FCEB0)
#define MGNHCFALBAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FD0D0)
#define MGNHCFALBAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9FCB00)
#define MGNHCFALBAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9FCAD0)
#define MGNHCFALBAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FCAC0)
#define MGNHCFALBAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9FCC30)
#define MGNHCFALBAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9FCB60)
#define MGNHCFALBAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9FCDA0)
#define MGNHCFALBAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9FCA80)
#define MGNHCFALBAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9FCF70)
#define MGNHCFALBAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9FCF40)
#define MGNHCFALBAP_NNILNLEKKND_OFFSET UNITYSDK_OFFSET(0x1E9FCB40)
#define MGNHCFALBAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9FCAB0)
#define MGNHCFALBAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9FCDD0)
#define MGNHCFALBAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9FCE30)

inline static constexpr unsigned int MGNHCFALBAP_TypeDefinitionIndex = 31462;

	class MGNHCFALBAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LDPCPFBPKPA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MGNHCFALBAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MGNHCFALBAP*>**)UnitySDK::FromName("", "MGNHCFALBAP")->GetStaticField(0x506F0);
		}

		// static const ::System::Object JAHHDKAPBOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGNHCFALBAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGNHCFALBAP*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGNHCFALBAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MGNHCFALBAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MGNHCFALBAP*>*(*)())((::PBYTE)hIl2Cpp + MGNHCFALBAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGNHCFALBAP* Clone()
		{
			return ((::MGNHCFALBAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNILNLEKKND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_NNILNLEKKND_OFFSET))(this);
		}

		::System::Void AIGJAGKCOCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGNHCFALBAP_AIGJAGKCOCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGNHCFALBAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGNHCFALBAP*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGNHCFALBAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGNHCFALBAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGNHCFALBAP*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGNHCFALBAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
