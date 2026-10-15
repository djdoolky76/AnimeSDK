#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKFPIDHMOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPKFPIDHMOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30E9F0)
#define EPKFPIDHMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30ECC0)
#define EPKFPIDHMOC_CJNIEBEEFJO_OFFSET UNITYSDK_OFFSET(0x1E30E660)
#define EPKFPIDHMOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E30E5F0)
#define EPKFPIDHMOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E30E5C0)
#define EPKFPIDHMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E30E5B0)
#define EPKFPIDHMOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30E7B0)
#define EPKFPIDHMOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30E6A0)
#define EPKFPIDHMOC_GAEJCNLBMOG_OFFSET UNITYSDK_OFFSET(0x1E30E680)
#define EPKFPIDHMOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30E880)
#define EPKFPIDHMOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E30E540)
#define EPKFPIDHMOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30EB40)
#define EPKFPIDHMOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30EB00)
#define EPKFPIDHMOC_NHNGGGEBOAC_OFFSET UNITYSDK_OFFSET(0x1E30E690)
#define EPKFPIDHMOC_PACDICDGODM_OFFSET UNITYSDK_OFFSET(0x1E30E670)
#define EPKFPIDHMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E30E5A0)
#define EPKFPIDHMOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30E8B0)
#define EPKFPIDHMOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30E910)

inline static constexpr unsigned int EPKFPIDHMOC_TypeDefinitionIndex = 29352;

	class EPKFPIDHMOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIOHMLINHPC; // 0x18
		::System::UInt32 BLEIDKKMBDE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EPKFPIDHMOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EPKFPIDHMOC*>**)UnitySDK::FromName("", "EPKFPIDHMOC")->GetStaticField(0x11A30);
		}

		// static const ::System::Object GGGIHDBJMFN; // 0x0
		// static const ::System::Object MIFCIPEBBEN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPKFPIDHMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPKFPIDHMOC*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EPKFPIDHMOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EPKFPIDHMOC*>*(*)())((::PBYTE)hIl2Cpp + EPKFPIDHMOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPKFPIDHMOC* Clone()
		{
			return ((::EPKFPIDHMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CJNIEBEEFJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CJNIEBEEFJO_OFFSET))(this);
		}

		::System::Void PACDICDGODM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_PACDICDGODM_OFFSET))(this, a1);
		}

		::System::UInt32 GAEJCNLBMOG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_GAEJCNLBMOG_OFFSET))(this);
		}

		::System::Void NHNGGGEBOAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_NHNGGGEBOAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPKFPIDHMOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPKFPIDHMOC*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPKFPIDHMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPKFPIDHMOC*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPKFPIDHMOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
