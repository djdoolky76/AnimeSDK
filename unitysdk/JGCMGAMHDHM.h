#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGCMGAMHDHM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGCMGAMHDHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E737DC0)
#define JGCMGAMHDHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E738090)
#define JGCMGAMHDHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E737A10)
#define JGCMGAMHDHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7379E0)
#define JGCMGAMHDHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7379D0)
#define JGCMGAMHDHM_DJFLIICAOBK_OFFSET UNITYSDK_OFFSET(0x1E737A60)
#define JGCMGAMHDHM_DMCGIHGCMGK_OFFSET UNITYSDK_OFFSET(0x1E737A70)
#define JGCMGAMHDHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E737B80)
#define JGCMGAMHDHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E737AA0)
#define JGCMGAMHDHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E737C50)
#define JGCMGAMHDHM_HCENFHDIBMG_OFFSET UNITYSDK_OFFSET(0x1E737A80)
#define JGCMGAMHDHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E737990)
#define JGCMGAMHDHM_KHIHOBPFPFM_OFFSET UNITYSDK_OFFSET(0x1E737A90)
#define JGCMGAMHDHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E737F10)
#define JGCMGAMHDHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E737ED0)
#define JGCMGAMHDHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7379C0)
#define JGCMGAMHDHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E737C80)
#define JGCMGAMHDHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E737CE0)

inline static constexpr unsigned int JGCMGAMHDHM_TypeDefinitionIndex = 33146;

	class JGCMGAMHDHM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DMFALPBCGJA; // 0x18
		::System::UInt32 PPIILDNBDHO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGCMGAMHDHM")->GetStaticField(0x60700);
		}

		// static const ::System::Object HGKBJMGGPGL; // 0x0
		// static const ::System::Object KEJACKIDEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGCMGAMHDHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCMGAMHDHM*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGCMGAMHDHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGCMGAMHDHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGCMGAMHDHM* Clone()
		{
			return ((::JGCMGAMHDHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_CLONE_OFFSET))(this);
		}

		::System::UInt32 DJFLIICAOBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_DJFLIICAOBK_OFFSET))(this);
		}

		::System::Void DMCGIHGCMGK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_DMCGIHGCMGK_OFFSET))(this, a1);
		}

		::System::UInt32 HCENFHDIBMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_HCENFHDIBMG_OFFSET))(this);
		}

		::System::Void KHIHOBPFPFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_KHIHOBPFPFM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGCMGAMHDHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGCMGAMHDHM*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGCMGAMHDHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGCMGAMHDHM*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGCMGAMHDHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
