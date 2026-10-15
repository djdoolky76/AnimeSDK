#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAJDLLEFGHB;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAJDLLEFGHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B96F0)
#define BAJDLLEFGHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B9AD0)
#define BAJDLLEFGHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B90F0)
#define BAJDLLEFGHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B9080)
#define BAJDLLEFGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B9070)
#define BAJDLLEFGHB_DGLPOFNPOLJ_OFFSET UNITYSDK_OFFSET(0x1E7B9190)
#define BAJDLLEFGHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B9320)
#define BAJDLLEFGHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B91F0)
#define BAJDLLEFGHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B94B0)
#define BAJDLLEFGHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B9000)
#define BAJDLLEFGHB_JKLFJNBLIFP_OFFSET UNITYSDK_OFFSET(0x1E7B91B0)
#define BAJDLLEFGHB_JOJCPNIDHME_OFFSET UNITYSDK_OFFSET(0x1E7B91A0)
#define BAJDLLEFGHB_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E7B91D0)
#define BAJDLLEFGHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B98F0)
#define BAJDLLEFGHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B9850)
#define BAJDLLEFGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B9060)
#define BAJDLLEFGHB_PEAHKMLHLLP_OFFSET UNITYSDK_OFFSET(0x1E7B91C0)
#define BAJDLLEFGHB_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E7B91E0)
#define BAJDLLEFGHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B9540)
#define BAJDLLEFGHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B95A0)

inline static constexpr unsigned int BAJDLLEFGHB_TypeDefinitionIndex = 33305;

	class BAJDLLEFGHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::Int32 FPIMLCPDEDO; // 0x20
		::System::UInt32 AOEIAMDAOFJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BAJDLLEFGHB")->GetStaticField(0x45AC0);
		}

		// static const ::System::Object GFIEIDLEHFA; // 0x0
		// static const ::System::Object BPBHPAOICKE; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAJDLLEFGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJDLLEFGHB*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAJDLLEFGHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BAJDLLEFGHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAJDLLEFGHB* Clone()
		{
			return ((::BAJDLLEFGHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_CLONE_OFFSET))(this);
		}

		::System::UInt32 DGLPOFNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_DGLPOFNPOLJ_OFFSET))(this);
		}

		::System::Void JOJCPNIDHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_JOJCPNIDHME_OFFSET))(this, a1);
		}

		::System::Int32 JKLFJNBLIFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_JKLFJNBLIFP_OFFSET))(this);
		}

		::System::Void PEAHKMLHLLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_PEAHKMLHLLP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAJDLLEFGHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAJDLLEFGHB*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAJDLLEFGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAJDLLEFGHB*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAJDLLEFGHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
