#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGNNOJEEBLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGNNOJEEBLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73E470)
#define JGNNOJEEBLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73E740)
#define JGNNOJEEBLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73E070)
#define JGNNOJEEBLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73E040)
#define JGNNOJEEBLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73E030)
#define JGNNOJEEBLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73E230)
#define JGNNOJEEBLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73E120)
#define JGNNOJEEBLP_FGGLJIMHKIB_OFFSET UNITYSDK_OFFSET(0x1E73E0E0)
#define JGNNOJEEBLP_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E73E110)
#define JGNNOJEEBLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73E300)
#define JGNNOJEEBLP_HKDNAMGMIII_OFFSET UNITYSDK_OFFSET(0x1E73E0F0)
#define JGNNOJEEBLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73DFC0)
#define JGNNOJEEBLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73E5C0)
#define JGNNOJEEBLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73E580)
#define JGNNOJEEBLP_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E73E100)
#define JGNNOJEEBLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73E020)
#define JGNNOJEEBLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73E330)
#define JGNNOJEEBLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73E390)

inline static constexpr unsigned int JGNNOJEEBLP_TypeDefinitionIndex = 34994;

	class JGNNOJEEBLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AIIBKJHJCMB; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGNNOJEEBLP")->GetStaticField(0x439A0);
		}

		// static const ::System::Object HHAAHDKDGLF; // 0x0
		// static const ::System::Object CPDECFMCKEM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGNNOJEEBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNNOJEEBLP*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGNNOJEEBLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGNNOJEEBLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGNNOJEEBLP* Clone()
		{
			return ((::JGNNOJEEBLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FGGLJIMHKIB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_FGGLJIMHKIB_OFFSET))(this);
		}

		::System::Void HKDNAMGMIII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_HKDNAMGMIII_OFFSET))(this, a1);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGNNOJEEBLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGNNOJEEBLP*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGNNOJEEBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNNOJEEBLP*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGNNOJEEBLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
