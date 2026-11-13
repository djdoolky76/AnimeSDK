#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAKPILEOKNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAKPILEOKNC_APOOPCHJBKI_OFFSET UNITYSDK_OFFSET(0x1FBB4DF0)
#define MAKPILEOKNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBB5220)
#define MAKPILEOKNC_CBMHCIGFBBC_OFFSET UNITYSDK_OFFSET(0x1FBB4E10)
#define MAKPILEOKNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBB54E0)
#define MAKPILEOKNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBB4CF0)
#define MAKPILEOKNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB4CA0)
#define MAKPILEOKNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB4C90)
#define MAKPILEOKNC_DKMHHOGFMDP_OFFSET UNITYSDK_OFFSET(0x1FBB4DD0)
#define MAKPILEOKNC_EFEMKFMJGAK_OFFSET UNITYSDK_OFFSET(0x1FBB4D80)
#define MAKPILEOKNC_ELBFGHGDDJL_OFFSET UNITYSDK_OFFSET(0x1FBB4DB0)
#define MAKPILEOKNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBB4ED0)
#define MAKPILEOKNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBB4E20)
#define MAKPILEOKNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBB4F30)
#define MAKPILEOKNC_JGNBNOCGDGJ_OFFSET UNITYSDK_OFFSET(0x1FBB4E00)
#define MAKPILEOKNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBB4C20)
#define MAKPILEOKNC_LMCKHPMJJHJ_OFFSET UNITYSDK_OFFSET(0x1FBB4DA0)
#define MAKPILEOKNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBB5420)
#define MAKPILEOKNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBB53C0)
#define MAKPILEOKNC_MPAPFCNJNFB_OFFSET UNITYSDK_OFFSET(0x1FBB4D90)
#define MAKPILEOKNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBB4C80)
#define MAKPILEOKNC_PFEMIDPKNCK_OFFSET UNITYSDK_OFFSET(0x1FBB4DC0)
#define MAKPILEOKNC_PODEJIGPHME_OFFSET UNITYSDK_OFFSET(0x1FBB4DE0)
#define MAKPILEOKNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB4F70)
#define MAKPILEOKNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBB4FD0)

inline static constexpr unsigned int MAKPILEOKNC_TypeDefinitionIndex = 29762;

	class MAKPILEOKNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FGHMAEFEIDM; // 0x18
		::System::UInt32 MLNOPHHJFIN; // 0x1C
		::System::UInt32 GLHBJEEMOCG; // 0x20
		::System::Boolean AEDEKCPPHCK; // 0x24
		::System::Boolean EPCEMCHKAFE; // 0x25
		static ::Google::Protobuf::MessageParser_1<::MAKPILEOKNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MAKPILEOKNC*>**)UnitySDK::FromName("", "MAKPILEOKNC")->GetStaticField(0x49050);
		}

		// static const ::System::Object OAJACEHHACI; // 0x0
		// static const ::System::Object FOPOJOAOFCH; // 0x0
		// static const ::System::Object ECDKKELNNGI; // 0x0
		// static const ::System::Object OBOLKODECKL; // 0x0
		// static const ::System::Object OLAJFGMOCMK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAKPILEOKNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAKPILEOKNC*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAKPILEOKNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MAKPILEOKNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MAKPILEOKNC*>*(*)())((::PBYTE)hIl2Cpp + MAKPILEOKNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAKPILEOKNC* Clone()
		{
			return ((::MAKPILEOKNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EFEMKFMJGAK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_EFEMKFMJGAK_OFFSET))(this);
		}

		::System::Void MPAPFCNJNFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAKPILEOKNC_MPAPFCNJNFB_OFFSET))(this, a1);
		}

		::System::Boolean LMCKHPMJJHJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_LMCKHPMJJHJ_OFFSET))(this);
		}

		::System::Void ELBFGHGDDJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAKPILEOKNC_ELBFGHGDDJL_OFFSET))(this, a1);
		}

		::System::Boolean PFEMIDPKNCK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_PFEMIDPKNCK_OFFSET))(this);
		}

		::System::Void DKMHHOGFMDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MAKPILEOKNC_DKMHHOGFMDP_OFFSET))(this, a1);
		}

		::System::UInt32 PODEJIGPHME()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_PODEJIGPHME_OFFSET))(this);
		}

		::System::Void APOOPCHJBKI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAKPILEOKNC_APOOPCHJBKI_OFFSET))(this, a1);
		}

		::System::UInt32 JGNBNOCGDGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_JGNBNOCGDGJ_OFFSET))(this);
		}

		::System::Void CBMHCIGFBBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAKPILEOKNC_CBMHCIGFBBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAKPILEOKNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAKPILEOKNC*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKPILEOKNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAKPILEOKNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAKPILEOKNC*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAKPILEOKNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
