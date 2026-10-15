#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NMLPMPKAPHE.h"
#include "unitysdk/System/Object.h"
class DAGNHGIBCPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DAGNHGIBCPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E152010)
#define DAGNHGIBCPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E152320)
#define DAGNHGIBCPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E151C50)
#define DAGNHGIBCPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E151C20)
#define DAGNHGIBCPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E151C10)
#define DAGNHGIBCPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E151DC0)
#define DAGNHGIBCPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E151CE0)
#define DAGNHGIBCPG_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E151CB0)
#define DAGNHGIBCPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E151E90)
#define DAGNHGIBCPG_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E151CA0)
#define DAGNHGIBCPG_JJDKOEONGHO_OFFSET UNITYSDK_OFFSET(0x1E151CD0)
#define DAGNHGIBCPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E151BD0)
#define DAGNHGIBCPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1521A0)
#define DAGNHGIBCPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E152160)
#define DAGNHGIBCPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E151C00)
#define DAGNHGIBCPG_PKFKJCPLLOM_OFFSET UNITYSDK_OFFSET(0x1E151CC0)
#define DAGNHGIBCPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E151EC0)
#define DAGNHGIBCPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E151F20)

inline static constexpr unsigned int DAGNHGIBCPG_TypeDefinitionIndex = 27851;

	class DAGNHGIBCPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NMLPMPKAPHE AFHHMCKLLAJ; // 0x18
		::System::UInt32 LAPNIOGIGPL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::DAGNHGIBCPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DAGNHGIBCPG*>**)UnitySDK::FromName("", "DAGNHGIBCPG")->GetStaticField(0x248B0);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object ODHBDFKGPJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DAGNHGIBCPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGNHGIBCPG*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAGNHGIBCPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DAGNHGIBCPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DAGNHGIBCPG*>*(*)())((::PBYTE)hIl2Cpp + DAGNHGIBCPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DAGNHGIBCPG* Clone()
		{
			return ((::DAGNHGIBCPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_CLONE_OFFSET))(this);
		}

		::NMLPMPKAPHE JBENBABCOGB()
		{
			return ((::NMLPMPKAPHE(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::NMLPMPKAPHE a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMLPMPKAPHE))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 PKFKJCPLLOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_PKFKJCPLLOM_OFFSET))(this);
		}

		::System::Void JJDKOEONGHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_JJDKOEONGHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DAGNHGIBCPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DAGNHGIBCPG*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DAGNHGIBCPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAGNHGIBCPG*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DAGNHGIBCPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
