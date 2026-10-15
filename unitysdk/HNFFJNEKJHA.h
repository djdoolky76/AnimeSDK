#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGOKLGGHOE;
class HNFFJNEKJHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HNFFJNEKJHA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5AF950)
#define HNFFJNEKJHA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AFCA0)
#define HNFFJNEKJHA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5AF220)
#define HNFFJNEKJHA_COIOKEFOPAH_OFFSET UNITYSDK_OFFSET(0x1E5AF330)
#define HNFFJNEKJHA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5AF150)
#define HNFFJNEKJHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF140)
#define HNFFJNEKJHA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5AF580)
#define HNFFJNEKJHA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5AF3A0)
#define HNFFJNEKJHA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5AF730)
#define HNFFJNEKJHA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5AF0D0)
#define HNFFJNEKJHA_JPMOCDNPHPK_OFFSET UNITYSDK_OFFSET(0x1E5AF380)
#define HNFFJNEKJHA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5AFAA0)
#define HNFFJNEKJHA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5AF9F0)
#define HNFFJNEKJHA_NPLJDFECACJ_OFFSET UNITYSDK_OFFSET(0x1E5AF390)
#define HNFFJNEKJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF130)
#define HNFFJNEKJHA_PDNBOGKDGPM_OFFSET UNITYSDK_OFFSET(0x1E5AF320)
#define HNFFJNEKJHA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5AF800)
#define HNFFJNEKJHA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5AF860)

inline static constexpr unsigned int HNFFJNEKJHA_TypeDefinitionIndex = 25339;

	class HNFFJNEKJHA : public ::System::Object
	{
	public:
		::EAGOKLGGHOE* HCGIFCHPCMG; // 0x10
		::System::String* HCKOFAMAPPM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::HNFFJNEKJHA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HNFFJNEKJHA*>**)UnitySDK::FromName("", "HNFFJNEKJHA")->GetStaticField(0x3B230);
		}

		// static const ::System::Object PIAFGPEAHPM; // 0x0
		// static const ::System::Object AEBGEDFEMFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HNFFJNEKJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNFFJNEKJHA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HNFFJNEKJHA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HNFFJNEKJHA*>*(*)())((::PBYTE)hIl2Cpp + HNFFJNEKJHA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HNFFJNEKJHA* Clone()
		{
			return ((::HNFFJNEKJHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_CLONE_OFFSET))(this);
		}

		::System::String* PDNBOGKDGPM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_PDNBOGKDGPM_OFFSET))(this);
		}

		::System::Void COIOKEFOPAH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_COIOKEFOPAH_OFFSET))(this, a1);
		}

		::EAGOKLGGHOE* JPMOCDNPHPK()
		{
			return ((::EAGOKLGGHOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_JPMOCDNPHPK_OFFSET))(this);
		}

		::System::Void NPLJDFECACJ(::EAGOKLGGHOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGOKLGGHOE*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_NPLJDFECACJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HNFFJNEKJHA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HNFFJNEKJHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HNFFJNEKJHA*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HNFFJNEKJHA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
