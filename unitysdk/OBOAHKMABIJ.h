#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBOAHKMABIJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OBOAHKMABIJ_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1EBB3A30)
#define OBOAHKMABIJ_BMDIJMPHNGP_OFFSET UNITYSDK_OFFSET(0x1EBB3A10)
#define OBOAHKMABIJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EBB3DF0)
#define OBOAHKMABIJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EBB41E0)
#define OBOAHKMABIJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBB3990)
#define OBOAHKMABIJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBB3950)
#define OBOAHKMABIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3940)
#define OBOAHKMABIJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EBB3B20)
#define OBOAHKMABIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EBB3A40)
#define OBOAHKMABIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EBB3C00)
#define OBOAHKMABIJ_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1EBB39F0)
#define OBOAHKMABIJ_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1EBB39E0)
#define OBOAHKMABIJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EBB3900)
#define OBOAHKMABIJ_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1EBB3A20)
#define OBOAHKMABIJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EBB4020)
#define OBOAHKMABIJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EBB3FD0)
#define OBOAHKMABIJ_OABFCKNCHOB_OFFSET UNITYSDK_OFFSET(0x1EBB3A00)
#define OBOAHKMABIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EBB3930)
#define OBOAHKMABIJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EBB3C50)
#define OBOAHKMABIJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EBB3CB0)

inline static constexpr unsigned int OBOAHKMABIJ_TypeDefinitionIndex = 33966;

	class OBOAHKMABIJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 JEHBHEOHGLN; // 0x18
		::System::UInt32 NOBELJMJOMJ; // 0x20
		::System::UInt32 HKMEMBIPHAN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OBOAHKMABIJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OBOAHKMABIJ*>**)UnitySDK::FromName("", "OBOAHKMABIJ")->GetStaticField(0x10E60);
		}

		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object FOHEGDNHODC; // 0x0
		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OBOAHKMABIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOAHKMABIJ*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBOAHKMABIJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OBOAHKMABIJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OBOAHKMABIJ*>*(*)())((::PBYTE)hIl2Cpp + OBOAHKMABIJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OBOAHKMABIJ* Clone()
		{
			return ((::OBOAHKMABIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_CLONE_OFFSET))(this);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt32 OABFCKNCHOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_OABFCKNCHOB_OFFSET))(this);
		}

		::System::Void BMDIJMPHNGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_BMDIJMPHNGP_OFFSET))(this, a1);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OBOAHKMABIJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OBOAHKMABIJ*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OBOAHKMABIJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBOAHKMABIJ*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OBOAHKMABIJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
