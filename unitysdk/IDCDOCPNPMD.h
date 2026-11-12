#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDCDOCPNPMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IDCDOCPNPMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F944A00)
#define IDCDOCPNPMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F944AA0)
#define IDCDOCPNPMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9446F0)
#define IDCDOCPNPMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9446C0)
#define IDCDOCPNPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9446B0)
#define IDCDOCPNPMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F944800)
#define IDCDOCPNPMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F944730)
#define IDCDOCPNPMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F944960)
#define IDCDOCPNPMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F944670)
#define IDCDOCPNPMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F944A50)
#define IDCDOCPNPMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F944A20)
#define IDCDOCPNPMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9446A0)
#define IDCDOCPNPMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F944990)
#define IDCDOCPNPMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9449F0)

inline static constexpr unsigned int IDCDOCPNPMD_TypeDefinitionIndex = 34599;

	class IDCDOCPNPMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IDCDOCPNPMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IDCDOCPNPMD*>**)UnitySDK::FromName("", "IDCDOCPNPMD")->GetStaticField(0x4C780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IDCDOCPNPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCDOCPNPMD*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDCDOCPNPMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IDCDOCPNPMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IDCDOCPNPMD*>*(*)())((::PBYTE)hIl2Cpp + IDCDOCPNPMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IDCDOCPNPMD* Clone()
		{
			return ((::IDCDOCPNPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IDCDOCPNPMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IDCDOCPNPMD*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IDCDOCPNPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDCDOCPNPMD*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IDCDOCPNPMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
