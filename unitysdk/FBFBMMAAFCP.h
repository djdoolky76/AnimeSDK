#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBFBMMAAFCP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBFBMMAAFCP_BPBDKBEFKOI_OFFSET UNITYSDK_OFFSET(0x1F8926D0)
#define FBFBMMAAFCP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F892A40)
#define FBFBMMAAFCP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F892D10)
#define FBFBMMAAFCP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F892640)
#define FBFBMMAAFCP_COCJPEKFJIG_OFFSET UNITYSDK_OFFSET(0x1F8926C0)
#define FBFBMMAAFCP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F892610)
#define FBFBMMAAFCP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F892600)
#define FBFBMMAAFCP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F892800)
#define FBFBMMAAFCP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8926F0)
#define FBFBMMAAFCP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8928D0)
#define FBFBMMAAFCP_HABBPIFNJDI_OFFSET UNITYSDK_OFFSET(0x1F8926B0)
#define FBFBMMAAFCP_HPKDOPOKFLA_OFFSET UNITYSDK_OFFSET(0x1F8926E0)
#define FBFBMMAAFCP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F892590)
#define FBFBMMAAFCP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F892B90)
#define FBFBMMAAFCP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F892B50)
#define FBFBMMAAFCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8925F0)
#define FBFBMMAAFCP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F892900)
#define FBFBMMAAFCP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F892960)

inline static constexpr unsigned int FBFBMMAAFCP_TypeDefinitionIndex = 29917;

	class FBFBMMAAFCP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CCENLJNFIAH; // 0x18
		::System::UInt32 CDOPCGOMFLP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FBFBMMAAFCP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBFBMMAAFCP*>**)UnitySDK::FromName("", "FBFBMMAAFCP")->GetStaticField(0x40CD0);
		}

		// static const ::System::Object AGLPIEKFBNB; // 0x0
		// static const ::System::Object EAIPPMEBKKG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBFBMMAAFCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFBMMAAFCP*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBFBMMAAFCP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBFBMMAAFCP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBFBMMAAFCP*>*(*)())((::PBYTE)hIl2Cpp + FBFBMMAAFCP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBFBMMAAFCP* Clone()
		{
			return ((::FBFBMMAAFCP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_CLONE_OFFSET))(this);
		}

		::System::UInt32 HABBPIFNJDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_HABBPIFNJDI_OFFSET))(this);
		}

		::System::Void COCJPEKFJIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_COCJPEKFJIG_OFFSET))(this, a1);
		}

		::System::UInt32 BPBDKBEFKOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_BPBDKBEFKOI_OFFSET))(this);
		}

		::System::Void HPKDOPOKFLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_HPKDOPOKFLA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBFBMMAAFCP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBFBMMAAFCP*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBFBMMAAFCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBFBMMAAFCP*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBFBMMAAFCP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
