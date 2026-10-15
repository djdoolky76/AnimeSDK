#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGHDDIBDABP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KGHDDIBDABP_BBFNHBMLGKK_OFFSET UNITYSDK_OFFSET(0x1E809840)
#define KGHDDIBDABP_BOGBGKOHMFO_OFFSET UNITYSDK_OFFSET(0x1E809810)
#define KGHDDIBDABP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E809C10)
#define KGHDDIBDABP_CAPLHMKKINM_OFFSET UNITYSDK_OFFSET(0x1E809800)
#define KGHDDIBDABP_CCFHOGHIANO_OFFSET UNITYSDK_OFFSET(0x1E809830)
#define KGHDDIBDABP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E809F40)
#define KGHDDIBDABP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E809730)
#define KGHDDIBDABP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8096E0)
#define KGHDDIBDABP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8096D0)
#define KGHDDIBDABP_EBOMLPKAHPO_OFFSET UNITYSDK_OFFSET(0x1E8097F0)
#define KGHDDIBDABP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8098F0)
#define KGHDDIBDABP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E809850)
#define KGHDDIBDABP_FPOEBIDLKIA_OFFSET UNITYSDK_OFFSET(0x1E8097C0)
#define KGHDDIBDABP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E809950)
#define KGHDDIBDABP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E809660)
#define KGHDDIBDABP_KECEFHGCBGH_OFFSET UNITYSDK_OFFSET(0x1E8097D0)
#define KGHDDIBDABP_KIJINHPMFJC_OFFSET UNITYSDK_OFFSET(0x1E8097E0)
#define KGHDDIBDABP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E809E80)
#define KGHDDIBDABP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E809E20)
#define KGHDDIBDABP_NNJHAPKDPOD_OFFSET UNITYSDK_OFFSET(0x1E8097B0)
#define KGHDDIBDABP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8096C0)
#define KGHDDIBDABP_PHMAFMGIBAH_OFFSET UNITYSDK_OFFSET(0x1E809820)
#define KGHDDIBDABP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E809990)
#define KGHDDIBDABP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8099F0)

inline static constexpr unsigned int KGHDDIBDABP_TypeDefinitionIndex = 27563;

	class KGHDDIBDABP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ICDPONHFAJP; // 0x18
		::System::Boolean LMPBJNIGODD; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 AAMBOGIBJKK; // 0x20
		::System::UInt32 CBOMNGIOFOE; // 0x24
		::System::UInt32 LLBEKEAECCE; // 0x28
		static ::Google::Protobuf::MessageParser_1<::KGHDDIBDABP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KGHDDIBDABP*>**)UnitySDK::FromName("", "KGHDDIBDABP")->GetStaticField(0x14F50);
		}

		// static const ::System::Object EDKKMEICPDE; // 0x0
		// static const ::System::Object IIKDJEJFAOG; // 0x0
		// static const ::System::Object BEINPDMEFFL; // 0x0
		// static const ::System::Object DOIFENEPGJF; // 0x0
		// static const ::System::Object EBEGEEGLFEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KGHDDIBDABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGHDDIBDABP*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGHDDIBDABP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KGHDDIBDABP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KGHDDIBDABP*>*(*)())((::PBYTE)hIl2Cpp + KGHDDIBDABP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KGHDDIBDABP* Clone()
		{
			return ((::KGHDDIBDABP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNJHAPKDPOD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_NNJHAPKDPOD_OFFSET))(this);
		}

		::System::Void FPOEBIDLKIA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHDDIBDABP_FPOEBIDLKIA_OFFSET))(this, a1);
		}

		::System::UInt32 KECEFHGCBGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_KECEFHGCBGH_OFFSET))(this);
		}

		::System::Void KIJINHPMFJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHDDIBDABP_KIJINHPMFJC_OFFSET))(this, a1);
		}

		::System::UInt32 EBOMLPKAHPO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_EBOMLPKAHPO_OFFSET))(this);
		}

		::System::Void CAPLHMKKINM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CAPLHMKKINM_OFFSET))(this, a1);
		}

		::System::Boolean BOGBGKOHMFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_BOGBGKOHMFO_OFFSET))(this);
		}

		::System::Void PHMAFMGIBAH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KGHDDIBDABP_PHMAFMGIBAH_OFFSET))(this, a1);
		}

		::System::UInt32 CCFHOGHIANO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CCFHOGHIANO_OFFSET))(this);
		}

		::System::Void BBFNHBMLGKK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGHDDIBDABP_BBFNHBMLGKK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KGHDDIBDABP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KGHDDIBDABP*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KGHDDIBDABP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KGHDDIBDABP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGHDDIBDABP*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KGHDDIBDABP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
