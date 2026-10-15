#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKFHJJFJDJG;
class JILJOLKDALE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKFHJJFJDJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E484B30)
#define GKFHJJFJDJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E484FB0)
#define GKFHJJFJDJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4843A0)
#define GKFHJJFJDJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4842D0)
#define GKFHJJFJDJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E484270)
#define GKFHJJFJDJG_DBCEJNDBJJN_OFFSET UNITYSDK_OFFSET(0x1E484450)
#define GKFHJJFJDJG_DKNAPFIHEBO_OFFSET UNITYSDK_OFFSET(0x1E4844C0)
#define GKFHJJFJDJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E484550)
#define GKFHJJFJDJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E484520)
#define GKFHJJFJDJG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4843E0)
#define GKFHJJFJDJG_FDMBGKILHHK_OFFSET UNITYSDK_OFFSET(0x1E4844B0)
#define GKFHJJFJDJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E484680)
#define GKFHJJFJDJG_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1E4843F0)
#define GKFHJJFJDJG_IIEJPGDGFJJ_OFFSET UNITYSDK_OFFSET(0x1E484460)
#define GKFHJJFJDJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E484230)
#define GKFHJJFJDJG_LBFPEPLHGMK_OFFSET UNITYSDK_OFFSET(0x1E4844D0)
#define GKFHJJFJDJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E484E00)
#define GKFHJJFJDJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E484D00)
#define GKFHJJFJDJG_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1E484400)
#define GKFHJJFJDJG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E4843D0)
#define GKFHJJFJDJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E484260)
#define GKFHJJFJDJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E484870)
#define GKFHJJFJDJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4848D0)

inline static constexpr unsigned int GKFHJJFJDJG_TypeDefinitionIndex = 25343;

	class GKFHJJFJDJG : public ::System::Object
	{
	public:
		::System::String* FADNLDFLEPN; // 0x10
		::System::String* JDOJAMHCAJD; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::JILJOLKDALE*>* PDEJMKPHCJB; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::String* ONIHPHBNEFA; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::GKFHJJFJDJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKFHJJFJDJG*>**)UnitySDK::FromName("", "GKFHJJFJDJG")->GetStaticField(0x1B000);
		}

		static ::Google::Protobuf::FieldCodec_1<::JILJOLKDALE*>** StaticGet_NOBKKEDGAKD()
		{
			return (::Google::Protobuf::FieldCodec_1<::JILJOLKDALE*>**)UnitySDK::FromName("", "GKFHJJFJDJG")->GetStaticField(0x1B008);
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

		static ::Google::Protobuf::MessageParser_1<::GKFHJJFJDJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKFHJJFJDJG*>*(*)())((::PBYTE)hIl2Cpp + GKFHJJFJDJG_JJGHOBBFNJD_OFFSET))();
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
