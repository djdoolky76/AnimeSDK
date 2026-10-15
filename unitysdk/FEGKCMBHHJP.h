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

#define FEGKCMBHHJP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E365CC0)
#define FEGKCMBHHJP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E365F90)
#define FEGKCMBHHJP_CGOPALJDIFG_OFFSET UNITYSDK_OFFSET(0x1E365980)
#define FEGKCMBHHJP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E365910)
#define FEGKCMBHHJP_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E365960)
#define FEGKCMBHHJP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3658E0)
#define FEGKCMBHHJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3658D0)
#define FEGKCMBHHJP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E365A80)
#define FEGKCMBHHJP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3659A0)
#define FEGKCMBHHJP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E365B50)
#define FEGKCMBHHJP_GJMDBPPKKPK_OFFSET UNITYSDK_OFFSET(0x1E365990)
#define FEGKCMBHHJP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E365890)
#define FEGKCMBHHJP_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E365970)
#define FEGKCMBHHJP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E365E10)
#define FEGKCMBHHJP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E365DD0)
#define FEGKCMBHHJP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3658C0)
#define FEGKCMBHHJP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E365B80)
#define FEGKCMBHHJP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E365BE0)

inline static constexpr unsigned int FEGKCMBHHJP_TypeDefinitionIndex = 33438;

	class FEGKCMBHHJP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJBJLDFCLOB; // 0x18
		::System::UInt32 DNKADAFBILN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FEGKCMBHHJP*>**)UnitySDK::FromName("", "FEGKCMBHHJP")->GetStaticField(0x5D650);
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
