#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMDKLICDPKK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EMDKLICDPKK_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x206D5AD0)
#define EMDKLICDPKK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206D5E70)
#define EMDKLICDPKK_CCTOR_OFFSET UNITYSDK_OFFSET(0x206D60D0)
#define EMDKLICDPKK_CLONE_OFFSET UNITYSDK_OFFSET(0x206D5A80)
#define EMDKLICDPKK_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x206D5AE0)
#define EMDKLICDPKK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206D5A40)
#define EMDKLICDPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x206D5A30)
#define EMDKLICDPKK_DEEKDAFPLHC_OFFSET UNITYSDK_OFFSET(0x206D5B00)
#define EMDKLICDPKK_DOMGMNLMMFD_OFFSET UNITYSDK_OFFSET(0x206D5AF0)
#define EMDKLICDPKK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206D5BF0)
#define EMDKLICDPKK_EQUALS_OFFSET UNITYSDK_OFFSET(0x206D5B10)
#define EMDKLICDPKK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206D5CD0)
#define EMDKLICDPKK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206D59F0)
#define EMDKLICDPKK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206D5F50)
#define EMDKLICDPKK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206D5F10)
#define EMDKLICDPKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206D5A20)
#define EMDKLICDPKK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206D5D00)
#define EMDKLICDPKK_WRITETO_OFFSET UNITYSDK_OFFSET(0x206D5D60)

inline static constexpr unsigned int EMDKLICDPKK_TypeDefinitionIndex = 31573;

	class EMDKLICDPKK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IHHOHKOJBDG; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BMGMACIBMFH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EMDKLICDPKK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EMDKLICDPKK*>**)UnitySDK::FromName("", "EMDKLICDPKK")->GetStaticField(0x49810);
		}

		// static const ::System::Object FPEDPMAHHND; // 0x0
		// static const ::System::Object PEMMCCKFIPG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EMDKLICDPKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMDKLICDPKK*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDKLICDPKK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EMDKLICDPKK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EMDKLICDPKK*>*(*)())((::PBYTE)hIl2Cpp + EMDKLICDPKK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EMDKLICDPKK* Clone()
		{
			return ((::EMDKLICDPKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_CLONE_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMDKLICDPKK_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::Boolean DOMGMNLMMFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_DOMGMNLMMFD_OFFSET))(this);
		}

		::System::Void DEEKDAFPLHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMDKLICDPKK_DEEKDAFPLHC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EMDKLICDPKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EMDKLICDPKK*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EMDKLICDPKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMDKLICDPKK*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EMDKLICDPKK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
