#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKECFAAPLIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKECFAAPLIN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE92A20)
#define OKECFAAPLIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE92DA0)
#define OKECFAAPLIN_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE92600)
#define OKECFAAPLIN_CPCMJBDMODO_OFFSET UNITYSDK_OFFSET(0x1DE926A0)
#define OKECFAAPLIN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE925C0)
#define OKECFAAPLIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE925B0)
#define OKECFAAPLIN_DMOLMOBLAJP_OFFSET UNITYSDK_OFFSET(0x1DE92680)
#define OKECFAAPLIN_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1DE92660)
#define OKECFAAPLIN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE92790)
#define OKECFAAPLIN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE926B0)
#define OKECFAAPLIN_FACFAOCBMBF_OFFSET UNITYSDK_OFFSET(0x1DE92670)
#define OKECFAAPLIN_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1DE92650)
#define OKECFAAPLIN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE92860)
#define OKECFAAPLIN_GOPLCGGEACN_OFFSET UNITYSDK_OFFSET(0x1DE92690)
#define OKECFAAPLIN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE92570)
#define OKECFAAPLIN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE92C00)
#define OKECFAAPLIN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE92BB0)
#define OKECFAAPLIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE925A0)
#define OKECFAAPLIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE92890)
#define OKECFAAPLIN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE928F0)

inline static constexpr unsigned int OKECFAAPLIN_TypeDefinitionIndex = 33873;

	class OKECFAAPLIN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFGBIBFBODP; // 0x18
		::System::UInt32 BEIPFCCPIJB; // 0x1C
		::System::UInt32 CKHHCDKNCID; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OKECFAAPLIN")->GetStaticField(0x20F70);
		}

		// static const ::System::Object DFLDAOLENMB; // 0x0
		// static const ::System::Object LCIDLBPJDHD; // 0x0
		// static const ::System::Object MJGKNNHCJCH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKECFAAPLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKECFAAPLIN*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKECFAAPLIN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OKECFAAPLIN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKECFAAPLIN* Clone()
		{
			return ((::OKECFAAPLIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_CLONE_OFFSET))(this);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKECFAAPLIN_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::System::UInt32 FACFAOCBMBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_FACFAOCBMBF_OFFSET))(this);
		}

		::System::Void DMOLMOBLAJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKECFAAPLIN_DMOLMOBLAJP_OFFSET))(this, a1);
		}

		::System::UInt32 GOPLCGGEACN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_GOPLCGGEACN_OFFSET))(this);
		}

		::System::Void CPCMJBDMODO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OKECFAAPLIN_CPCMJBDMODO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKECFAAPLIN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKECFAAPLIN*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKECFAAPLIN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKECFAAPLIN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKECFAAPLIN*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKECFAAPLIN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
