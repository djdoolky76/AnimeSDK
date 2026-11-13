#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONLFOIONDAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONLFOIONDAF_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1FC34660)
#define ONLFOIONDAF_BODDPOOGKBA_OFFSET UNITYSDK_OFFSET(0x1FC34640)
#define ONLFOIONDAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC34A80)
#define ONLFOIONDAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC34E00)
#define ONLFOIONDAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC34580)
#define ONLFOIONDAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC34530)
#define ONLFOIONDAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC34520)
#define ONLFOIONDAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC34750)
#define ONLFOIONDAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC346B0)
#define ONLFOIONDAF_FFODPLIIOOC_OFFSET UNITYSDK_OFFSET(0x1FC34670)
#define ONLFOIONDAF_FLNCGGIBGKF_OFFSET UNITYSDK_OFFSET(0x1FC34610)
#define ONLFOIONDAF_FOBEOBMOGHG_OFFSET UNITYSDK_OFFSET(0x1FC34620)
#define ONLFOIONDAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC347B0)
#define ONLFOIONDAF_GGMPFLODEHI_OFFSET UNITYSDK_OFFSET(0x1FC34630)
#define ONLFOIONDAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC344B0)
#define ONLFOIONDAF_KJMNGOGFAII_OFFSET UNITYSDK_OFFSET(0x1FC34680)
#define ONLFOIONDAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC34D40)
#define ONLFOIONDAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC34CE0)
#define ONLFOIONDAF_MJMFPPJBNPO_OFFSET UNITYSDK_OFFSET(0x1FC346A0)
#define ONLFOIONDAF_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1FC34650)
#define ONLFOIONDAF_NNHPGBEOMIB_OFFSET UNITYSDK_OFFSET(0x1FC34690)
#define ONLFOIONDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC34510)
#define ONLFOIONDAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC34800)
#define ONLFOIONDAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC34860)

inline static constexpr unsigned int ONLFOIONDAF_TypeDefinitionIndex = 29915;

	class ONLFOIONDAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 DPNKODHICIJ; // 0x18
		::System::Boolean JHFIOEPLDMG; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 DAOPEFAIAKD; // 0x24
		::System::UInt32 FFCPOEOILAO; // 0x28
		::System::UInt32 AIFIIKKBOLM; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::ONLFOIONDAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ONLFOIONDAF*>**)UnitySDK::FromName("", "ONLFOIONDAF")->GetStaticField(0x28CB0);
		}

		// static const ::System::Object IPPOPHOEOIP; // 0x0
		// static const ::System::Object ILNLOMIKGAK; // 0x0
		// static const ::System::Object ICGAGDOBKAM; // 0x0
		// static const ::System::Object KCCFGJFCBPL; // 0x0
		// static const ::System::Object PDIFNPBIBHJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONLFOIONDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONLFOIONDAF*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONLFOIONDAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ONLFOIONDAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ONLFOIONDAF*>*(*)())((::PBYTE)hIl2Cpp + ONLFOIONDAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONLFOIONDAF* Clone()
		{
			return ((::ONLFOIONDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_CLONE_OFFSET))(this);
		}

		::System::Boolean FLNCGGIBGKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_FLNCGGIBGKF_OFFSET))(this);
		}

		::System::Void FOBEOBMOGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONLFOIONDAF_FOBEOBMOGHG_OFFSET))(this, a1);
		}

		::System::UInt32 GGMPFLODEHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_GGMPFLODEHI_OFFSET))(this);
		}

		::System::Void BODDPOOGKBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONLFOIONDAF_BODDPOOGKBA_OFFSET))(this, a1);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_NEJDALLPIMG_OFFSET))(this);
		}

		::System::Void BIPGANGGAEC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ONLFOIONDAF_BIPGANGGAEC_OFFSET))(this, a1);
		}

		::System::UInt32 FFODPLIIOOC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_FFODPLIIOOC_OFFSET))(this);
		}

		::System::Void KJMNGOGFAII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONLFOIONDAF_KJMNGOGFAII_OFFSET))(this, a1);
		}

		::System::UInt32 NNHPGBEOMIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_NNHPGBEOMIB_OFFSET))(this);
		}

		::System::Void MJMFPPJBNPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONLFOIONDAF_MJMFPPJBNPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONLFOIONDAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONLFOIONDAF*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLFOIONDAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONLFOIONDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONLFOIONDAF*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONLFOIONDAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
