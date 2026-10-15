#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JFNJKAPPNOF.h"
#include "unitysdk/System/Object.h"
class OLLGFBLPHOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }
namespace System { class String; }

#define OLLGFBLPHOH_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1DEA93D0)
#define OLLGFBLPHOH_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1DEA93C0)
#define OLLGFBLPHOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEA97D0)
#define OLLGFBLPHOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9C90)
#define OLLGFBLPHOH_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1DEA93E0)
#define OLLGFBLPHOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEA9330)
#define OLLGFBLPHOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEA9270)
#define OLLGFBLPHOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9220)
#define OLLGFBLPHOH_EHBGMAJJJMN_OFFSET UNITYSDK_OFFSET(0x1DEA9360)
#define OLLGFBLPHOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEA9420)
#define OLLGFBLPHOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEA93F0)
#define OLLGFBLPHOH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEA93A0)
#define OLLGFBLPHOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEA94C0)
#define OLLGFBLPHOH_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1DEA93B0)
#define OLLGFBLPHOH_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DEA9380)
#define OLLGFBLPHOH_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DEA9370)
#define OLLGFBLPHOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEA91E0)
#define OLLGFBLPHOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEA9B70)
#define OLLGFBLPHOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEA9AA0)
#define OLLGFBLPHOH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEA9390)
#define OLLGFBLPHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEA9210)
#define OLLGFBLPHOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEA9540)
#define OLLGFBLPHOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEA95A0)

inline static constexpr unsigned int OLLGFBLPHOH_TypeDefinitionIndex = 29066;

	class OLLGFBLPHOH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* OHGABCKPNPN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IBEBBFIHLLP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::JFNJKAPPNOF GMPNCOBOFDM; // 0x28
		::System::UInt32 PDKNJCIEBHA; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>** StaticGet_IHCMPLHKGGC()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::DisplayAvatarDetailInfo*>**)UnitySDK::FromName("", "OLLGFBLPHOH")->GetStaticField(0x23A70);
		}

		static ::Google::Protobuf::MessageParser_1<::OLLGFBLPHOH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLLGFBLPHOH*>**)UnitySDK::FromName("", "OLLGFBLPHOH")->GetStaticField(0x23A78);
		}

		// static const ::System::Object MCJCIFEKGKM; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLLGFBLPHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLLGFBLPHOH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLLGFBLPHOH*>*(*)())((::PBYTE)hIl2Cpp + OLLGFBLPHOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLLGFBLPHOH* Clone()
		{
			return ((::OLLGFBLPHOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>* EHBGMAJJJMN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::DisplayAvatarDetailInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_EHBGMAJJJMN_OFFSET))(this);
		}

		::JFNJKAPPNOF JBIOGKPHKKC()
		{
			return ((::JFNJKAPPNOF(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::JFNJKAPPNOF a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFNJKAPPNOF))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 AFADJMFGCGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLLGFBLPHOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLLGFBLPHOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLGFBLPHOH*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLLGFBLPHOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
