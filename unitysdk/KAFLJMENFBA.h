#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAFLJMENFBA;
class NMHHIBMCJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAFLJMENFBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B0890)
#define KAFLJMENFBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B0BD0)
#define KAFLJMENFBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B0270)
#define KAFLJMENFBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B0200)
#define KAFLJMENFBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B01F0)
#define KAFLJMENFBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B0480)
#define KAFLJMENFBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B0310)
#define KAFLJMENFBA_FJFMPKDONJF_OFFSET UNITYSDK_OFFSET(0x1E7B0300)
#define KAFLJMENFBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B0750)
#define KAFLJMENFBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B01B0)
#define KAFLJMENFBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B0A00)
#define KAFLJMENFBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B08F0)
#define KAFLJMENFBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B01E0)
#define KAFLJMENFBA_PNHHCFDBIBF_OFFSET UNITYSDK_OFFSET(0x1E7B02F0)
#define KAFLJMENFBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B07A0)
#define KAFLJMENFBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B0800)

inline static constexpr unsigned int KAFLJMENFBA_TypeDefinitionIndex = 31448;

	class KAFLJMENFBA : public ::System::Object
	{
	public:
		::NMHHIBMCJHI* CEPGCMBOKOH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KAFLJMENFBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAFLJMENFBA*>**)UnitySDK::FromName("", "KAFLJMENFBA")->GetStaticField(0xB9C0);
		}

		// static const ::System::Object BKOEOFFCIOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAFLJMENFBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAFLJMENFBA*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAFLJMENFBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KAFLJMENFBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAFLJMENFBA*>*(*)())((::PBYTE)hIl2Cpp + KAFLJMENFBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAFLJMENFBA* Clone()
		{
			return ((::KAFLJMENFBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_CLONE_OFFSET))(this);
		}

		::NMHHIBMCJHI* PNHHCFDBIBF()
		{
			return ((::NMHHIBMCJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_PNHHCFDBIBF_OFFSET))(this);
		}

		::System::Void FJFMPKDONJF(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_FJFMPKDONJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAFLJMENFBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAFLJMENFBA*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAFLJMENFBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAFLJMENFBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAFLJMENFBA*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAFLJMENFBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
