#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJBIFIMJDOL;
class CAGKEDMHEOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJBIFIMJDOL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE06F80)
#define BJBIFIMJDOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE07360)
#define BJBIFIMJDOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE06970)
#define BJBIFIMJDOL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE06900)
#define BJBIFIMJDOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE068F0)
#define BJBIFIMJDOL_DGLPOFNPOLJ_OFFSET UNITYSDK_OFFSET(0x1DE06A60)
#define BJBIFIMJDOL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE06BB0)
#define BJBIFIMJDOL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE06A80)
#define BJBIFIMJDOL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE06D40)
#define BJBIFIMJDOL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE06880)
#define BJBIFIMJDOL_JKLFJNBLIFP_OFFSET UNITYSDK_OFFSET(0x1DE06A20)
#define BJBIFIMJDOL_JOJCPNIDHME_OFFSET UNITYSDK_OFFSET(0x1DE06A70)
#define BJBIFIMJDOL_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1DE06A40)
#define BJBIFIMJDOL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE07180)
#define BJBIFIMJDOL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE070E0)
#define BJBIFIMJDOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE068E0)
#define BJBIFIMJDOL_PEAHKMLHLLP_OFFSET UNITYSDK_OFFSET(0x1DE06A30)
#define BJBIFIMJDOL_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1DE06A50)
#define BJBIFIMJDOL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE06DD0)
#define BJBIFIMJDOL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE06E30)

inline static constexpr unsigned int BJBIFIMJDOL_TypeDefinitionIndex = 33307;

	class BJBIFIMJDOL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::Int32 FPIMLCPDEDO; // 0x20
		::System::UInt32 AOEIAMDAOFJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BJBIFIMJDOL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJBIFIMJDOL*>**)UnitySDK::FromName("", "BJBIFIMJDOL")->GetStaticField(0x48C20);
		}

		// static const ::System::Object BPBHPAOICKE; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		// static const ::System::Object GFIEIDLEHFA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJBIFIMJDOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJBIFIMJDOL*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJBIFIMJDOL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJBIFIMJDOL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJBIFIMJDOL*>*(*)())((::PBYTE)hIl2Cpp + BJBIFIMJDOL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJBIFIMJDOL* Clone()
		{
			return ((::BJBIFIMJDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_CLONE_OFFSET))(this);
		}

		::System::Int32 JKLFJNBLIFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_JKLFJNBLIFP_OFFSET))(this);
		}

		::System::Void PEAHKMLHLLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_PEAHKMLHLLP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::UInt32 DGLPOFNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_DGLPOFNPOLJ_OFFSET))(this);
		}

		::System::Void JOJCPNIDHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_JOJCPNIDHME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJBIFIMJDOL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJBIFIMJDOL*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJBIFIMJDOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJBIFIMJDOL*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJBIFIMJDOL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
