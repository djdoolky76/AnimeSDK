#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class GNFDPONFLJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNFDPONFLJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DDA20)
#define GNFDPONFLJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DDE00)
#define GNFDPONFLJD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DD420)
#define GNFDPONFLJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DD3B0)
#define GNFDPONFLJD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD3A0)
#define GNFDPONFLJD_DGLPOFNPOLJ_OFFSET UNITYSDK_OFFSET(0x1E4DD4E0)
#define GNFDPONFLJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DD650)
#define GNFDPONFLJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DD520)
#define GNFDPONFLJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DD7E0)
#define GNFDPONFLJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DD330)
#define GNFDPONFLJD_JKLFJNBLIFP_OFFSET UNITYSDK_OFFSET(0x1E4DD4C0)
#define GNFDPONFLJD_JOJCPNIDHME_OFFSET UNITYSDK_OFFSET(0x1E4DD4F0)
#define GNFDPONFLJD_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1E4DD500)
#define GNFDPONFLJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DDC20)
#define GNFDPONFLJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DDB80)
#define GNFDPONFLJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DD390)
#define GNFDPONFLJD_PEAHKMLHLLP_OFFSET UNITYSDK_OFFSET(0x1E4DD4D0)
#define GNFDPONFLJD_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1E4DD510)
#define GNFDPONFLJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DD870)
#define GNFDPONFLJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DD8D0)

inline static constexpr unsigned int GNFDPONFLJD_TypeDefinitionIndex = 33323;

	class GNFDPONFLJD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x18
		::System::Int32 FPIMLCPDEDO; // 0x20
		::System::UInt32 AOEIAMDAOFJ; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GNFDPONFLJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNFDPONFLJD*>**)UnitySDK::FromName("", "GNFDPONFLJD")->GetStaticField(0x23040);
		}

		// static const ::System::Object BPBHPAOICKE; // 0x0
		// static const ::System::Object GFIEIDLEHFA; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNFDPONFLJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNFDPONFLJD*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNFDPONFLJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNFDPONFLJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNFDPONFLJD*>*(*)())((::PBYTE)hIl2Cpp + GNFDPONFLJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNFDPONFLJD* Clone()
		{
			return ((::GNFDPONFLJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_CLONE_OFFSET))(this);
		}

		::System::Int32 JKLFJNBLIFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_JKLFJNBLIFP_OFFSET))(this);
		}

		::System::Void PEAHKMLHLLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GNFDPONFLJD_PEAHKMLHLLP_OFFSET))(this, a1);
		}

		::System::UInt32 DGLPOFNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_DGLPOFNPOLJ_OFFSET))(this);
		}

		::System::Void JOJCPNIDHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GNFDPONFLJD_JOJCPNIDHME_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNFDPONFLJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNFDPONFLJD*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNFDPONFLJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNFDPONFLJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNFDPONFLJD*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNFDPONFLJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
