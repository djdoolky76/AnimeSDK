#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACABKOGJAEG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ACABKOGJAEG_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1DDD65B0)
#define ACABKOGJAEG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD6900)
#define ACABKOGJAEG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6BD0)
#define ACABKOGJAEG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD6550)
#define ACABKOGJAEG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD6520)
#define ACABKOGJAEG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6510)
#define ACABKOGJAEG_DKBCHJFIJAK_OFFSET UNITYSDK_OFFSET(0x1DDD65D0)
#define ACABKOGJAEG_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1DDD65A0)
#define ACABKOGJAEG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD66C0)
#define ACABKOGJAEG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD65E0)
#define ACABKOGJAEG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD6790)
#define ACABKOGJAEG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD64D0)
#define ACABKOGJAEG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD6A50)
#define ACABKOGJAEG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD6A10)
#define ACABKOGJAEG_NEOKJMPFBCN_OFFSET UNITYSDK_OFFSET(0x1DDD65C0)
#define ACABKOGJAEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD6500)
#define ACABKOGJAEG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD67C0)
#define ACABKOGJAEG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD6820)

inline static constexpr unsigned int ACABKOGJAEG_TypeDefinitionIndex = 26066;

	class ACABKOGJAEG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ADEPENCCEMI; // 0x18
		::System::UInt32 PLKGEBACJMA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ACABKOGJAEG")->GetStaticField(0x2B010);
		}

		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object OHNKMBECIAE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ACABKOGJAEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACABKOGJAEG*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACABKOGJAEG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ACABKOGJAEG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ACABKOGJAEG* Clone()
		{
			return ((::ACABKOGJAEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACABKOGJAEG_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::System::UInt32 NEOKJMPFBCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_NEOKJMPFBCN_OFFSET))(this);
		}

		::System::Void DKBCHJFIJAK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ACABKOGJAEG_DKBCHJFIJAK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ACABKOGJAEG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACABKOGJAEG*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ACABKOGJAEG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ACABKOGJAEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACABKOGJAEG*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ACABKOGJAEG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
