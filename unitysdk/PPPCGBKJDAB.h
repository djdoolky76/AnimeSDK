#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPPCGBKJDAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPPCGBKJDAB_BHHDGJCMPDP_OFFSET UNITYSDK_OFFSET(0x1DFB7820)
#define PPPCGBKJDAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFB7C60)
#define PPPCGBKJDAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFB7F20)
#define PPPCGBKJDAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFB77D0)
#define PPPCGBKJDAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFB7730)
#define PPPCGBKJDAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFB76E0)
#define PPPCGBKJDAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFB78D0)
#define PPPCGBKJDAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFB7850)
#define PPPCGBKJDAB_FMEKFIALNOJ_OFFSET UNITYSDK_OFFSET(0x1DFB7830)
#define PPPCGBKJDAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFB79D0)
#define PPPCGBKJDAB_GJLGIDILAPF_OFFSET UNITYSDK_OFFSET(0x1DFB7840)
#define PPPCGBKJDAB_HPNGDONMAPF_OFFSET UNITYSDK_OFFSET(0x1DFB7810)
#define PPPCGBKJDAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFB76A0)
#define PPPCGBKJDAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFB7E30)
#define PPPCGBKJDAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFB7DD0)
#define PPPCGBKJDAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFB76D0)
#define PPPCGBKJDAB_PHCMBNJGBGB_OFFSET UNITYSDK_OFFSET(0x1DFB7800)
#define PPPCGBKJDAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFB7AD0)
#define PPPCGBKJDAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFB7B30)

inline static constexpr unsigned int PPPCGBKJDAB_TypeDefinitionIndex = 30267;

	class PPPCGBKJDAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MIOMJLCOFKB; // 0x18
		::System::UInt32 PFDKNPJLHJN; // 0x20
		::System::UInt32 FACHANGNFIN; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PPPCGBKJDAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPPCGBKJDAB*>**)UnitySDK::FromName("", "PPPCGBKJDAB")->GetStaticField(0x47F10);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CHFNMMDJDOG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PPPCGBKJDAB")->GetStaticField(0x47F18);
		}

		// static const ::System::Object LJEDNBHJPDA; // 0x0
		// static const ::System::Object KDEAHPHDDHH; // 0x0
		// static const ::System::Object OOKLDLHMOFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPPCGBKJDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPPCGBKJDAB*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPPCGBKJDAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPPCGBKJDAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPPCGBKJDAB*>*(*)())((::PBYTE)hIl2Cpp + PPPCGBKJDAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPPCGBKJDAB* Clone()
		{
			return ((::PPPCGBKJDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 PHCMBNJGBGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_PHCMBNJGBGB_OFFSET))(this);
		}

		::System::Void HPNGDONMAPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_HPNGDONMAPF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BHHDGJCMPDP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_BHHDGJCMPDP_OFFSET))(this);
		}

		::System::UInt32 FMEKFIALNOJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_FMEKFIALNOJ_OFFSET))(this);
		}

		::System::Void GJLGIDILAPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_GJLGIDILAPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPPCGBKJDAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPPCGBKJDAB*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPPCGBKJDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPPCGBKJDAB*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPPCGBKJDAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
