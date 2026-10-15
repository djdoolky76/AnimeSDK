#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGLIMCBGLAJ.h"
#include "unitysdk/System/Object.h"
class LPJOINCGBBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LPJOINCGBBP_AFABEKGPANM_OFFSET UNITYSDK_OFFSET(0x1E9A3040)
#define LPJOINCGBBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9A3410)
#define LPJOINCGBBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9A37D0)
#define LPJOINCGBBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9A2FD0)
#define LPJOINCGBBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9A2F90)
#define LPJOINCGBBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2F80)
#define LPJOINCGBBP_ELGACGJACGM_OFFSET UNITYSDK_OFFSET(0x1E9A3020)
#define LPJOINCGBBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9A3160)
#define LPJOINCGBBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9A3080)
#define LPJOINCGBBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9A3230)
#define LPJOINCGBBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9A2F40)
#define LPJOINCGBBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9A3630)
#define LPJOINCGBBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9A35E0)
#define LPJOINCGBBP_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E9A3070)
#define LPJOINCGBBP_MMCNBOAOOOM_OFFSET UNITYSDK_OFFSET(0x1E9A3030)
#define LPJOINCGBBP_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E9A3060)
#define LPJOINCGBBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9A2F70)
#define LPJOINCGBBP_PEFHFBFAIPA_OFFSET UNITYSDK_OFFSET(0x1E9A3050)
#define LPJOINCGBBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9A3260)
#define LPJOINCGBBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9A32C0)

inline static constexpr unsigned int LPJOINCGBBP_TypeDefinitionIndex = 28648;

	class LPJOINCGBBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		::BGLIMCBGLAJ LICIBNELDEJ; // 0x1C
		::System::UInt32 LNANIJGDKHP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LPJOINCGBBP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LPJOINCGBBP*>**)UnitySDK::FromName("", "LPJOINCGBBP")->GetStaticField(0x3CC20);
		}

		// static const ::System::Object GDGBFIPGJKE; // 0x0
		// static const ::System::Object PKLGJOBKFBO; // 0x0
		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LPJOINCGBBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPJOINCGBBP*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPJOINCGBBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LPJOINCGBBP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LPJOINCGBBP*>*(*)())((::PBYTE)hIl2Cpp + LPJOINCGBBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LPJOINCGBBP* Clone()
		{
			return ((::LPJOINCGBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_CLONE_OFFSET))(this);
		}

		::BGLIMCBGLAJ ELGACGJACGM()
		{
			return ((::BGLIMCBGLAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_ELGACGJACGM_OFFSET))(this);
		}

		::System::Void MMCNBOAOOOM(::BGLIMCBGLAJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGLIMCBGLAJ))((::PBYTE)hIl2Cpp + LPJOINCGBBP_MMCNBOAOOOM_OFFSET))(this, a1);
		}

		::System::UInt32 AFABEKGPANM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_AFABEKGPANM_OFFSET))(this);
		}

		::System::Void PEFHFBFAIPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPJOINCGBBP_PEFHFBFAIPA_OFFSET))(this, a1);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LPJOINCGBBP_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LPJOINCGBBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LPJOINCGBBP*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJOINCGBBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LPJOINCGBBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPJOINCGBBP*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LPJOINCGBBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
