#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBONOPFLPDJ;
class KJJDLEIGPMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJJDLEIGPMJ_BKMGFKKGCPA_OFFSET UNITYSDK_OFFSET(0x1E86E610)
#define KJJDLEIGPMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E86EBC0)
#define KJJDLEIGPMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E86EE30)
#define KJJDLEIGPMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E86E580)
#define KJJDLEIGPMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E86E500)
#define KJJDLEIGPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E4F0)
#define KJJDLEIGPMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E86E7A0)
#define KJJDLEIGPMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E86E630)
#define KJJDLEIGPMJ_GCBGLMHLCLA_OFFSET UNITYSDK_OFFSET(0x1E86E620)
#define KJJDLEIGPMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E86EA70)
#define KJJDLEIGPMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E86E4B0)
#define KJJDLEIGPMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E86ECB0)
#define KJJDLEIGPMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E86EC20)
#define KJJDLEIGPMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E86E4E0)
#define KJJDLEIGPMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E86EAD0)
#define KJJDLEIGPMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E86EB30)

inline static constexpr unsigned int KJJDLEIGPMJ_TypeDefinitionIndex = 32400;

	class KJJDLEIGPMJ : public ::System::Object
	{
	public:
		::KBONOPFLPDJ* LGFCAGENGDM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJJDLEIGPMJ")->GetStaticField(0x1CBC0);
		}

		// static const ::System::Object FGBODCFMBFM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJJDLEIGPMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJDLEIGPMJ*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJJDLEIGPMJ* Clone()
		{
			return ((::KJJDLEIGPMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_CLONE_OFFSET))(this);
		}

		::KBONOPFLPDJ* BKMGFKKGCPA()
		{
			return ((::KBONOPFLPDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_BKMGFKKGCPA_OFFSET))(this);
		}

		::System::Void GCBGLMHLCLA(::KBONOPFLPDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KBONOPFLPDJ*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_GCBGLMHLCLA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJJDLEIGPMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJJDLEIGPMJ*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJJDLEIGPMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJDLEIGPMJ*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
