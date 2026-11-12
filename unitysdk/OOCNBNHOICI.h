#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
class OOCNBNHOICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOCNBNHOICI_BGDEODOEPCK_OFFSET UNITYSDK_OFFSET(0x1F19FCC0)
#define OOCNBNHOICI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1A0280)
#define OOCNBNHOICI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A0530)
#define OOCNBNHOICI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F19FC10)
#define OOCNBNHOICI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F19FB70)
#define OOCNBNHOICI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F19FB60)
#define OOCNBNHOICI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F19FE50)
#define OOCNBNHOICI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F19FCE0)
#define OOCNBNHOICI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1A0120)
#define OOCNBNHOICI_IENELEDBGDH_OFFSET UNITYSDK_OFFSET(0x1F19FCD0)
#define OOCNBNHOICI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F19FB20)
#define OOCNBNHOICI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1A03A0)
#define OOCNBNHOICI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1A02E0)
#define OOCNBNHOICI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F19FB50)
#define OOCNBNHOICI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1A0190)
#define OOCNBNHOICI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1A01F0)

inline static constexpr unsigned int OOCNBNHOICI_TypeDefinitionIndex = 29090;

	class OOCNBNHOICI : public ::System::Object
	{
	public:
		::BFBHKJLJJBJ* JPDGFFGLNIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OOCNBNHOICI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOCNBNHOICI*>**)UnitySDK::FromName("", "OOCNBNHOICI")->GetStaticField(0x27EB0);
		}

		// static const ::System::Object LDCMAAOCEGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOCNBNHOICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCNBNHOICI*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCNBNHOICI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOCNBNHOICI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOCNBNHOICI*>*(*)())((::PBYTE)hIl2Cpp + OOCNBNHOICI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOCNBNHOICI* Clone()
		{
			return ((::OOCNBNHOICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_CLONE_OFFSET))(this);
		}

		::BFBHKJLJJBJ* BGDEODOEPCK()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_BGDEODOEPCK_OFFSET))(this);
		}

		::System::Void IENELEDBGDH(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_IENELEDBGDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOCNBNHOICI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOCNBNHOICI*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCNBNHOICI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOCNBNHOICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCNBNHOICI*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOCNBNHOICI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
