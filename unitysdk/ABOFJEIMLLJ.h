#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABOFJEIMLLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABOFJEIMLLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDA40F0)
#define ABOFJEIMLLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA43C0)
#define ABOFJEIMLLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDA3CF0)
#define ABOFJEIMLLJ_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DDA3D80)
#define ABOFJEIMLLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDA3CC0)
#define ABOFJEIMLLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA3CB0)
#define ABOFJEIMLLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDA3EB0)
#define ABOFJEIMLLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDA3DA0)
#define ABOFJEIMLLJ_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1DDA3D70)
#define ABOFJEIMLLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDA3F80)
#define ABOFJEIMLLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDA3C40)
#define ABOFJEIMLLJ_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DDA3D90)
#define ABOFJEIMLLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDA4240)
#define ABOFJEIMLLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDA4200)
#define ABOFJEIMLLJ_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1DDA3D60)
#define ABOFJEIMLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDA3CA0)
#define ABOFJEIMLLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDA3FB0)
#define ABOFJEIMLLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDA4010)

inline static constexpr unsigned int ABOFJEIMLLJ_TypeDefinitionIndex = 32636;

	class ABOFJEIMLLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 GFMHFBDKDOE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ABOFJEIMLLJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABOFJEIMLLJ*>**)UnitySDK::FromName("", "ABOFJEIMLLJ")->GetStaticField(0x11360);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABOFJEIMLLJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABOFJEIMLLJ*>*(*)())((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABOFJEIMLLJ* Clone()
		{
			return ((::ABOFJEIMLLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABOFJEIMLLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABOFJEIMLLJ*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABOFJEIMLLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
