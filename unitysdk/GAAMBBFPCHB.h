#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAAMBBFPCHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAAMBBFPCHB_BIPGANGGAEC_OFFSET UNITYSDK_OFFSET(0x1F6FF0D0)
#define GAAMBBFPCHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6FF5F0)
#define GAAMBBFPCHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6FF9D0)
#define GAAMBBFPCHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6FF090)
#define GAAMBBFPCHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6FEFF0)
#define GAAMBBFPCHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FEFA0)
#define GAAMBBFPCHB_ENEIEIPBBPN_OFFSET UNITYSDK_OFFSET(0x1F6FF120)
#define GAAMBBFPCHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6FF1C0)
#define GAAMBBFPCHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6FF130)
#define GAAMBBFPCHB_FFFDGCMLLAI_OFFSET UNITYSDK_OFFSET(0x1F6FF110)
#define GAAMBBFPCHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6FF2D0)
#define GAAMBBFPCHB_IFJFCBKCNEI_OFFSET UNITYSDK_OFFSET(0x1F6FF100)
#define GAAMBBFPCHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6FEF60)
#define GAAMBBFPCHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6FF8E0)
#define GAAMBBFPCHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6FF870)
#define GAAMBBFPCHB_NEJDALLPIMG_OFFSET UNITYSDK_OFFSET(0x1F6FF0C0)
#define GAAMBBFPCHB_OBEMPKMPHFN_OFFSET UNITYSDK_OFFSET(0x1F6FF0E0)
#define GAAMBBFPCHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6FEF90)
#define GAAMBBFPCHB_PNIMLCOMOJK_OFFSET UNITYSDK_OFFSET(0x1F6FF0F0)
#define GAAMBBFPCHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6FF400)
#define GAAMBBFPCHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6FF460)

inline static constexpr unsigned int GAAMBBFPCHB_TypeDefinitionIndex = 31804;

	class GAAMBBFPCHB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PFLPFHFLBMH; // 0x18
		::System::UInt32 EAFIIPBMOPP; // 0x20
		::System::Byte _padding0[0x4];
		::System::Int64 MFHNPAODGGN; // 0x28
		::System::Int64 DPNKODHICIJ; // 0x30
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FMDLALGLENN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GAAMBBFPCHB")->GetStaticField(0x52EA0);
		}

		static ::Google::Protobuf::MessageParser_1<::GAAMBBFPCHB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAAMBBFPCHB*>**)UnitySDK::FromName("", "GAAMBBFPCHB")->GetStaticField(0x52EA8);
		}

		// static const ::System::Object ICGAGDOBKAM; // 0x0
		// static const ::System::Object DIFMBKCJENG; // 0x0
		// static const ::System::Object OAALDBFGPDK; // 0x0
		// static const ::System::Object FIEMKPOELCD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAAMBBFPCHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GAAMBBFPCHB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAAMBBFPCHB*>*(*)())((::PBYTE)hIl2Cpp + GAAMBBFPCHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAAMBBFPCHB* Clone()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_CLONE_OFFSET))(this);
		}

		::System::Int64 NEJDALLPIMG()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_NEJDALLPIMG_OFFSET))(this);
		}

		::System::Void BIPGANGGAEC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_BIPGANGGAEC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OBEMPKMPHFN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_OBEMPKMPHFN_OFFSET))(this);
		}

		::System::UInt32 PNIMLCOMOJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_PNIMLCOMOJK_OFFSET))(this);
		}

		::System::Void IFJFCBKCNEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_IFJFCBKCNEI_OFFSET))(this, a1);
		}

		::System::Int64 FFFDGCMLLAI()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_FFFDGCMLLAI_OFFSET))(this);
		}

		::System::Void ENEIEIPBBPN(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_ENEIEIPBBPN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAAMBBFPCHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAAMBBFPCHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
