#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCBCHNNJPPP.h"
#include "unitysdk/System/Object.h"
class CIOMBHPBEDG;
class PCLHDCHFKLP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCLHDCHFKLP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBFEA40)
#define PCLHDCHFKLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFED80)
#define PCLHDCHFKLP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBFE410)
#define PCLHDCHFKLP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBFE360)
#define PCLHDCHFKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFE310)
#define PCLHDCHFKLP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBFE5B0)
#define PCLHDCHFKLP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBFE490)
#define PCLHDCHFKLP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBFE760)
#define PCLHDCHFKLP_HEHMNGANAJO_OFFSET UNITYSDK_OFFSET(0x1FBFE450)
#define PCLHDCHFKLP_HFMMFDGEMOC_OFFSET UNITYSDK_OFFSET(0x1FBFE480)
#define PCLHDCHFKLP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FBFE2D0)
#define PCLHDCHFKLP_KCEDLPGDJLN_OFFSET UNITYSDK_OFFSET(0x1FBFE440)
#define PCLHDCHFKLP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FBFEC70)
#define PCLHDCHFKLP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBFEBC0)
#define PCLHDCHFKLP_ODHPLPDONGE_OFFSET UNITYSDK_OFFSET(0x1FBFE470)
#define PCLHDCHFKLP_PALHDPBECMB_OFFSET UNITYSDK_OFFSET(0x1FBFE460)
#define PCLHDCHFKLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBFE300)
#define PCLHDCHFKLP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBFE890)
#define PCLHDCHFKLP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBFE8F0)

inline static constexpr unsigned int PCLHDCHFKLP_TypeDefinitionIndex = 27526;

	class PCLHDCHFKLP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::CIOMBHPBEDG* OKIHOBBKOIB; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BMDOAFDKLPK; // 0x20
		::HCBCHNNJPPP PBFBCEFPNCH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PCLHDCHFKLP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCLHDCHFKLP*>**)UnitySDK::FromName("", "PCLHDCHFKLP")->GetStaticField(0x2FB70);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NFNDKPLLEKJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PCLHDCHFKLP")->GetStaticField(0x2FB78);
		}

		// static const ::System::Object ACMKCHGNLAG; // 0x0
		// static const ::System::Object JABDCFFHKKP; // 0x0
		// static const ::System::Object DAMHKMNAFCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCLHDCHFKLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCLHDCHFKLP*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCLHDCHFKLP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCLHDCHFKLP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCLHDCHFKLP*>*(*)())((::PBYTE)hIl2Cpp + PCLHDCHFKLP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCLHDCHFKLP* Clone()
		{
			return ((::PCLHDCHFKLP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_CLONE_OFFSET))(this);
		}

		::CIOMBHPBEDG* KCEDLPGDJLN()
		{
			return ((::CIOMBHPBEDG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_KCEDLPGDJLN_OFFSET))(this);
		}

		::System::Void HEHMNGANAJO(::CIOMBHPBEDG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOMBHPBEDG*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_HEHMNGANAJO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PALHDPBECMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_PALHDPBECMB_OFFSET))(this);
		}

		::HCBCHNNJPPP ODHPLPDONGE()
		{
			return ((::HCBCHNNJPPP(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_ODHPLPDONGE_OFFSET))(this);
		}

		::System::Void HFMMFDGEMOC(::HCBCHNNJPPP a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCBCHNNJPPP))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_HFMMFDGEMOC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCLHDCHFKLP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCLHDCHFKLP*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCLHDCHFKLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCLHDCHFKLP*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCLHDCHFKLP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
