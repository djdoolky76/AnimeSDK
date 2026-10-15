#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLNKIGMDODK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLNKIGMDODK_APLLCIPBJFH_OFFSET UNITYSDK_OFFSET(0x1EB3B280)
#define NLNKIGMDODK_BIFLCPOCAIJ_OFFSET UNITYSDK_OFFSET(0x1EB3B340)
#define NLNKIGMDODK_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1EB3B250)
#define NLNKIGMDODK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB3BA40)
#define NLNKIGMDODK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3BFD0)
#define NLNKIGMDODK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB3B140)
#define NLNKIGMDODK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB3B0D0)
#define NLNKIGMDODK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3B0B0)
#define NLNKIGMDODK_DNNOPNKLBFN_OFFSET UNITYSDK_OFFSET(0x1EB3B2C0)
#define NLNKIGMDODK_DPLMLNBPEOB_OFFSET UNITYSDK_OFFSET(0x1EB3B350)
#define NLNKIGMDODK_EJGKNIJIMLH_OFFSET UNITYSDK_OFFSET(0x1EB3B270)
#define NLNKIGMDODK_ELIHDCDDJPA_OFFSET UNITYSDK_OFFSET(0x1EB3B360)
#define NLNKIGMDODK_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1EB3B2A0)
#define NLNKIGMDODK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB3B3D0)
#define NLNKIGMDODK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB3B370)
#define NLNKIGMDODK_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1EB3B290)
#define NLNKIGMDODK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB3B4C0)
#define NLNKIGMDODK_GGOHLKCKIOB_OFFSET UNITYSDK_OFFSET(0x1EB3B200)
#define NLNKIGMDODK_IGNJCKNCOFB_OFFSET UNITYSDK_OFFSET(0x1EB3B1F0)
#define NLNKIGMDODK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB3B040)
#define NLNKIGMDODK_JOJPGMNAKGM_OFFSET UNITYSDK_OFFSET(0x1EB3B2B0)
#define NLNKIGMDODK_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1EB3B260)
#define NLNKIGMDODK_MAKHLOBJHLM_OFFSET UNITYSDK_OFFSET(0x1EB3B310)
#define NLNKIGMDODK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB3BE30)
#define NLNKIGMDODK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB3BD90)
#define NLNKIGMDODK_NPNOFEKIEMJ_OFFSET UNITYSDK_OFFSET(0x1EB3B320)
#define NLNKIGMDODK_OHCMPFKGEAD_OFFSET UNITYSDK_OFFSET(0x1EB3B330)
#define NLNKIGMDODK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB3B0A0)
#define NLNKIGMDODK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB3B650)
#define NLNKIGMDODK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB3B6B0)

inline static constexpr unsigned int NLNKIGMDODK_TypeDefinitionIndex = 32068;

	class NLNKIGMDODK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* PDIDCBMEMHM; // 0x18
		::System::String* CPJPIHFFNCD; // 0x20
		::System::Int64 GFNEFHEHFOC; // 0x28
		::System::Boolean AKAIDILDIDF; // 0x30
		::System::Boolean GICHHEEBJLG; // 0x31
		::System::Byte _padding0[0x2];
		::System::UInt32 FOBLPJCIGJE; // 0x34
		::System::Int64 MFHNPAODGGN; // 0x38
		::System::UInt32 IAIHGNCKBEM; // 0x40
		static ::Google::Protobuf::MessageParser_1<::NLNKIGMDODK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLNKIGMDODK*>**)UnitySDK::FromName("", "NLNKIGMDODK")->GetStaticField(0x59A00);
		}

		// static const ::System::Object HPCAGAAIEOA; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object FPNAGNCJBME; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object ONHMEEONOIA; // 0x0
		// static const ::System::Object INPMBLCHNGN; // 0x0
		// static const ::System::Object PCLDLAEIODB; // 0x0
		// static const ::System::Object CKFAIGHGOHH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLNKIGMDODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNKIGMDODK*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLNKIGMDODK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLNKIGMDODK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLNKIGMDODK*>*(*)())((::PBYTE)hIl2Cpp + NLNKIGMDODK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLNKIGMDODK* Clone()
		{
			return ((::NLNKIGMDODK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_CLONE_OFFSET))(this);
		}

		::System::String* IGNJCKNCOFB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_IGNJCKNCOFB_OFFSET))(this);
		}

		::System::Void GGOHLKCKIOB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_GGOHLKCKIOB_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNKIGMDODK_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean EJGKNIJIMLH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_EJGKNIJIMLH_OFFSET))(this);
		}

		::System::Void APLLCIPBJFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNKIGMDODK_APLLCIPBJFH_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NLNKIGMDODK_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::String* JOJPGMNAKGM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_JOJPGMNAKGM_OFFSET))(this);
		}

		::System::Void DNNOPNKLBFN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_DNNOPNKLBFN_OFFSET))(this, a1);
		}

		::System::Int64 MAKHLOBJHLM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_MAKHLOBJHLM_OFFSET))(this);
		}

		::System::Void NPNOFEKIEMJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NLNKIGMDODK_NPNOFEKIEMJ_OFFSET))(this, a1);
		}

		::System::Boolean OHCMPFKGEAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_OHCMPFKGEAD_OFFSET))(this);
		}

		::System::Void BIFLCPOCAIJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNKIGMDODK_BIFLCPOCAIJ_OFFSET))(this, a1);
		}

		::System::UInt32 DPLMLNBPEOB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_DPLMLNBPEOB_OFFSET))(this);
		}

		::System::Void ELIHDCDDJPA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNKIGMDODK_ELIHDCDDJPA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLNKIGMDODK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLNKIGMDODK*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNKIGMDODK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLNKIGMDODK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLNKIGMDODK*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLNKIGMDODK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
