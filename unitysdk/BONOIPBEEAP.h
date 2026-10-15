#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BONOIPBEEAP;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BONOIPBEEAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03E1A0)
#define BONOIPBEEAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03E4C0)
#define BONOIPBEEAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03DC00)
#define BONOIPBEEAP_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E03DCB0)
#define BONOIPBEEAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03DB90)
#define BONOIPBEEAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03DB80)
#define BONOIPBEEAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03DE40)
#define BONOIPBEEAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03DCC0)
#define BONOIPBEEAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03DFC0)
#define BONOIPBEEAP_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E03DCA0)
#define BONOIPBEEAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03DB40)
#define BONOIPBEEAP_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E03DC80)
#define BONOIPBEEAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03E300)
#define BONOIPBEEAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03E270)
#define BONOIPBEEAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03DB70)
#define BONOIPBEEAP_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E03DC90)
#define BONOIPBEEAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03E060)
#define BONOIPBEEAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03E0C0)

	class BONOIPBEEAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 MFMHPDFMGIN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BONOIPBEEAP")->GetStaticField(0x54F70);
		}

		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BONOIPBEEAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BONOIPBEEAP*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BONOIPBEEAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BONOIPBEEAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BONOIPBEEAP* Clone()
		{
			return ((::BONOIPBEEAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BONOIPBEEAP_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BONOIPBEEAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BONOIPBEEAP*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BONOIPBEEAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BONOIPBEEAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BONOIPBEEAP*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BONOIPBEEAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
