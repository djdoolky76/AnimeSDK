#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CINMCBDCBMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CINMCBDCBMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A9030)
#define CINMCBDCBMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A9250)
#define CINMCBDCBMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A8C80)
#define CINMCBDCBMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A8C50)
#define CINMCBDCBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8C40)
#define CINMCBDCBMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A8DB0)
#define CINMCBDCBMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A8CE0)
#define CINMCBDCBMJ_FJEOKLJJJBP_OFFSET UNITYSDK_OFFSET(0x1E0A8CC0)
#define CINMCBDCBMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A8F20)
#define CINMCBDCBMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A8C00)
#define CINMCBDCBMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A90F0)
#define CINMCBDCBMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A90C0)
#define CINMCBDCBMJ_NBBKMKBJHCF_OFFSET UNITYSDK_OFFSET(0x1E0A8CD0)
#define CINMCBDCBMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A8C30)
#define CINMCBDCBMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A8F50)
#define CINMCBDCBMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A8FB0)

inline static constexpr unsigned int CINMCBDCBMJ_TypeDefinitionIndex = 32728;

	class CINMCBDCBMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OIFNINOMHKL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CINMCBDCBMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CINMCBDCBMJ*>**)UnitySDK::FromName("", "CINMCBDCBMJ")->GetStaticField(0x175F0);
		}

		// static const ::System::Object IJAOJBIBDEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CINMCBDCBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CINMCBDCBMJ*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINMCBDCBMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CINMCBDCBMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CINMCBDCBMJ*>*(*)())((::PBYTE)hIl2Cpp + CINMCBDCBMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CINMCBDCBMJ* Clone()
		{
			return ((::CINMCBDCBMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJEOKLJJJBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_FJEOKLJJJBP_OFFSET))(this);
		}

		::System::Void NBBKMKBJHCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_NBBKMKBJHCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CINMCBDCBMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CINMCBDCBMJ*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CINMCBDCBMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CINMCBDCBMJ*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CINMCBDCBMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
