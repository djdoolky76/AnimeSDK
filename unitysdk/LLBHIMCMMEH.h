#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGODFDFPEI;
class LLBHIMCMMEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLBHIMCMMEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E968780)
#define LLBHIMCMMEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9689F0)
#define LLBHIMCMMEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E968140)
#define LLBHIMCMMEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9680C0)
#define LLBHIMCMMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9680B0)
#define LLBHIMCMMEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E968360)
#define LLBHIMCMMEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9681F0)
#define LLBHIMCMMEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E968630)
#define LLBHIMCMMEH_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E9681D0)
#define LLBHIMCMMEH_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E9681E0)
#define LLBHIMCMMEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E968070)
#define LLBHIMCMMEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E968870)
#define LLBHIMCMMEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9687E0)
#define LLBHIMCMMEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9680A0)
#define LLBHIMCMMEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E968690)
#define LLBHIMCMMEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9686F0)

inline static constexpr unsigned int LLBHIMCMMEH_TypeDefinitionIndex = 27359;

	class LLBHIMCMMEH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::DMGODFDFPEI* JEFEMOPFJOP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>**)UnitySDK::FromName("", "LLBHIMCMMEH")->GetStaticField(0x3B400);
		}

		// static const ::System::Object PIDJIHFNOKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLBHIMCMMEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBHIMCMMEH*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBHIMCMMEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>*(*)())((::PBYTE)hIl2Cpp + LLBHIMCMMEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLBHIMCMMEH* Clone()
		{
			return ((::LLBHIMCMMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_CLONE_OFFSET))(this);
		}

		::DMGODFDFPEI* GLPCHDFCIJF()
		{
			return ((::DMGODFDFPEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_GLPCHDFCIJF_OFFSET))(this);
		}

		::System::Void IKHJKFLOFKI(::DMGODFDFPEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGODFDFPEI*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_IKHJKFLOFKI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLBHIMCMMEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLBHIMCMMEH*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLBHIMCMMEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBHIMCMMEH*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLBHIMCMMEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
