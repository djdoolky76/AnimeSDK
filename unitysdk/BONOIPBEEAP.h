#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BONOIPBEEAP;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BONOIPBEEAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E010BF0)
#define BONOIPBEEAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E010F10)
#define BONOIPBEEAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E010650)
#define BONOIPBEEAP_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1E010700)
#define BONOIPBEEAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0105E0)
#define BONOIPBEEAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0105D0)
#define BONOIPBEEAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E010890)
#define BONOIPBEEAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E010710)
#define BONOIPBEEAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E010A10)
#define BONOIPBEEAP_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1E0106F0)
#define BONOIPBEEAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E010590)
#define BONOIPBEEAP_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E0106D0)
#define BONOIPBEEAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E010D50)
#define BONOIPBEEAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E010CC0)
#define BONOIPBEEAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0105C0)
#define BONOIPBEEAP_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E0106E0)
#define BONOIPBEEAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E010AB0)
#define BONOIPBEEAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E010B10)

inline static constexpr unsigned int BONOIPBEEAP_TypeDefinitionIndex = 30122;

	class BONOIPBEEAP : public ::System::Object
	{
	public:
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MFMHPDFMGIN; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BONOIPBEEAP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BONOIPBEEAP*>**)UnitySDK::FromName("", "BONOIPBEEAP")->GetStaticField(0x5E590);
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

		static ::Google::Protobuf::MessageParser_1<::BONOIPBEEAP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BONOIPBEEAP*>*(*)())((::PBYTE)hIl2Cpp + BONOIPBEEAP_JJGHOBBFNJD_OFFSET))();
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
