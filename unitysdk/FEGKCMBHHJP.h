#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEGKCMBHHJP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEGKCMBHHJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20542C50)
#define FEGKCMBHHJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x20542F20)
#define FEGKCMBHHJP_CGOPALJDIFG_OFFSET UNITYSDK_OFFSET(0x20542910)
#define FEGKCMBHHJP_CLONE_OFFSET UNITYSDK_OFFSET(0x205428A0)
#define FEGKCMBHHJP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x205428F0)
#define FEGKCMBHHJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20542870)
#define FEGKCMBHHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x20542860)
#define FEGKCMBHHJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20542A10)
#define FEGKCMBHHJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x20542930)
#define FEGKCMBHHJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20542AE0)
#define FEGKCMBHHJP_GJMDBPPKKPK_OFFSET UNITYSDK_OFFSET(0x20542920)
#define FEGKCMBHHJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20542820)
#define FEGKCMBHHJP_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x20542900)
#define FEGKCMBHHJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20542DA0)
#define FEGKCMBHHJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20542D60)
#define FEGKCMBHHJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20542850)
#define FEGKCMBHHJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20542B10)
#define FEGKCMBHHJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x20542B70)

inline static constexpr unsigned int FEGKCMBHHJP_TypeDefinitionIndex = 34353;

	class FEGKCMBHHJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJBJLDFCLOB; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>**)UnitySDK::FromName("", "FEGKCMBHHJP")->GetStaticField(0x4AE30);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object ENDGBIJFCED; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEGKCMBHHJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEGKCMBHHJP*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>*(*)())((::PBYTE)hIl2Cpp + FEGKCMBHHJP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEGKCMBHHJP* Clone()
		{
			return ((::FEGKCMBHHJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 CGOPALJDIFG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CGOPALJDIFG_OFFSET))(this);
		}

		::System::Void GJMDBPPKKPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_GJMDBPPKKPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEGKCMBHHJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEGKCMBHHJP*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEGKCMBHHJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEGKCMBHHJP*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEGKCMBHHJP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
