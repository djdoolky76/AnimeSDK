#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJFAEHKEFCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJFAEHKEFCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83DB00)
#define KJFAEHKEFCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83DEA0)
#define KJFAEHKEFCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83D4F0)
#define KJFAEHKEFCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83D4B0)
#define KJFAEHKEFCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83D4A0)
#define KJFAEHKEFCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83D630)
#define KJFAEHKEFCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83D5D0)
#define KJFAEHKEFCD_FCNBEFIHAPJ_OFFSET UNITYSDK_OFFSET(0x1E83D5B0)
#define KJFAEHKEFCD_FMHMFNDJGKI_OFFSET UNITYSDK_OFFSET(0x1E83D580)
#define KJFAEHKEFCD_GDBBMNAMEBG_OFFSET UNITYSDK_OFFSET(0x1E83D590)
#define KJFAEHKEFCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83D820)
#define KJFAEHKEFCD_ILKJIAEODMH_OFFSET UNITYSDK_OFFSET(0x1E83D5A0)
#define KJFAEHKEFCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83D430)
#define KJFAEHKEFCD_KCOEOHAKCEO_OFFSET UNITYSDK_OFFSET(0x1E83D570)
#define KJFAEHKEFCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83DC90)
#define KJFAEHKEFCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83DC30)
#define KJFAEHKEFCD_OGJCBLFBBGJ_OFFSET UNITYSDK_OFFSET(0x1E83D5C0)
#define KJFAEHKEFCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83D490)
#define KJFAEHKEFCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83D940)
#define KJFAEHKEFCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83D9A0)

inline static constexpr unsigned int KJFAEHKEFCD_TypeDefinitionIndex = 25602;

	class KJFAEHKEFCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFKFNBPMJOB; // 0x18
		::System::UInt32 ELPJAIFOJHP; // 0x1C
		::System::Double DJGMNHOPOJO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KJFAEHKEFCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJFAEHKEFCD*>**)UnitySDK::FromName("", "KJFAEHKEFCD")->GetStaticField(0x19FA0);
		}

		// static const ::System::Object LMEBIMOBCDK; // 0x0
		// static const ::System::Object MBPHKDGBDEF; // 0x0
		// static const ::System::Object IHEDFEGIPFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJFAEHKEFCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFAEHKEFCD*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFAEHKEFCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJFAEHKEFCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJFAEHKEFCD*>*(*)())((::PBYTE)hIl2Cpp + KJFAEHKEFCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJFAEHKEFCD* Clone()
		{
			return ((::KJFAEHKEFCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_CLONE_OFFSET))(this);
		}

		::System::Double KCOEOHAKCEO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_KCOEOHAKCEO_OFFSET))(this);
		}

		::System::Void FMHMFNDJGKI(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_FMHMFNDJGKI_OFFSET))(this, a1);
		}

		::System::UInt32 GDBBMNAMEBG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_GDBBMNAMEBG_OFFSET))(this);
		}

		::System::Void ILKJIAEODMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_ILKJIAEODMH_OFFSET))(this, a1);
		}

		::System::UInt32 FCNBEFIHAPJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_FCNBEFIHAPJ_OFFSET))(this);
		}

		::System::Void OGJCBLFBBGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_OGJCBLFBBGJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJFAEHKEFCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJFAEHKEFCD*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJFAEHKEFCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJFAEHKEFCD*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJFAEHKEFCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
