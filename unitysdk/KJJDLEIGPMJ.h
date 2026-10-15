#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBONOPFLPDJ;
class KJJDLEIGPMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJJDLEIGPMJ_BKMGFKKGCPA_OFFSET UNITYSDK_OFFSET(0x1E841040)
#define KJJDLEIGPMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8415F0)
#define KJJDLEIGPMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E841860)
#define KJJDLEIGPMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E840FB0)
#define KJJDLEIGPMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E840F30)
#define KJJDLEIGPMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E840F20)
#define KJJDLEIGPMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8411D0)
#define KJJDLEIGPMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E841060)
#define KJJDLEIGPMJ_GCBGLMHLCLA_OFFSET UNITYSDK_OFFSET(0x1E841050)
#define KJJDLEIGPMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8414A0)
#define KJJDLEIGPMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E840EE0)
#define KJJDLEIGPMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8416E0)
#define KJJDLEIGPMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E841650)
#define KJJDLEIGPMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E840F10)
#define KJJDLEIGPMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E841500)
#define KJJDLEIGPMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E841560)

inline static constexpr unsigned int KJJDLEIGPMJ_TypeDefinitionIndex = 32400;

	class KJJDLEIGPMJ : public ::System::Object
	{
	public:
		::KBONOPFLPDJ* LGFCAGENGDM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KJJDLEIGPMJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJJDLEIGPMJ*>**)UnitySDK::FromName("", "KJJDLEIGPMJ")->GetStaticField(0x1A9B0);
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

		static ::Google::Protobuf::MessageParser_1<::KJJDLEIGPMJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJJDLEIGPMJ*>*(*)())((::PBYTE)hIl2Cpp + KJJDLEIGPMJ_JJGHOBBFNJD_OFFSET))();
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
