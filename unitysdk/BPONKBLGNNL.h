#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPONKBLGNNL;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPONKBLGNNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E024440)
#define BPONKBLGNNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E024760)
#define BPONKBLGNNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E023E60)
#define BPONKBLGNNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E023DF0)
#define BPONKBLGNNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E023DE0)
#define BPONKBLGNNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0240F0)
#define BPONKBLGNNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E023F40)
#define BPONKBLGNNL_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E023F10)
#define BPONKBLGNNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E024270)
#define BPONKBLGNNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E023D70)
#define BPONKBLGNNL_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E023F20)
#define BPONKBLGNNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0245A0)
#define BPONKBLGNNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E024510)
#define BPONKBLGNNL_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E023F00)
#define BPONKBLGNNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E023DD0)
#define BPONKBLGNNL_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E023F30)
#define BPONKBLGNNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E024300)
#define BPONKBLGNNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E024360)

inline static constexpr unsigned int BPONKBLGNNL_TypeDefinitionIndex = 32838;

	class BPONKBLGNNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::BPONKBLGNNL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPONKBLGNNL*>**)UnitySDK::FromName("", "BPONKBLGNNL")->GetStaticField(0x312B0);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPONKBLGNNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPONKBLGNNL*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPONKBLGNNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPONKBLGNNL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPONKBLGNNL*>*(*)())((::PBYTE)hIl2Cpp + BPONKBLGNNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPONKBLGNNL* Clone()
		{
			return ((::BPONKBLGNNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BPONKBLGNNL_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPONKBLGNNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPONKBLGNNL*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPONKBLGNNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPONKBLGNNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPONKBLGNNL*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPONKBLGNNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
