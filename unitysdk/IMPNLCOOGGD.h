#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMPNLCOOGGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMPNLCOOGGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9C3A10)
#define IMPNLCOOGGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9C3D90)
#define IMPNLCOOGGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9C35F0)
#define IMPNLCOOGGD_COGNLAIFAHA_OFFSET UNITYSDK_OFFSET(0x1F9C3680)
#define IMPNLCOOGGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9C35B0)
#define IMPNLCOOGGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9C35A0)
#define IMPNLCOOGGD_DMOLMOBLAJP_OFFSET UNITYSDK_OFFSET(0x1F9C3670)
#define IMPNLCOOGGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9C3780)
#define IMPNLCOOGGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9C36A0)
#define IMPNLCOOGGD_FACFAOCBMBF_OFFSET UNITYSDK_OFFSET(0x1F9C3660)
#define IMPNLCOOGGD_FOGHJDFCBBG_OFFSET UNITYSDK_OFFSET(0x1F9C3650)
#define IMPNLCOOGGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9C3850)
#define IMPNLCOOGGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9C3560)
#define IMPNLCOOGGD_LKIBNGNDOFF_OFFSET UNITYSDK_OFFSET(0x1F9C3690)
#define IMPNLCOOGGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9C3BF0)
#define IMPNLCOOGGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9C3BA0)
#define IMPNLCOOGGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9C3590)
#define IMPNLCOOGGD_PPEAHIJAJJN_OFFSET UNITYSDK_OFFSET(0x1F9C3640)
#define IMPNLCOOGGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9C3880)
#define IMPNLCOOGGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9C38E0)

inline static constexpr unsigned int IMPNLCOOGGD_TypeDefinitionIndex = 32753;

	class IMPNLCOOGGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BGHAMFEEKBI; // 0x18
		::System::UInt32 DFGBIBFBODP; // 0x1C
		::System::UInt32 CPEDGIMANNC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IMPNLCOOGGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IMPNLCOOGGD*>**)UnitySDK::FromName("", "IMPNLCOOGGD")->GetStaticField(0x54C60);
		}

		// static const ::System::Object MIDBBNAHMBN; // 0x0
		// static const ::System::Object LCIDLBPJDHD; // 0x0
		// static const ::System::Object DCMCFDFHLLD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMPNLCOOGGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPNLCOOGGD*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMPNLCOOGGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IMPNLCOOGGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IMPNLCOOGGD*>*(*)())((::PBYTE)hIl2Cpp + IMPNLCOOGGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMPNLCOOGGD* Clone()
		{
			return ((::IMPNLCOOGGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPEAHIJAJJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_PPEAHIJAJJN_OFFSET))(this);
		}

		::System::Void FOGHJDFCBBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_FOGHJDFCBBG_OFFSET))(this, a1);
		}

		::System::UInt32 FACFAOCBMBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_FACFAOCBMBF_OFFSET))(this);
		}

		::System::Void DMOLMOBLAJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_DMOLMOBLAJP_OFFSET))(this, a1);
		}

		::System::UInt32 COGNLAIFAHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_COGNLAIFAHA_OFFSET))(this);
		}

		::System::Void LKIBNGNDOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_LKIBNGNDOFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMPNLCOOGGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMPNLCOOGGD*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMPNLCOOGGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMPNLCOOGGD*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMPNLCOOGGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
