#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDNFLPNPLMN;
class JJOIBGGCJBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJOIBGGCJBI_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E736EB0)
#define JJOIBGGCJBI_AIOACDPMEFG_OFFSET UNITYSDK_OFFSET(0x1E736E70)
#define JJOIBGGCJBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E737560)
#define JJOIBGGCJBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E737A00)
#define JJOIBGGCJBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E736D70)
#define JJOIBGGCJBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E736CA0)
#define JJOIBGGCJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E736C90)
#define JJOIBGGCJBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E737030)
#define JJOIBGGCJBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E736F00)
#define JJOIBGGCJBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E737140)
#define JJOIBGGCJBI_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1E736ED0)
#define JJOIBGGCJBI_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1E736EC0)
#define JJOIBGGCJBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E736C50)
#define JJOIBGGCJBI_LEKGJHPNLPG_OFFSET UNITYSDK_OFFSET(0x1E736E60)
#define JJOIBGGCJBI_LFGKBKPBAGO_OFFSET UNITYSDK_OFFSET(0x1E736E90)
#define JJOIBGGCJBI_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E736EA0)
#define JJOIBGGCJBI_MBIJMFAAMBJ_OFFSET UNITYSDK_OFFSET(0x1E736E80)
#define JJOIBGGCJBI_MCFNIIKKJKF_OFFSET UNITYSDK_OFFSET(0x1E736EF0)
#define JJOIBGGCJBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7378E0)
#define JJOIBGGCJBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7377D0)
#define JJOIBGGCJBI_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1E736EE0)
#define JJOIBGGCJBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E736C80)
#define JJOIBGGCJBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7372D0)
#define JJOIBGGCJBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E737330)

inline static constexpr unsigned int JJOIBGGCJBI_TypeDefinitionIndex = 33970;

	class JJOIBGGCJBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DDNFLPNPLMN* CMCGHMBGLHI; // 0x18
		::System::UInt64 MFDIFJCMBCL; // 0x20
		::System::UInt32 HKMEMBIPHAN; // 0x28
		::System::Boolean LDNMMDEOKCC; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt64 JEHBHEOHGLN; // 0x30
		static ::Google::Protobuf::MessageParser_1<::JJOIBGGCJBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJOIBGGCJBI*>**)UnitySDK::FromName("", "JJOIBGGCJBI")->GetStaticField(0x62D00);
		}

		// static const ::System::Object FBDHDGMKFHC; // 0x0
		// static const ::System::Object EFOIJCPJOCD; // 0x0
		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object FJDILKCJAIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJOIBGGCJBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJOIBGGCJBI*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOIBGGCJBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJOIBGGCJBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJOIBGGCJBI*>*(*)())((::PBYTE)hIl2Cpp + JJOIBGGCJBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJOIBGGCJBI* Clone()
		{
			return ((::JJOIBGGCJBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_CLONE_OFFSET))(this);
		}

		::System::Boolean LEKGJHPNLPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_LEKGJHPNLPG_OFFSET))(this);
		}

		::System::Void AIOACDPMEFG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_AIOACDPMEFG_OFFSET))(this, a1);
		}

		::DDNFLPNPLMN* MBIJMFAAMBJ()
		{
			return ((::DDNFLPNPLMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_MBIJMFAAMBJ_OFFSET))(this);
		}

		::System::Void LFGKBKPBAGO(::DDNFLPNPLMN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDNFLPNPLMN*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_LFGKBKPBAGO_OFFSET))(this, a1);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt64 MHLKGONEGDG()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_MHLKGONEGDG_OFFSET))(this);
		}

		::System::Void MCFNIIKKJKF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_MCFNIIKKJKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJOIBGGCJBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJOIBGGCJBI*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJOIBGGCJBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJOIBGGCJBI*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJOIBGGCJBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
