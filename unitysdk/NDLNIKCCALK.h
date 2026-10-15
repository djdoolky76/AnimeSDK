#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDLNIKCCALK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDLNIKCCALK_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1EAEB380)
#define NDLNIKCCALK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAEB910)
#define NDLNIKCCALK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAEBD60)
#define NDLNIKCCALK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAEB2D0)
#define NDLNIKCCALK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAEB220)
#define NDLNIKCCALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAEB1D0)
#define NDLNIKCCALK_EGDNLCIFBKO_OFFSET UNITYSDK_OFFSET(0x1EAEB390)
#define NDLNIKCCALK_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1EAEB350)
#define NDLNIKCCALK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAEB480)
#define NDLNIKCCALK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAEB3B0)
#define NDLNIKCCALK_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1EAEB340)
#define NDLNIKCCALK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAEB510)
#define NDLNIKCCALK_GIJCKNDLBLA_OFFSET UNITYSDK_OFFSET(0x1EAEB3A0)
#define NDLNIKCCALK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAEB160)
#define NDLNIKCCALK_LIOLLGPIICP_OFFSET UNITYSDK_OFFSET(0x1EAEB330)
#define NDLNIKCCALK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAEBC30)
#define NDLNIKCCALK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAEBBC0)
#define NDLNIKCCALK_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1EAEB370)
#define NDLNIKCCALK_OBEMPKMPHFN_OFFSET UNITYSDK_OFFSET(0x1EAEB360)
#define NDLNIKCCALK_OHHLPNGBBGG_OFFSET UNITYSDK_OFFSET(0x1EAEB320)
#define NDLNIKCCALK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAEB1C0)
#define NDLNIKCCALK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAEB650)
#define NDLNIKCCALK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAEB6B0)

inline static constexpr unsigned int NDLNIKCCALK_TypeDefinitionIndex = 29680;

	class NDLNIKCCALK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFLPFHFLBMH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Int64 DPNKODHICIJ; // 0x20
		::System::Int64 MFHNPAODGGN; // 0x28
		::System::UInt32 DDGIBCDPLEF; // 0x30
		::System::Boolean NBCKNGCAFCA; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_FMDLALGLENN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NDLNIKCCALK")->GetStaticField(0x5D7A0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NDLNIKCCALK")->GetStaticField(0x5D7A8);
		}

		// static const ::System::Object MNEFDLLPPHJ; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		// static const ::System::Object DIFMBKCJENG; // 0x0
		// static const ::System::Object ICGAGDOBKAM; // 0x0
		// static const ::System::Object OJMGLODBDDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDLNIKCCALK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLNIKCCALK*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDLNIKCCALK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NDLNIKCCALK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDLNIKCCALK* Clone()
		{
			return ((::NDLNIKCCALK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_CLONE_OFFSET))(this);
		}

		::System::Boolean OHHLPNGBBGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_OHHLPNGBBGG_OFFSET))(this);
		}

		::System::Void LIOLLGPIICP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDLNIKCCALK_LIOLLGPIICP_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NDLNIKCCALK_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBEMPKMPHFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_OBEMPKMPHFN_OFFSET))(this);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_NEJDALLPIMG_OFFSET))(this);
		}

		::System::Void BIPGANGGAEC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NDLNIKCCALK_BIPGANGGAEC_OFFSET))(this, a1);
		}

		::System::UInt32 EGDNLCIFBKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_EGDNLCIFBKO_OFFSET))(this);
		}

		::System::Void GIJCKNDLBLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDLNIKCCALK_GIJCKNDLBLA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDLNIKCCALK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDLNIKCCALK*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLNIKCCALK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDLNIKCCALK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDLNIKCCALK*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDLNIKCCALK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
