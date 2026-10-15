#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCDBJHOCGHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCDBJHOCGHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F1D80)
#define MCDBJHOCGHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F1FE0)
#define MCDBJHOCGHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F1990)
#define MCDBJHOCGHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F1950)
#define MCDBJHOCGHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F1940)
#define MCDBJHOCGHI_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E9F19F0)
#define MCDBJHOCGHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F1B00)
#define MCDBJHOCGHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F1A20)
#define MCDBJHOCGHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F1BE0)
#define MCDBJHOCGHI_ILFAOAJEEBL_OFFSET UNITYSDK_OFFSET(0x1E9F1A00)
#define MCDBJHOCGHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F1900)
#define MCDBJHOCGHI_LHCEPOOHGFK_OFFSET UNITYSDK_OFFSET(0x1E9F1A10)
#define MCDBJHOCGHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9F1E60)
#define MCDBJHOCGHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F1E20)
#define MCDBJHOCGHI_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E9F19E0)
#define MCDBJHOCGHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F1930)
#define MCDBJHOCGHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F1C10)
#define MCDBJHOCGHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F1C70)

inline static constexpr unsigned int MCDBJHOCGHI_TypeDefinitionIndex = 29593;

	class MCDBJHOCGHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MJIMFDKFGDE; // 0x18
		::System::Boolean KEKMPIGIACD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::MCDBJHOCGHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MCDBJHOCGHI*>**)UnitySDK::FromName("", "MCDBJHOCGHI")->GetStaticField(0x46D60);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object PFEJIKGIEIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCDBJHOCGHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDBJHOCGHI*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCDBJHOCGHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MCDBJHOCGHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MCDBJHOCGHI*>*(*)())((::PBYTE)hIl2Cpp + MCDBJHOCGHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCDBJHOCGHI* Clone()
		{
			return ((::MCDBJHOCGHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean ILFAOAJEEBL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_ILFAOAJEEBL_OFFSET))(this);
		}

		::System::Void LHCEPOOHGFK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_LHCEPOOHGFK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCDBJHOCGHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCDBJHOCGHI*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCDBJHOCGHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDBJHOCGHI*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCDBJHOCGHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
