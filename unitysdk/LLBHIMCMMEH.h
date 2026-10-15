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

#define LLBHIMCMMEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E995DE0)
#define LLBHIMCMMEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E996050)
#define LLBHIMCMMEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9957A0)
#define LLBHIMCMMEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E995720)
#define LLBHIMCMMEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E995710)
#define LLBHIMCMMEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9959C0)
#define LLBHIMCMMEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E995850)
#define LLBHIMCMMEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E995C90)
#define LLBHIMCMMEH_GLPCHDFCIJF_OFFSET UNITYSDK_OFFSET(0x1E995830)
#define LLBHIMCMMEH_IKHJKFLOFKI_OFFSET UNITYSDK_OFFSET(0x1E995840)
#define LLBHIMCMMEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9956D0)
#define LLBHIMCMMEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E995ED0)
#define LLBHIMCMMEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E995E40)
#define LLBHIMCMMEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E995700)
#define LLBHIMCMMEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E995CF0)
#define LLBHIMCMMEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E995D50)

inline static constexpr unsigned int LLBHIMCMMEH_TypeDefinitionIndex = 27359;

	class LLBHIMCMMEH : public ::System::Object
	{
	public:
		::DMGODFDFPEI* JEFEMOPFJOP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLBHIMCMMEH*>**)UnitySDK::FromName("", "LLBHIMCMMEH")->GetStaticField(0x4B2F0);
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
