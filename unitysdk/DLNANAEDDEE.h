#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLNANAEDDEE;
class INHBMHCJJCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DLNANAEDDEE_BPMILDIFLDA_OFFSET UNITYSDK_OFFSET(0x1E1E8050)
#define DLNANAEDDEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1E8530)
#define DLNANAEDDEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E8860)
#define DLNANAEDDEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1E8020)
#define DLNANAEDDEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1E7F70)
#define DLNANAEDDEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7F60)
#define DLNANAEDDEE_DLACEPMINJE_OFFSET UNITYSDK_OFFSET(0x1E1E8060)
#define DLNANAEDDEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1E8210)
#define DLNANAEDDEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1E8090)
#define DLNANAEDDEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1E8390)
#define DLNANAEDDEE_GNOBLHIJNAB_OFFSET UNITYSDK_OFFSET(0x1E1E8080)
#define DLNANAEDDEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1E7F20)
#define DLNANAEDDEE_LFEGCHIOAAP_OFFSET UNITYSDK_OFFSET(0x1E1E8070)
#define DLNANAEDDEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1E86D0)
#define DLNANAEDDEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1E8600)
#define DLNANAEDDEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1E7F50)
#define DLNANAEDDEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1E83F0)
#define DLNANAEDDEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1E8450)

inline static constexpr unsigned int DLNANAEDDEE_TypeDefinitionIndex = 33176;

	class DLNANAEDDEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::INHBMHCJJCN* DLKDEIKKHDH; // 0x18
		::System::UInt32 KBMIHNFPECP; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DLNANAEDDEE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DLNANAEDDEE*>**)UnitySDK::FromName("", "DLNANAEDDEE")->GetStaticField(0x3DC20);
		}

		// static const ::System::Object IGHHCDMAHLB; // 0x0
		// static const ::System::Object JAKJJPMMOHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DLNANAEDDEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLNANAEDDEE*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNANAEDDEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DLNANAEDDEE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DLNANAEDDEE*>*(*)())((::PBYTE)hIl2Cpp + DLNANAEDDEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DLNANAEDDEE* Clone()
		{
			return ((::DLNANAEDDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 BPMILDIFLDA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_BPMILDIFLDA_OFFSET))(this);
		}

		::System::Void DLACEPMINJE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DLNANAEDDEE_DLACEPMINJE_OFFSET))(this, a1);
		}

		::INHBMHCJJCN* LFEGCHIOAAP()
		{
			return ((::INHBMHCJJCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_LFEGCHIOAAP_OFFSET))(this);
		}

		::System::Void GNOBLHIJNAB(::INHBMHCJJCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INHBMHCJJCN*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_GNOBLHIJNAB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DLNANAEDDEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DLNANAEDDEE*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DLNANAEDDEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DLNANAEDDEE*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DLNANAEDDEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
