#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDOMDOFEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ILDOMDOFEPK_ANLBMCFAOCN_OFFSET UNITYSDK_OFFSET(0x1E6AB060)
#define ILDOMDOFEPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AB410)
#define ILDOMDOFEPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AB7B0)
#define ILDOMDOFEPK_CHFIMNHABGP_OFFSET UNITYSDK_OFFSET(0x1E6AB070)
#define ILDOMDOFEPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AAFF0)
#define ILDOMDOFEPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AAFB0)
#define ILDOMDOFEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AAFA0)
#define ILDOMDOFEPK_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E6AB040)
#define ILDOMDOFEPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AB180)
#define ILDOMDOFEPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AB0A0)
#define ILDOMDOFEPK_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E6AB090)
#define ILDOMDOFEPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AB250)
#define ILDOMDOFEPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AAF60)
#define ILDOMDOFEPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AB5F0)
#define ILDOMDOFEPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AB5A0)
#define ILDOMDOFEPK_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E6AB050)
#define ILDOMDOFEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AAF90)
#define ILDOMDOFEPK_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E6AB080)
#define ILDOMDOFEPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AB280)
#define ILDOMDOFEPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AB2E0)

inline static constexpr unsigned int ILDOMDOFEPK_TypeDefinitionIndex = 32504;

	class ILDOMDOFEPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DHELHDBPKIK; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		::System::UInt32 DBHLHPDBNFD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::ILDOMDOFEPK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ILDOMDOFEPK*>**)UnitySDK::FromName("", "ILDOMDOFEPK")->GetStaticField(0x56170);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object MKIOLOIMFED; // 0x0
		// static const ::System::Object HHAPFDHANFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ILDOMDOFEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDOMDOFEPK*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ILDOMDOFEPK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ILDOMDOFEPK*>*(*)())((::PBYTE)hIl2Cpp + ILDOMDOFEPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ILDOMDOFEPK* Clone()
		{
			return ((::ILDOMDOFEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 ANLBMCFAOCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_ANLBMCFAOCN_OFFSET))(this);
		}

		::System::Void CHFIMNHABGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CHFIMNHABGP_OFFSET))(this, a1);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ILDOMDOFEPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ILDOMDOFEPK*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ILDOMDOFEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ILDOMDOFEPK*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ILDOMDOFEPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
