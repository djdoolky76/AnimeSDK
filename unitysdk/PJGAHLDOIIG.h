#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class PJGAHLDOIIG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJGAHLDOIIG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF79EF0)
#define PJGAHLDOIIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF7A210)
#define PJGAHLDOIIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF79950)
#define PJGAHLDOIIG_CLPCNNEINGD_OFFSET UNITYSDK_OFFSET(0x1DF79A00)
#define PJGAHLDOIIG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF798E0)
#define PJGAHLDOIIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF798D0)
#define PJGAHLDOIIG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF79B90)
#define PJGAHLDOIIG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF79A10)
#define PJGAHLDOIIG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF79D10)
#define PJGAHLDOIIG_IHBPLMDKAOH_OFFSET UNITYSDK_OFFSET(0x1DF799F0)
#define PJGAHLDOIIG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF79890)
#define PJGAHLDOIIG_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1DF799D0)
#define PJGAHLDOIIG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF7A050)
#define PJGAHLDOIIG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF79FC0)
#define PJGAHLDOIIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF798C0)
#define PJGAHLDOIIG_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1DF799E0)
#define PJGAHLDOIIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF79DB0)
#define PJGAHLDOIIG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF79E10)

inline static constexpr unsigned int PJGAHLDOIIG_TypeDefinitionIndex = 30132;

	class PJGAHLDOIIG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 MFMHPDFMGIN; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJGAHLDOIIG")->GetStaticField(0x46460);
		}

		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object PJHHJKCAPFG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJGAHLDOIIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJGAHLDOIIG*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJGAHLDOIIG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJGAHLDOIIG* Clone()
		{
			return ((::PJGAHLDOIIG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CLONE_OFFSET))(this);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 IHBPLMDKAOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_IHBPLMDKAOH_OFFSET))(this);
		}

		::System::Void CLPCNNEINGD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CLPCNNEINGD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJGAHLDOIIG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJGAHLDOIIG*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJGAHLDOIIG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJGAHLDOIIG*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJGAHLDOIIG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
