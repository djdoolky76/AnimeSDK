#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class DCEPBLJKNNE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCEPBLJKNNE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13C930)
#define DCEPBLJKNNE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13CD10)
#define DCEPBLJKNNE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13C320)
#define DCEPBLJKNNE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13C2B0)
#define DCEPBLJKNNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13C2A0)
#define DCEPBLJKNNE_DGLPOFNPOLJ_OFFSET UNITYSDK_OFFSET(0x1E13C410)
#define DCEPBLJKNNE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13C560)
#define DCEPBLJKNNE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13C430)
#define DCEPBLJKNNE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13C6F0)
#define DCEPBLJKNNE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13C230)
#define DCEPBLJKNNE_JKLFJNBLIFP_OFFSET UNITYSDK_OFFSET(0x1E13C3D0)
#define DCEPBLJKNNE_JOJCPNIDHME_OFFSET UNITYSDK_OFFSET(0x1E13C420)
#define DCEPBLJKNNE_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E13C3F0)
#define DCEPBLJKNNE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13CB30)
#define DCEPBLJKNNE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13CA90)
#define DCEPBLJKNNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13C290)
#define DCEPBLJKNNE_PEAHKMLHLLP_OFFSET UNITYSDK_OFFSET(0x1E13C3E0)
#define DCEPBLJKNNE_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E13C400)
#define DCEPBLJKNNE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13C780)
#define DCEPBLJKNNE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13C7E0)

inline static constexpr unsigned int DCEPBLJKNNE_TypeDefinitionIndex = 33313;

	class DCEPBLJKNNE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::UInt32 AOEIAMDAOFJ; // 0x20
		::System::Int32 FPIMLCPDEDO; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DCEPBLJKNNE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCEPBLJKNNE*>**)UnitySDK::FromName("", "DCEPBLJKNNE")->GetStaticField(0x243E0);
		}

		// static const ::System::Object BPBHPAOICKE; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object GFIEIDLEHFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCEPBLJKNNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCEPBLJKNNE*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCEPBLJKNNE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCEPBLJKNNE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCEPBLJKNNE*>*(*)())((::PBYTE)hIl2Cpp + DCEPBLJKNNE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCEPBLJKNNE* Clone()
		{
			return ((::DCEPBLJKNNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_CLONE_OFFSET))(this);
		}

		::System::Int32 JKLFJNBLIFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_JKLFJNBLIFP_OFFSET))(this);
		}

		::System::Void PEAHKMLHLLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_PEAHKMLHLLP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 DGLPOFNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_DGLPOFNPOLJ_OFFSET))(this);
		}

		::System::Void JOJCPNIDHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_JOJCPNIDHME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCEPBLJKNNE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCEPBLJKNNE*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCEPBLJKNNE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCEPBLJKNNE*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCEPBLJKNNE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
