#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBGKLKLKLFG_CBHDOGKPNFK.h"
#include "unitysdk/System/Object.h"
class KBGKLKLKLFG;
class PFNJCDINMLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KBGKLKLKLFG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7EF4E0)
#define KBGKLKLKLFG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7EFA50)
#define KBGKLKLKLFG_CEHKBFMPEAO_OFFSET UNITYSDK_OFFSET(0x1E7EECE0)
#define KBGKLKLKLFG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7EEDF0)
#define KBGKLKLKLFG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7EEB80)
#define KBGKLKLKLFG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EEB70)
#define KBGKLKLKLFG_DGNGPKEFJEG_OFFSET UNITYSDK_OFFSET(0x1E7EEDD0)
#define KBGKLKLKLFG_EDNHCAFGMNG_OFFSET UNITYSDK_OFFSET(0x1E7EED60)
#define KBGKLKLKLFG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7EEEC0)
#define KBGKLKLKLFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7EEE60)
#define KBGKLKLKLFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7EF1B0)
#define KBGKLKLKLFG_ICPNOIONFFO_OFFSET UNITYSDK_OFFSET(0x1E7EEE40)
#define KBGKLKLKLFG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7EEB00)
#define KBGKLKLKLFG_KPIKOLEGENM_OFFSET UNITYSDK_OFFSET(0x1E7EED90)
#define KBGKLKLKLFG_LMDPCGCPNOL_OFFSET UNITYSDK_OFFSET(0x1E7EEE50)
#define KBGKLKLKLFG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7EF810)
#define KBGKLKLKLFG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7EF650)
#define KBGKLKLKLFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7EEB60)
#define KBGKLKLKLFG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7EF2E0)
#define KBGKLKLKLFG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7EF340)

inline static constexpr unsigned int KBGKLKLKLFG_TypeDefinitionIndex = 25901;

	class KBGKLKLKLFG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Object* KGKNPPHMGKC; // 0x18
		::KBGKLKLKLFG_CBHDOGKPNFK OLBJLCGPCKM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KBGKLKLKLFG")->GetStaticField(0xF000);
		}

		// static const ::System::Object FNHENNCPKAA; // 0x0
		// static const ::System::Object EOMFFNCEAOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KBGKLKLKLFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBGKLKLKLFG*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KBGKLKLKLFG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KBGKLKLKLFG* Clone()
		{
			return ((::KBGKLKLKLFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CLONE_OFFSET))(this);
		}

		::System::UInt32 CEHKBFMPEAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CEHKBFMPEAO_OFFSET))(this);
		}

		::System::Void EDNHCAFGMNG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_EDNHCAFGMNG_OFFSET))(this, a1);
		}

		::PFNJCDINMLA* KPIKOLEGENM()
		{
			return ((::PFNJCDINMLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_KPIKOLEGENM_OFFSET))(this);
		}

		::System::Void DGNGPKEFJEG(::PFNJCDINMLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFNJCDINMLA*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_DGNGPKEFJEG_OFFSET))(this, a1);
		}

		::KBGKLKLKLFG_CBHDOGKPNFK ICPNOIONFFO()
		{
			return ((::KBGKLKLKLFG_CBHDOGKPNFK(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_ICPNOIONFFO_OFFSET))(this);
		}

		::System::Void LMDPCGCPNOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_LMDPCGCPNOL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KBGKLKLKLFG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KBGKLKLKLFG*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KBGKLKLKLFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBGKLKLKLFG*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KBGKLKLKLFG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
