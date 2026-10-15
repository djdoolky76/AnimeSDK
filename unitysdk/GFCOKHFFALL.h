#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFCOKHFFALL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFCOKHFFALL_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E434880)
#define GFCOKHFFALL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E434BD0)
#define GFCOKHFFALL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E434EA0)
#define GFCOKHFFALL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E434820)
#define GFCOKHFFALL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4347F0)
#define GFCOKHFFALL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4347E0)
#define GFCOKHFFALL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E434990)
#define GFCOKHFFALL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4348B0)
#define GFCOKHFFALL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E4348A0)
#define GFCOKHFFALL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E434A60)
#define GFCOKHFFALL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4347A0)
#define GFCOKHFFALL_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E434870)
#define GFCOKHFFALL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E434D20)
#define GFCOKHFFALL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E434CE0)
#define GFCOKHFFALL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E434890)
#define GFCOKHFFALL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4347D0)
#define GFCOKHFFALL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E434A90)
#define GFCOKHFFALL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E434AF0)

inline static constexpr unsigned int GFCOKHFFALL_TypeDefinitionIndex = 33972;

	class GFCOKHFFALL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 HKMEMBIPHAN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GFCOKHFFALL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GFCOKHFFALL*>**)UnitySDK::FromName("", "GFCOKHFFALL")->GetStaticField(0x128C0);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFCOKHFFALL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFCOKHFFALL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GFCOKHFFALL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GFCOKHFFALL*>*(*)())((::PBYTE)hIl2Cpp + GFCOKHFFALL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFCOKHFFALL* Clone()
		{
			return ((::GFCOKHFFALL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCOKHFFALL_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFCOKHFFALL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFCOKHFFALL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCOKHFFALL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFCOKHFFALL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFCOKHFFALL*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFCOKHFFALL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
