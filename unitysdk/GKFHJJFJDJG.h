#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFHJJFJDJG;
class JILJOLKDALE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKFHJJFJDJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4B21C0)
#define GKFHJJFJDJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4B2640)
#define GKFHJJFJDJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B1A30)
#define GKFHJJFJDJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B1960)
#define GKFHJJFJDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B1900)
#define GKFHJJFJDJG_DBCEJNDBJJN_OFFSET UNITYSDK_OFFSET(0x1E4B1AE0)
#define GKFHJJFJDJG_DKNAPFIHEBO_OFFSET UNITYSDK_OFFSET(0x1E4B1B50)
#define GKFHJJFJDJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4B1BE0)
#define GKFHJJFJDJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B1BB0)
#define GKFHJJFJDJG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4B1A70)
#define GKFHJJFJDJG_FDMBGKILHHK_OFFSET UNITYSDK_OFFSET(0x1E4B1B40)
#define GKFHJJFJDJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4B1D10)
#define GKFHJJFJDJG_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E4B1A80)
#define GKFHJJFJDJG_IIEJPGDGFJJ_OFFSET UNITYSDK_OFFSET(0x1E4B1AF0)
#define GKFHJJFJDJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B18C0)
#define GKFHJJFJDJG_LBFPEPLHGMK_OFFSET UNITYSDK_OFFSET(0x1E4B1B60)
#define GKFHJJFJDJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4B2490)
#define GKFHJJFJDJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4B2390)
#define GKFHJJFJDJG_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E4B1A90)
#define GKFHJJFJDJG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4B1A60)
#define GKFHJJFJDJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B18F0)
#define GKFHJJFJDJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4B1F00)
#define GKFHJJFJDJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4B1F60)

	class GKFHJJFJDJG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JILJOLKDALE*>* PDEJMKPHCJB; // 0x18
		::System::String* ONIHPHBNEFA; // 0x20
		::System::String* FADNLDFLEPN; // 0x28
		::System::String* JDOJAMHCAJD; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKFHJJFJDJG")->GetStaticField(0x1D0C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_NOBKKEDGAKD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GKFHJJFJDJG")->GetStaticField(0x1D0C8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DBKOHLFBPNI; // 0x0
		// static const ::System::Object PBOFGDMJHKC; // 0x0
		// static const ::System::Object JICACLPABCM; // 0x0
		// static const ::System::Object OAIIPCJIJDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKFHJJFJDJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKFHJJFJDJG*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKFHJJFJDJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKFHJJFJDJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKFHJJFJDJG* Clone()
		{
			return ((::GKFHJJFJDJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::String* DBCEJNDBJJN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_DBCEJNDBJJN_OFFSET))(this);
		}

		::System::Void IIEJPGDGFJJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_IIEJPGDGFJJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JILJOLKDALE*>* FDMBGKILHHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JILJOLKDALE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_FDMBGKILHHK_OFFSET))(this);
		}

		::System::String* DKNAPFIHEBO()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_DKNAPFIHEBO_OFFSET))(this);
		}

		::System::Void LBFPEPLHGMK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_LBFPEPLHGMK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKFHJJFJDJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKFHJJFJDJG*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKFHJJFJDJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKFHJJFJDJG*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKFHJJFJDJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
