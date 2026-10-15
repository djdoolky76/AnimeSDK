#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAMNOGFAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJAMNOGFAMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E867B30)
#define KJAMNOGFAMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E867E00)
#define KJAMNOGFAMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E867780)
#define KJAMNOGFAMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E867750)
#define KJAMNOGFAMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E867740)
#define KJAMNOGFAMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8678F0)
#define KJAMNOGFAMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E867810)
#define KJAMNOGFAMJ_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E867800)
#define KJAMNOGFAMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8679C0)
#define KJAMNOGFAMJ_HMFNPMBDFNH_OFFSET UNITYSDK_OFFSET(0x1E8677D0)
#define KJAMNOGFAMJ_JEHIDLFBCME_OFFSET UNITYSDK_OFFSET(0x1E8677E0)
#define KJAMNOGFAMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E867700)
#define KJAMNOGFAMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E867C80)
#define KJAMNOGFAMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E867C40)
#define KJAMNOGFAMJ_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E8677F0)
#define KJAMNOGFAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E867730)
#define KJAMNOGFAMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8679F0)
#define KJAMNOGFAMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E867A50)

inline static constexpr unsigned int KJAMNOGFAMJ_TypeDefinitionIndex = 32826;

	class KJAMNOGFAMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEDNCLHDJLA; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KJAMNOGFAMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJAMNOGFAMJ*>**)UnitySDK::FromName("", "KJAMNOGFAMJ")->GetStaticField(0x11930);
		}

		// static const ::System::Object BJBLMLGFLGP; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJAMNOGFAMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJAMNOGFAMJ*>*(*)())((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJAMNOGFAMJ* Clone()
		{
			return ((::KJAMNOGFAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 HMFNPMBDFNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_HMFNPMBDFNH_OFFSET))(this);
		}

		::System::Void JEHIDLFBCME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_JEHIDLFBCME_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJAMNOGFAMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
