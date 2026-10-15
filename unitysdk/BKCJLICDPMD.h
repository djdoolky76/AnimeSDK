#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKCJLICDPMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BKCJLICDPMD_BAGCCAKCIFD_OFFSET UNITYSDK_OFFSET(0x1DF20F40)
#define BKCJLICDPMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF21AD0)
#define BKCJLICDPMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF21C70)
#define BKCJLICDPMD_CFGFDLGNHHI_OFFSET UNITYSDK_OFFSET(0x1DF20ED0)
#define BKCJLICDPMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF20E80)
#define BKCJLICDPMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF20E50)
#define BKCJLICDPMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF20E40)
#define BKCJLICDPMD_ECNKCIHDAFP_OFFSET UNITYSDK_OFFSET(0x1DF20EE0)
#define BKCJLICDPMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF20F80)
#define BKCJLICDPMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF20F50)
#define BKCJLICDPMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF21430)
#define BKCJLICDPMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF20E00)
#define BKCJLICDPMD_JJMMHAAPLCJ_OFFSET UNITYSDK_OFFSET(0x1DF20F30)
#define BKCJLICDPMD_KEAKLFKNNPP_OFFSET UNITYSDK_OFFSET(0x1DF20F00)
#define BKCJLICDPMD_KGCIIJCEOBI_OFFSET UNITYSDK_OFFSET(0x1DF20F20)
#define BKCJLICDPMD_LFOLCINDDJL_OFFSET UNITYSDK_OFFSET(0x1DF20F10)
#define BKCJLICDPMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF21BC0)
#define BKCJLICDPMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF21B30)
#define BKCJLICDPMD_NNFKKOEOFPD_OFFSET UNITYSDK_OFFSET(0x1DF20EF0)
#define BKCJLICDPMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF20E30)
#define BKCJLICDPMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF21880)
#define BKCJLICDPMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF218E0)

inline static constexpr unsigned int BKCJLICDPMD_TypeDefinitionIndex = 27806;

	class BKCJLICDPMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Single EIKLKDGDLEG; // 0x18
		::System::Single KFNMMILCBFP; // 0x1C
		::System::Single IOCAJCJJGOM; // 0x20
		::System::Single HGALIDFOCAK; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BKCJLICDPMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BKCJLICDPMD*>**)UnitySDK::FromName("", "BKCJLICDPMD")->GetStaticField(0x5A200);
		}

		// static const ::System::Object PLAGKJDJGBN; // 0x0
		// static const ::System::Object MAIOIAOEKKO; // 0x0
		// static const ::System::Object EJPKOEMIPAE; // 0x0
		// static const ::System::Object OAPJNMPOKHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BKCJLICDPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKCJLICDPMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BKCJLICDPMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BKCJLICDPMD*>*(*)())((::PBYTE)hIl2Cpp + BKCJLICDPMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BKCJLICDPMD* Clone()
		{
			return ((::BKCJLICDPMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_CLONE_OFFSET))(this);
		}

		::System::Single CFGFDLGNHHI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_CFGFDLGNHHI_OFFSET))(this);
		}

		::System::Void ECNKCIHDAFP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKCJLICDPMD_ECNKCIHDAFP_OFFSET))(this, a1);
		}

		::System::Single NNFKKOEOFPD()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_NNFKKOEOFPD_OFFSET))(this);
		}

		::System::Void KEAKLFKNNPP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKCJLICDPMD_KEAKLFKNNPP_OFFSET))(this, a1);
		}

		::System::Single LFOLCINDDJL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_LFOLCINDDJL_OFFSET))(this);
		}

		::System::Void KGCIIJCEOBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKCJLICDPMD_KGCIIJCEOBI_OFFSET))(this, a1);
		}

		::System::Single JJMMHAAPLCJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_JJMMHAAPLCJ_OFFSET))(this);
		}

		::System::Void BAGCCAKCIFD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BKCJLICDPMD_BAGCCAKCIFD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BKCJLICDPMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCJLICDPMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BKCJLICDPMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKCJLICDPMD*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BKCJLICDPMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
